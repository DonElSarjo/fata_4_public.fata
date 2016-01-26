/*
*	Description: function searches for positions on roads outside
*				 outside of a safezone.
*
*	function:     [markername,number] call DES_fnc_getRndRoadPos;
*	markername:  string of marker with an rectangular shape
*	number:		 number of road positions in return array
*	returns: 	 array of road positions outside of the safezone.
*/


//get variables (safezone, amount of road positions)
_safezone_marker = _this select 0;
_pos_count = (_this select 1) - 1;

//get world data
_safezone_center = getMarkerPos _safezone_marker;
_safezone_size = getMarkerSize _safezone_marker;
_size = worldSize;
_mapcenter = [_size/2, _size/2, 0];

//get all road positions
_near_roads = _mapcenter nearRoads _size;
_road_array = [];

//select road positions outside the safezone
while {_pos_count>= count _road_array} do
{
	_rnd_road = _near_roads call BIS_fnc_selectRandom;
	_rnd_road = getPos _rnd_road;

	if
		(
			(
				(
//						x-coor _rnd_road	 <  x-coor _safezone_center		-  x-coor _safezone_size/2
					(_rnd_road select 0) < ((_safezone_center select 0) - (_safezone_size select 0)/2)
				)
				||
				(
//						x-coor _rnd_road	 >  x-coor _safezone_center		+  x-coor _safezone_size/2
					(_rnd_road select 0) > ((_safezone_center select 0) + (_safezone_size select 0)/2)
				)
			)
			&&
			(
				(
//						y-coor _rnd_road	 <  y-coor _safezone_center		-  y-coor _safezone_size/2
					(_rnd_road select 1) < ((_safezone_center select 1) - (_safezone_size select 1)/2)
				)
				||
				(
//						y-coor _rnd_road	 >  y-coor _safezone_center		+  y-coor _safezone_size/2
					(_rnd_road select 1) > ((_safezone_center select 1) + (_safezone_size select 1)/2)
				)
			)
		)
	then
		{
// create position array
		_road_array pushback _rnd_road;
		};
};
//return
_road_array;
