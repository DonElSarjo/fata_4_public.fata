DES_mission_fnc_tsk2 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		[spawned_patr] call DES_fnc_deletePatrols;
		deleteVehicle veh0;
		deleteVehicle trg0;
		veh0 = nil;
		trg0 = nil;
		spawned_patr = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		EH_vehKilled = nil;
		EH_vehGetIn = nil;
		DES_fnc_missionEnd = nil;
	};

	//get variables
	_mission_pos = ((_this select 0)select 0);

	//spawn task
	_null =
	[
		EAST,
		"tsk0",
		[
			"Ein Laster der MSV wurde überfallen und immobilisiert. Bergen Sie den Laster und bringen Sie Ihn zurück zur Basis!",
			"Laster bergen",
			"Laster"
		],
		_mission_pos,
		1,
		1,
		true,
		"Move",
		false
	] call BIS_fnc_taskCreate;

	//spawn mission objects
	_veh0_available =
	[
		"RHS_Ural_MSV_01",
		"RHS_Ural_Fuel_MSV_01",
		"RHS_Ural_Open_MSV_01",
		"rhs_gaz66_repair_msv",
		"rhs_gaz66_ap2_msv",
		"rhs_gaz66o_flat_msv",
		"rhs_gaz66o_msv",
		"rhs_gaz66_flat_msv",
		"rhs_gaz66_ammo_msv",
		"rhs_gaz66_msv"
	] call BIS_fnc_selectRandom;
	veh0 = _veh0_available createVehicle _mission_pos;
	veh0 setfuel 0;
	[1, veh0] remoteExec ["DES_fnc_spawnSmoke"];

	//addEH
	EH_vehKilled = veh0 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "FAILED"] call BIS_fnc_taskSetState;
			call DES_fnc_missionEnd;
		}
	];
	EH_vehGetIn = veh0 addEventhandler
	[
		"GetIn",
		{
			if (_this select 2 == player) then
			{
				["tsk0", getMarkerPos "base"] call BIS_fnc_taskSetDestination;
				veh0 removeEventHandler ["GetIn", EH_vehGetIn];
			};
		}
	];

	//spawn patrol
	spawned_patr = [_mission_pos, 1, 1, 1] call DES_fnc_SpawnPatrols;

	//create trigger
	trg0 = createTrigger ["EmptyDetector",  getMarkerPos "base"];
	trg0 setTriggerArea [50, 50, 0, false ];
	trg0 setTriggerStatements
	[
		"[trg0, veh0] call BIS_fnc_inTrigger",
		"
			_null = ['tsk0','SUCCEEDED'] call BIS_fnc_taskSetState;
			[east, 5] call BIS_fnc_respawnTickets;
			call DES_fnc_missionEnd;
		",
		""
	];

	//debug
	systemChat format ["Mission created after %1 sec",(time - _time)];
}
