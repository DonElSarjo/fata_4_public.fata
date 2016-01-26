params
[
	"_group",
	"_center",
	"_wpCount",
	"_radius",
	["_type", "MOVE", [""]],
	["_formation", "NO CHANGE", [""]],
	["_behaviour", "UNCHANGED", [""]],
	["_combat", "NO CHANGE", [""]],
	["_speed", "UNCHANGED", [""]],
	["_onComplete", "", [""]],
	["_timeout", [0, 0, 0], [[]], 3]
];

_wpArray = [];

while {count _wpArray < _wpCount} do
{
	_rndPos = [_center, random _radius, random 360] call BIS_fnc_relPos;
	_wpArray pushback _rndPos;
};

private ["_wp"];

for "_i" from 0 to _wpCount - 1 do
{
	_wp = _group addWaypoint [_wpArray select _i, 20, _i];
	_wp setWaypointType _type;
	_wp setWaypointFormation _formation;
	_wp setWaypointTimeout [_timout select 0, _timout select 1, _timout select 2];
	_wp setWaypointStatements ["TRUE", _onComplete];
	[_group, _i] setWaypointCombatMode _combat;
	[_group, _i] setWaypointBehaviour _behaviour;
	[_group, _i] setWaypointSpeed _speed;

};
_wp setWaypointType "CYCLE";
