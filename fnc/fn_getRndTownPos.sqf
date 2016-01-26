//get variables (safezone, amount of road positions)
_safezone_marker = _this select 0;
_pos_count = (_this select 1) - 1;

//get world data
_safezone_center = getMarkerPos _safezone_marker;
_safezone_size = getMarkerSize _safezone_marker;
_size = worldSize;
_mapcenter = [_size/2, _size/2, 0];

//get all town positions
_near_towns = nearestLocations [_mapcenter, ["NameVillage", "NameCity", "NameCityCapital"], _size];
_towns_array = [];

//select town positions outside the safezone
while {_pos_count>= count _towns_array} do
{
	_rnd_town = _near_towns call BIS_fnc_selectRandom;
	_rnd_town = getPos _rnd_town;

	if
		(
			(
				(
//						x-coor _rnd_town	 <  x-coor _safezone_center		-  x-coor _safezone_size/2
					(_rnd_town select 0) < ((_safezone_center select 0) - (_safezone_size select 0)/2)
				)
				||
				(
//						x-coor _rnd_town	 >  x-coor _safezone_center		+  x-coor _safezone_size/2
					(_rnd_town select 0) > ((_safezone_center select 0) + (_safezone_size select 0)/2)
				)
			)
			&&
			(
				(
//						y-coor _rnd_town	 <  y-coor _safezone_center		-  y-coor _safezone_size/2
					(_rnd_town select 1) < ((_safezone_center select 1) - (_safezone_size select 1)/2)
				)
				||
				(
//						y-coor _rnd_town	 >  y-coor _safezone_center		+  y-coor _safezone_size/2
					(_rnd_town select 1) > ((_safezone_center select 1) + (_safezone_size select 1)/2)
				)
			)
		)
	then
		{
// create position array
		_towns_array pushback _rnd_town;

		};
};
//return
_towns_array;
