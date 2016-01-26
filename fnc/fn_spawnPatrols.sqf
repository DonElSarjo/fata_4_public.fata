//get variables
_mission_patr_pos = _this select 0;
_inf_grps = _this select 1;
_mot_grps = _this select 2;
_mech_grps = _this select 3;

private ["_grp_inf_array", "_grp_mot_array", "_grp_mech_array", "_town_patr_pos", "_check_town", "_empty_group", "_grp_spawn_pos", "_mission_patr_pos"];
_grp_inf_array = [];
_grp_mot_array = [];
_grp_mech_array = [];

//get patr pos for inf

//spawn inf group
if (_inf_grps > 0) then
{
	for "_i" from 0 to _inf_grps - 1 step 1 do
	{
		_grp_type = grp_array_inf call BIS_fnc_selectRandom;
		_grp_spawn_pos = _mission_patr_pos findEmptyPosition [0, 150];
		_grp_spawn_inf = [_grp_spawn_pos,  resistance, _grp_type] call BIS_fnc_spawnGroup;
		[_grp_spawn_inf, _grp_spawn_pos,10,300,"MOVE", "COLUMN", "SAFE", "YELLOW", "LIMITED", "", [3, 4, 5]] call DES_fnc_taskPatrol;
		_grp_inf_array pushBack _grp_spawn_inf;
	};
};
if (_mot_grps > 0) then
{
	for "_j" from 0 to _mot_grps - 1 step 1 do
	{
		//create veh
		_grp_type = grp_array_mot call BIS_fnc_selectRandom;
		_grp_spawn_pos = _mission_patr_pos findEmptyPosition [20, 300, "rhs_ural_chdkz"];

		_dummyveh = "rhs_ural_chdkz" createVehicle _grp_spawn_pos;
		_dummyvehpos = getPos _dummyveh;
		deleteVehicle _dummyveh;

		_grp_spawn_mot = [_dummyvehpos,  resistance, _grp_type] call BIS_fnc_spawnGroup;
		[_grp_spawn_mot, _grp_spawn_pos, 10, 500, "MOVE", "COLUMN", "SAFE", "YELLOW", "LIMITED", "", [3, 4, 5]] call DES_fnc_taskPatrol;
		_grp_mot_array pushBack _grp_spawn_mot;
	};
};
//spawn mech group
if (_mech_grps > 0) then
{
	for "_k" from 0 to _mech_grps - 1 step 1 do
	{
		//create veh
		_grp_type = grp_array_mech call BIS_fnc_selectRandom;
		_grp_spawn_pos = _mission_patr_pos findEmptyPosition [30, 400, "rhs_btr70_chdkz"];

		_dummyveh = "rhs_btr60_chdkz" createVehicle _grp_spawn_pos;
		_dummyvehpos = getPos _dummyveh;
		deleteVehicle _dummyveh;

		_grp_spawn_mech = [_dummyvehpos,  resistance, _grp_type] call BIS_fnc_spawnGroup;
		[_grp_spawn_mech, _mission_patr_pos, 10, 600, "MOVE", "COLUMN", "SAFE", "YELLOW", "LIMITED", "", [3, 4, 5]] call DES_fnc_taskPatrol;
		_grp_mech_array pushBack _grp_spawn_mech;
	};
};

//return array
_return =[];
_return pushBack _grp_inf_array;
_return pushBack _grp_mot_array;
_return pushBack _grp_mech_array;

_return;
