DES_mission_fnc_tsk3 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for cleanup
	DES_fnc_missionEnd =
	{
		deleteVehicle veh0;
		veh0 = nil;
		[EAST, "tsk0"] call DES_fnc_removeTask;
		EH_vehKilled = nil;
		EH_vehGetOut = nil;
		DES_fnc_missionEnd = nil;
	};

	//get variables
	_mission_pos = ((_this select 0)select 0);

	//spawn Task
	_null =
	[
		EAST,
		"tsk0",
		[
			"Bringen Sie das Fahrzeuge sicher an seinen Bestimmungsort",
			"Konvoi",
			"Ziel"
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
	veh0 = _veh0_available createVehicle getMarkerPos "base";

	//add EH
	EH_vehKilled = veh0 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "FAILED"] call BIS_fnc_taskSetState;
			call DES_fnc_missionEnd;
		}
	];

	EH_vehGetOut = veh0 addEventhandler
	[
		"GetOut",
		{
			if (((_this select 0) distance2D (["tsk0"] call BIS_fnc_taskDestination)) < 50) then
			{
				_null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
				call DES_fnc_missionEnd;
				[east, 5] call BIS_fnc_respawnTickets;
			};
		}
	];

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
