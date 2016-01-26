DES_mission_fnc_tsk14 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		[spawned_patr] call DES_fnc_deletePatrols;
		{deleteVehicle _x} forEach composition;
		deleteVehicle veh0;
	    deleteVehicle vehicle_1;
		veh0 = nil;
		vehicle_1 = nil;
		composition = nil;
		spawned_patr = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		EH_vehicle_1Killed = nil;
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
			format ["Begeben Sie sich in die Nähe von %1 und vernichten Sie die feindliche AA Stellung. Ihnen steht zudem auch eine Kiste mit Sprengsätzen zur Verfügung", str (_loc)],
			"ZSU-23-4V Zerstören",
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

	composition  = [_mission_pos, 0, call (compile (preprocessFileLineNumbers ("Compositions\Misc\AAPos.sqf")))] call BIS_fnc_ObjectsMapper;

	//create Patrols
	spawned_patr = [_mission_pos, 1, 1, 0] call DES_fnc_SpawnPatrols;
	{ deleteWaypoint _x} forEach waypoints ((spawned_patr select 0)select 0);
	[((spawned_patr select 0)select 0), _mission_pos] call BIS_fnc_taskDefend;

	"rhs_g_Soldier_F" createUnit [[0, 0, 0], ((spawned_patr select 0)select 0), "this moveingunner static_1", 0.3, "Privat"];
	"rhs_g_Soldier_F" createUnit [[0, 0, 0], ((spawned_patr select 0)select 0), "this moveingunner static_2", 0.3, "Privat"];
	"rhs_g_Soldier_F" createUnit [[0, 0, 0], ((spawned_patr select 0)select 0), "this moveingunner static_3", 0.3, "Privat"];

	_arty1 = ((spawned_patr select 0)select 0) createUnit ["rhs_g_Soldier_F", [0, 0, 0], [], 0, "NONE"];
	_arty1 moveingunner vehicle_1;
	_arty2 = ((spawned_patr select 0)select 0) createUnit ["rhs_g_Soldier_F", [0, 0, 0], [], 0, "NONE"];
	_arty2 moveindriver vehicle_1;
	_arty3 = ((spawned_patr select 0)select 0) createUnit ["rhs_g_Soldier_F", [0, 0, 0], [], 0, "NONE"];
	_arty3 moveincommander vehicle_1;

	//add EH
	EH_vehicle_1Killed = vehicle_1 addEventhandler
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
