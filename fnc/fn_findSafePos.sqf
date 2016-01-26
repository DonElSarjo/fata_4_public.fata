private
[
	"_safezone",
	"_countzones",
	"_size",
	"_mapcenter",
	"_foundSafePos",
	"_testpos",
	"_safezone_top_left",
	"_safezone_bottom_right",
	"_gradient",
	"_blacklist_top_left",
	"_blacklist_bottom_right"
];

_safezone = _this select 0;
_countzones = _this select 1;

_size = worldSize;
_mapcenter = [_size/2, _size/2, 0];

if (isnil "_this select 2") then {_gradient = 0.5};

//SAFEZONE
_safezonecenter = getMarkerPos _safezone;
_safezonemarkersize = getMarkerSize _safezone;

_safezone_top_left =
[
	(_safezonecenter select 0) - (_safezonemarkersize select 0),
	(_safezonecenter select 1) + (_safezonemarkersize select 1)
];
_safezone_bottom_right =
[
	(_safezonecenter select 0) + ((_safezonemarkersize select 0)),
	(_safezonecenter select 1) - ((_safezonemarkersize select 1))
];

//MAPEND
_blacklist_top_left =
[
	(_mapcenter select 0) - (_size/2),
	(_mapcenter select 1) + (_size/2) + 150
];
_blacklist_bottom_right =
[
	(_mapcenter select 0) + (_size/2),
	(_mapcenter select 1) + (_size/2) - 150
];

_SafePos = [];

while {count _SafePos <= _countzones} do
{
	_foundSafePos = [_mapcenter, 0, _size/2, 20, 0, _gradient, 0, [[_safezone_top_left, _safezone_bottom_right], [_blacklist_top_left, _blacklist_bottom_right]]] call BIS_fnc_findSafePos;

	for "_i" from 0 to 360 step 30 do
	{
		_testpos = [_foundSafePos, 100, _i] call BIS_fnc_relPos;

		if (surfaceIsWater _testpos) then
		{
			_foundSafePos = [_mapcenter, 0, _size/2, 15, 0, _gradient, 0, [[_safezone_top_left, _safezone_bottom_right], [_blacklist_top_left, _blacklist_bottom_right]]] call BIS_fnc_findSafePos;
		};
	};
	_SafePos pushback _foundSafePos
};

_SafePos;
