//get variables (safezone, amount of road positions)
_safezone_marker = _this select 0;
_pos_count = (_this select 1)-1;
_parameters = (_this select 2);

//get world data
_safezone_center = getMarkerPos _safezone_marker;
_safezone_size = getMarkerSize _safezone_marker;
_size = worldSize;
_mapcenter = [_size/2,_size/2,0];

//get all town positions
_near_locs = nearestLocations [_mapcenter, _parameters,_size];
_user_def_array = [];

//select town positions outside the safezone
while {_pos_count >= count _user_def_array} do
{
	_rnd_loc = _near_locs call BIS_fnc_selectRandom;
	_rnd_loc = getPos _rnd_loc;

	if
		(
			(
				(
//						x-coor _rnd_loc	 <  x-coor _safezone_center		-  x-coor _safezone_size/2
					(_rnd_loc select 0) < ((_safezone_center select 0) - (_safezone_size select 0)/2)
				)
				||
				(
//						x-coor _rnd_loc	 >  x-coor _safezone_center		+  x-coor _safezone_size/2
					(_rnd_loc select 0) > ((_safezone_center select 0) + (_safezone_size select 0)/2)
				)
			)
			&&
			(
				(
//						y-coor _rnd_loc	 <  y-coor _safezone_center		-  y-coor _safezone_size/2
					(_rnd_loc select 1) < ((_safezone_center select 1) - (_safezone_size select 1)/2)
				)
				||
				(
//						y-coor _rnd_loc	 >  y-coor _safezone_center		+  y-coor _safezone_size/2
					(_rnd_loc select 1) > ((_safezone_center select 1) + (_safezone_size select 1)/2)
				)
			)
		)
	then
		{
// create position array
		_user_def_array pushback _rnd_loc;
		};
};

//return
_user_def_array;
