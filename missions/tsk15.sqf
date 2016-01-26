DES_mission_fnc_tsk15 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		[spawned_patr] call DES_fnc_deletePatrols;
		deleteVehicle veh0;
	    deleteVehicle veh1;
		veh0 = nil;
		veh1 = nil;
		spawned_patr = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		EH_veh1Killed = nil;
		DES_fnc_missionEnd = nil;
	};

	//get variables
	Private ["_loc"];

	_mission_pos = ((_this select 0)select 0);

	_towns = nearestLocations [_mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "Name"], 5000];
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
			format ["Begeben Sie sich in die Nähe von %1 und zerstören Sie die abgestürzte Drone vom Typ Pechela-1T. Ihnen steht zudem auch eine Kiste mit Sprengsätzen zur Verfuegung", str (_loc)],
			"Drone Zerstören",
			"Stellung"
		],
		_mission_pos,
		1,
		1,
		true,
		"Destroy",
		false
	] call BIS_fnc_taskCreate;

	//create mission objects
	veh0 = "Box_East_AmmoOrd_F" createVehicle getMarkerPos "base";
	veh1 = "rhs_pchela1t_vvs" createVehicle _mission_pos;
	[1, veh1] remoteExec ["DES_fnc_spawnSmoke"];

	//create Patrols
	spawned_patr = [_mission_pos, 2, 1, 1] call DES_fnc_SpawnPatrols;
	{ deleteWaypoint _x} forEach waypoints ((spawned_patr select 0)select 0);
	[((spawned_patr select 0)select 0),_mission_pos] call BIS_fnc_taskDefend;


	//add EH
	EH_veh1Killed = veh1 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
			[east, 6] call BIS_fnc_respawnTickets;
			[] spawn
			{
				[180, 1] remoteExec ["DES_fnc_timer", -2];
				sleep 180;
				call DES_fnc_missionEnd;
			};

		}
	];
	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
