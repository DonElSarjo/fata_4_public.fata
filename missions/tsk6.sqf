DES_mission_fnc_tsk6 =
{
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		[spawned_patr] call DES_fnc_deletePatrols;
		deleteVehicle veh0;
		veh0 = nil;
		spawned_patr = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		EH_veh0Killed = nil;
		DES_fnc_missionEnd = nil;
	};

	//get variables
	_mission_pos = ((_this select 0)select 0);
	_towns = nearestLocations [ _mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "Name"], 5000];
	_loc = text (_towns select 0);

	//create vehicle
	spawned_patr = [_mission_pos, 1, 1, 1] call DES_fnc_SpawnPatrols;

	_positionmen = _mission_pos findEmptyPosition [0, 200];

	_grp = (spawned_patr select 0) call BIS_fnc_selectRandom;

	veh0 = _grp createUnit ["rhs_g_Soldier_F", _positionmen, [], 10, "NONE"];
	removeAllWeapons veh0;
	removeAllItems veh0;
	removeAllAssignedItems veh0;
	removeUniform veh0;
	removeVest veh0;
	removeBackpack veh0;
	removeHeadgear veh0;
	removeGoggles veh0;
	veh0 forceAddUniform "U_OrestesBody";
	for "_i" from 1 to 6 do {veh0 addItemToUniform "ACE_fieldDressing";};
	for "_i" from 1 to 2 do {veh0 addItemToUniform "ACE_morphine";};
	veh0 addBackpack "B_Carryall_oucamo";
	for "_i" from 1 to 2 do {veh0 addItemToBackpack "MiniGrenade";};
	for "_i" from 1 to 2 do {veh0 addItemToBackpack "HandGrenade";};
	for "_i" from 1 to 4 do {veh0 addItemToBackpack "SmokeShell";};
	for "_i" from 1 to 5 do {veh0 addItemToBackpack "rhsusf_mag_6Rnd_M441_HE";};
	for "_i" from 1 to 5 do {veh0 addItemToBackpack "rhsusf_mag_6Rnd_M433_HEDP";};
	for "_i" from 1 to 5 do {veh0 addItemToBackpack "rhsusf_mag_6Rnd_M576_Buckshot";};
	for "_i" from 1 to 5 do {veh0 addItemToBackpack "rhsusf_mag_6Rnd_M781_Practice";};
	for "_i" from 1 to 5 do {veh0 addItemToBackpack "rhsusf_mag_6Rnd_M714_white";};
	veh0 addHeadgear "H_PilotHelmetFighter_I";
	veh0 addVest "V_Press_F";
	veh0 addWeapon "rhs_weap_m32";
	veh0 addWeapon "rhs_weap_M136";
	veh0 linkItem "ItemMap";
	veh0 linkItem "ItemCompass";
	veh0 linkItem "ItemWatch";

	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			format["Begeben Sie sich nach %1 und neutralisieren Sie die Zielperson", str (_loc)],
			"Neutralisieren der Zielperson",
			format["%1", str (_loc)]
		],
		getPos veh0,
		1,
		1,
		true,
		"Destroy",
		false
	] call BIS_fnc_taskCreate;

	EH_veh0Killed = veh0 addEventhandler
	[
		"Killed",
		{
			_null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
			call DES_fnc_missionEnd;
			[east, 5] call BIS_fnc_respawnTickets;
		}
	];
	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
