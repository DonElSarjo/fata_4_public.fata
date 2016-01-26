DES_mission_fnc_tsk5 =
{
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		[spawned_patr] call DES_fnc_deletePatrols;
		deleteVehicle veh0;
		deleteVehicle veh1;
		deleteVehicle veh2;
		deleteVehicle trg0;
		veh0 = nil;
		veh1 = nil;
		veh2 = nil;
		trg0 = nil;
		spawned_patr = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		["tsk1", EAST] call BIS_fnc_deleteTask;
		EH_veh1Killed = nil;
		EH_veh2Killed = nil;
		DES_fnc_missionEnd = nil;
	};

	//get variables
	_mission_pos = ((_this select 0)select 0);

	veh0 = "Box_East_AmmoOrd_F" createVehicle getMarkerPos "base";
	_wreck_available =
	[
		"RHS_Ka52_UPK23_vvsc",
		"rhs_ka60_c",
		"RHS_Mi24P_AT_vdv",
		"RHS_Mi24V_AT_vvs",
		"RHS_Mi8AMTSh_FAB_vvsc",
		"RHS_Mi8mt_Cargo_vvs"
	] call BIS_fnc_selectRandom;
	veh1 = _wreck_available createVehicle  _mission_pos;
	veh1 setDamage 0.85;
	veh1 setFuel 0;
	veh1 enableSimulationGlobal false;
	[0,veh1] remoteExec ["DES_fnc_spawnSmoke"];

	_grp = createGroup EAST;
	veh2 = _grp createUnit ["rhs_pilot", [(_mission_pos select 0) + 30, (_mission_pos select 1) + 30, 0], [], 0, "CAN_COLLIDE"];
	veh2 setCaptive true;
	veh2 switchMove "Acts_AidlPsitMstpSsurWnonDnon_loop";
	veh2 disableAI "MOVE";
	veh2 disableAI "FSM";
	veh2 disableAi "TARGET";
	veh2 disableAI "AUTOTARGET";
	[veh2, ["Die Geisel befreien.", "fnc\release.sqf"]] remoteExec ["addAction", 0, true];

	spawned_patr = [_mission_pos, 2, 1, 0] call DES_fnc_SpawnPatrols;
	{ deleteWaypoint _x} forEach waypoints ((spawned_patr select 0)select 0);
	[((spawned_patr select 0)select 0), _mission_pos] call bis_fnc_taskDefend;

	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			"Bringen Sie den abgestüzten Piloten zurück in die Basis.",
			"Absturz / Pilot",
			"Pilot"
		],
		getPos veh2,
		1,
		1,
		true,
		"Search",
		false
	] call BIS_fnc_taskCreate;

	_null =
	[
		EAST,
		"tsk1",
		[
			"Sprengen Sie das Wrack",
			"Absturz / Wrack",
			"Wrack"
		],
		getPos veh1,
		1,
		1,
		true,
		"Destroy",
		false
	] call BIS_fnc_taskCreate;

	//create trigger
	EH_veh1Killed = veh1 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
			[east, 2] call BIS_fnc_respawnTickets;
		}
	];
	EH_veh2Killed = veh2 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "FAILED"] call BIS_fnc_taskSetState;
			call DES_fnc_missionEnd;
		}
	];

	trg0 = createTrigger ["EmptyDetector",  getMarkerPos "base"];
	trg0 setTriggerArea [50, 50, 0, false];
	trg0 setTriggerStatements
	[
		"[trg0, veh2] call BIS_fnc_inTrigger",
		"
			_null = ['tsk0','SUCCEEDED'] call BIS_fnc_taskSetState;
			[east, 3] call BIS_fnc_respawnTickets;
			call DES_fnc_missionEnd;
		",
		""
	];
	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
