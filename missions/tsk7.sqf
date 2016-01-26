DES_mission_fnc_tsk7 =
{
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
			[spawned_patr] call DES_fnc_deletePatrols;
			{deleteVehicle _x} forEach composition;
			deleteVehicle veh0;
			veh0 = nil;
			composition = nil;
			spawned_patr = nil;
			["tsk0", EAST] call BIS_fnc_deleteTask;
			DES_fnc_missionEnd = nil;
			EH_veh0Killed = nil;
	};

	//get variables
	Private ["_loc"];

	_mission_pos = ((_this select 0)select 0);

	_towns = nearestLocations [ _mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "NameLocal", "Name"], 5000];
	if (count _towns == 0) then
	{
		_loc = "der eingezeichneten Position";
	}
	else
	{
		_loc = text (_towns select 0);
	};

	_selectedComposition = ["ArtilleryPosition", "CampAnt", "CampBear", "CampCrow", "CampDear", "CampEagle", "CampFalcon", "FieldHQ", "HQOutpost"] call BIS_fnc_selectRandom;
	composition  = [_mission_pos, 0, call (compile (preprocessFileLineNumbers ("Compositions\Camps\" + _selectedComposition + ".sqf")))] call BIS_fnc_ObjectsMapper;

	veh0 = "Box_IND_Wps_F" createVehicle _mission_pos;
	EH_veh0Killed = veh0 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
			[east, 5] call BIS_fnc_respawnTickets;
			[]spawn
			{
				[180, 1] remoteExec ["DES_fnc_timer",-2];
				sleep 180;
				call DES_fnc_missionEnd;
			};
		}
	];

	spawned_patr = [_mission_pos, 1, 1, 0] call DES_fnc_SpawnPatrols;
	{ deleteWaypoint _x} forEach waypoints ((spawned_patr select 0)select 0);
	[((spawned_patr select 0)select 0), _mission_pos] call BIS_fnc_taskDefend;

	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Begeben Sie sich in die Nähe von %1 und vernichten Sie das Waffendepot", str (_loc)],
			"Waffendepot",
			"Waffendepot"
		],
		_mission_pos,
		1,
		1,
		true,
		"Destroy",
		false
	] call BIS_fnc_taskCreate;

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
