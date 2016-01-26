/*
	Author: Don El Sarjo
	Description:
	Marks group on map in give interval.

	Parameter(s):

	_this select 0: GROUP - Group to be marked
	_this select 1(optional): NUMBER - Refresh rate of marker (default: 10)

	Returns:
	Nothing
*/

params [
	"_group",
	["_refresh", 10, []]
];

_grpleader = leader _group;

while {alive _grpleader} do
{
	_grppos = getPos _grpleader;
	_dir = getDir _grpleader;
	_mrk = createMarker [format ["mrk%1", _grppos], _grppos];
	_mrk setMarkerShape "Icon";
	_mrk setMarkerType "n_inf";
	_mrk setMarkerColor "ColorIndependent";
	_mrk setMarkerDir _dir;
	sleep _refresh;
	deleteMarker _mrk;
};
