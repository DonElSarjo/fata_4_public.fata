//get variables
private ["_grp_inf_array", "_grp_mot_array", "_grp_mech_array", "_mission_attack_pos", "_radius", "_grp_spawn_pos"];
_grp_spawn_pos = _this select 0;
_mission_attack_pos = _this select 1;
_radius = _this select 2;
_inf_grps = _this select 3;
_mot_grps = _this select 4;
_mech_grps = _this select 5;

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
		_grp_spawn_pos = _grp_spawn_pos findEmptyPosition [0, 150];
		_grp_spawn_inf = [_grp_spawn_pos, resistance, _grp_type] call BIS_fnc_spawnGroup;
		[_grp_spawn_inf, _mission_attack_pos, _radius, "MOVE", "AWARE", "YELLOW", "FULL", "WEDGE", "this spawn CBA_fnc_searchNearby", [3, 6, 9]] call CBA_fnc_addWaypoint;
		_grp_inf_array pushBack _grp_spawn_inf;
	};
};
if (_mot_grps > 0) then
{
	for "_j" from 0 to _mot_grps - 1 step 1 do
	{
		//create veh
		_grp_type = grp_array_mot call BIS_fnc_selectRandom;
		_grp_spawn_pos = _grp_spawn_pos findEmptyPosition [0, 300];
		_dummyveh = "rhs_ural_work_chdkz" createVehicle _grp_spawn_pos;

		_dummyvehpos = getPos _dummyveh;
		deleteVehicle _dummyveh;

		_grp_spawn_mot = [_dummyvehpos, resistance, _grp_type] call BIS_fnc_spawnGroup;
		[_grp_spawn_mot, _mission_attack_pos, _radius, "MOVE", "AWARE", "YELLOW", "FULL", "WEDGE", "this spawn CBA_fnc_searchNearby", [3, 6, 9]] call CBA_fnc_addWaypoint;
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
		_grp_spawn_pos = _grp_spawn_pos findEmptyPosition [0, 400];

		_dummyveh = "rhs_btr60_chdkz" createVehicle _grp_spawn_pos;
		_dummyvehpos = getPos _dummyveh;
		deleteVehicle _dummyveh;

		_grp_spawn_mech = [_dummyvehpos,  resistance, _grp_type] call BIS_fnc_spawnGroup;
		[_grp_spawn_mech, _mission_attack_pos, _radius, "MOVE", "AWARE", "YELLOW", "FULL", "WEDGE", "this spawn CBA_fnc_searchNearby", [3 , 6, 9]] call CBA_fnc_addWaypoint;
		_grp_mech_array pushBack _grp_spawn_mech;
	};
};

//return array
_return =[];
_return pushBack _grp_inf_array;
_return pushBack _grp_mot_array;
_return pushBack _grp_mech_array;

_return;
