DES_mission_fnc_tsk12 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
			[spawned_attack] call DES_fnc_deletePatrols;
			deleteMarker mrk_start;
			deleteMarker mrk_end;
			mrk_start = nil;
			mrk_end = nil;
			spawned_attack = nil;
			["tsk0", EAST] call BIS_fnc_deleteTask;
			unitcount = nil;
			DES_fnc_missionEnd = nil;
	};
	//get variables
	_mission_pos = ((_this select 0)select 0);

	_distance_base_mission = getMarkerPos "base_6rus" distance _mission_pos;

	_relPosMission = [0, 0, 0];
	_in_safe = ["SAFE", _relPosMission] call DES_fnc_isInArea;
	while {surfaceIsWater _relPosMission && (!_in_safe)} do
	{
		_relPosMission = [_mission_pos, 4000, random 360] call BIS_fnc_relPos;
		_in_safe = ["SAFE", _relPosMission] call DES_fnc_isInArea;
	};

	private ["_loc"];
	_towns = nearestLocations [ _relPosMission, ["NameVillage", "NameCity", "NameCityCapital", "NameLocal", "Name"], 5000];
	if (count _towns == 0) then
	{
		_loc = "der eingezeichneten Position";
	}
	else
	{
		_loc = text (_towns select 0);
	};

	mrk_start = createMarker ["Start", _mission_pos];
	mrk_start setMarkerShape "Icon";
	mrk_start setMarkerType "hd_start";
	mrk_start setMarkerColor "ColorWEST";

	mrk_end = createMarker ["Ziel", _relPosMission];
	mrk_end setMarkerShape "Icon";
	mrk_end setMarkerType "hd_end";
	mrk_end setMarkerColor "ColorWEST";

	spawned_attack = [_mission_pos, _relPosMission, 20, 1, 0, 0] call DES_fnc_SpawnAttack;

	[((spawned_attack select 0)select 0)] spawn DES_fnc_markingUnits;

	unitcount = count units ((spawned_attack select 0)select 0);

	{
		_x addEventhandler
		[
			"Killed",
			{
				unitcount = unitcount - 1;
				if (unitcount < 1) then
				{
					_null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
					call DES_fnc_missionEnd;
					[east, 3] call BIS_fnc_respawnTickets;
				}
			}
		];
	} foreach units ((spawned_attack select 0)select 0);


	//debug
	systemChat "Objects done";

	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Eine rebellen Trupp bewegt sich in Richtung %1. Lauern Sie dem Trupp auf und überfallen Sie diesen", str (_loc)],
			"Überfall",
			"Rebellen Trupp"
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
