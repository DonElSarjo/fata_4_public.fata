[
	[
		["Operationszentrale,", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t>"],
		["PR Fata", "<t align = 'center' shadow = '1' size = '0.7'>%1</t><br/>"],
		["6.Rus Basis", "<t align = 'center' shadow = '1' size = '1.0'>%1</t>"]
	]
] remoteExec ["BIS_fnc_typeText", 0];

[0,["", "BLACK FADED", 50]] remoteExec ["cuttext", 0];

_dest = getMarkerPos "base_6rus";

_dir = random 359;

_allPlayers = [];
{
	if (isPlayer _x) then
	{
		_allPlayers pushBack _x;
	};
} forEach playableUnits;

{_x SetPos [(_dest select 0) - 1*sin (_dir),(_dest select 1) - 1*cos (_dir), 0]} forEach _allPlayers;

sleep 5;

[0,["", "BLACK IN", 60]] remoteExec ["cuttext", 0];
