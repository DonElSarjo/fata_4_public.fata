/*
	Author: Don El Sarjo
	Description:
	Finds a relative position from a starting point linked by land at given distance.

	Parameter(s):

	_this select 0: ARRAY - Starting position
	_this select 1: NUMBER - Maximal distance from starting point
	_this select 2 (optional): NUMBER - Direction the point should be (default: random)
	_this select 3 (optional): NUMBER - Steps in which the surface is being checked for water (default: 50)
	_this select 4 (optional): NUMBER - Steps in which the direction is changed when no position was found (default: 5)
	_this select 5 (optional): NUMBER - Steps in which the distance is reduced when no position is found (default: 100)
	_this select 6 (optional): NUMBER - Minimal distance from starting point (default: 0)

	Returns:
	ARRAY - Position
	BOOL - If no position was found
*/

params
[
	"_start",
	"_dist",
	["_dir", random 360 ,[]],
	["_addDist", 50, []],
	["_addDir", 5, []],
	["_subDist", 100, []],
	["_minDist", 0, []]
];

private ["_pos", "_loop"];

_check = false;
_checkdist = 0;
_loop = 0;

while {_checkdist<=_dist} do
{
	if (_dist<=_minDist) exitWith
	{
		["No position found with min. distance of %1m and max. distance of %2m from %3.", _dist,_minDist,_start] call BIS_fnc_error;
		_pos = false;
	};

	 _pos = [_start, _checkdist,_dir] call BIS_fnc_relPos;
	 _checkwater = surfaceIsWater _pos;
	 _checkdist = _checkdist + _addDist;

	 if (_checkwater) then
	 {
		  _dir = _dir + _addDir;
		  _loop = _loop + 1;
		  _checkdist = - 50;
	 };

	 if (_loop >= (360/_addDir)) then
	 {
		_dist = _dist - _subDist;
		_loop = 0;
	 };
};
_pos;
