DES_mission_fnc_tsk16 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		[spawned_patr] call DES_fnc_deletePatrols;
		{deleteVehicle _x} forEach composition;
	    EH_veh0Killed = nil;
		veh0 = nil;
		composition = nil;
		spawned_patr = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		DES_fnc_missionEnd = nil;
	};

	//get variables
	Private ["_loc"];

	_mission_pos = ((_this select 0)select 0);

	_towns = nearestLocations [_mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "Name"],5000];
	if (count _towns == 0) then
	{
		_loc = "der eingezeichneten Position";
	}
	else
	{
		_loc = text (_towns select 0);
	};
	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Stellen Sie die Daten des in der Nähe von %1 abgestürzten feindlichen Flugzeuges sicher und senden Sie diese an die Basis", str (_loc)],
			"Flugschreiber",
			"Wrack"
		],
		_mission_pos,
			1,
		1,
		true,
		"Search",
		false
	] call BIS_fnc_taskCreate;

	//create mission objects
	veh0 = "Land_DataTerminal_01_F" createVehicle _mission_pos;
	[
	    veh0,
	    [
	        "Flugschreiber bergen",
	        {
	            _null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
	            [east, 5] call BIS_fnc_respawnTickets;
	            deleteVehicle veh0;
	            [] spawn
	            {
	                sleep 180;
	                call DES_fnc_missionEnd;
	            };
	        }
	    ]
	] remoteExec ["addAction"];
	_selectedComposition = ["OspreySite", "C192Site"] call BIS_fnc_selectRandom;
	composition  = [_mission_pos, 0, call (compile (preprocessFileLineNumbers ("Compositions\Misc\" + _selectedComposition + ".sqf")))] call BIS_fnc_ObjectsMapper;

	EH_veh0Killed = veh0 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "FAILED"] call BIS_fnc_taskSetState;
			[] spawn
			{
				[180, 1] remoteExec ["DES_fnc_timer", -2];
				sleep 180;
				call DES_fnc_missionEnd;
			};
		}
	];

	//create Patrols
	spawned_patr = [_mission_pos, 2, 1, 0] call DES_fnc_SpawnPatrols;
	{deleteWaypoint _x} forEach waypoints ((spawned_patr select 0)select 0);
	[((spawned_patr select 0)select 0), _mission_pos] call BIS_fnc_taskDefend;

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
