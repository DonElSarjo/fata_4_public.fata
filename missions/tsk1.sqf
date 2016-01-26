DES_mission_fnc_tsk1 =
{
	//debug
	systemchat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		{deleteVehicle _x} foreach units grp_spawn_inf;
		{deleteVehicle _x} forEach composition;
		deleteVehicle veh0;
		deleteVehicle trg0;
		veh0 = nil;
		trg0 = nil;
		composition = nil;
		grp_spawn_inf = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		EH_vehKilled = nil;
		DES_fnc_missionEnd = nil;
	};
	_DES_fnc_clearCargo =
	{
		_obj = _this select 0;
		clearItemCargoGlobal _obj;
		clearWeaponCargoGlobal _obj;
		clearMagazineCargoGlobal _obj;
		clearBackpackCargoGlobal _obj;
	};


	//get variables
	_mission_pos = ((_this select 0)select 0);

	//spawn task
	_null =
	[
		EAST,
		"tsk0",
		[
			"Bringen Sie die Hilfgüter mit zur angegebenen Abladezone",
			"Versorgunskisten",
			"Abladezone"
		],
		_mission_pos,
		1,
		1,
		true,
		"Support",
		false
	] call BIS_fnc_taskCreate;

	//spawn mission objects
	veh0 = "O_supplyCrate_F" createVehicle getMarkerPos "base";
	[veh0] call _DES_fnc_clearCargo;
	veh0 addItemCargoGlobal ["ACE_Banana", 100];

	//add EH
	EH_vehKilled = veh0 addEventhandler
	[
		"Killed",
		{
				_null = ['tsk0', 'FAILED'] call BIS_fnc_taskSetState;
				call DES_fnc_missionEnd;
		}
	];
	//spawn mission composition
	composition  = [_mission_pos, random 360, call (compile (preprocessFileLineNumbers ("Compositions\Misc\sup_hq.sqf")))] call BIS_fnc_ObjectsMapper;

	//spawn own units patroling the composition
	_grp_type =
	[
		"rhs_group_rus_msv_infantry_emr_squad",
		"rhs_group_rus_msv_infantry_emr_squad_2mg",
		"rhs_group_rus_msv_infantry_emr_squad_mg_sniper",
		"rhs_group_rus_msv_infantry_emr_squad_sniper"
	] call BIS_fnc_selectRandom;
	_grp_spawn_pos = _mission_pos findEmptyPosition [0, 150];
	grp_spawn_inf = [_grp_spawn_pos,  EAST, configfile >> "CfgGroups" >> "East" >> "rhs_faction_msv" >> "rhs_group_rus_msv_infantry_emr" >> _grp_type] call BIS_fnc_spawnGroup;
	[grp_spawn_inf, _mission_pos, 10, 150, "MOVE", "COLUMN", "SAFE", "YELLOW", "LIMITED", "", [3, 4, 5]] call DES_fnc_taskPatrol;

	//spawn trigger
	trg0 = createTrigger ["EmptyDetector",  _mission_pos];
	trg0 setTriggerArea [50, 50, 0, false ];
	trg0 setTriggerStatements
	[
		"[trg0, veh0] call BIS_fnc_inTrigger",
		"
			_null = ['tsk0', 'SUCCEEDED'] call BIS_fnc_taskSetState;
			[east, 3] call BIS_fnc_respawnTickets;
			[] spawn
			{
				[180, 1] remoteExec ['DES_fnc_timer', -2];
				sleep 180;
				call DES_fnc_missionEnd;
			};
		",
		""
	];

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
