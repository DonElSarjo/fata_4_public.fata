private ["_mrk","_mrkarea","_posx","_posy","_tarea","_tx","_ty","_tdir","_tshape","_in"];

_mrk = _this select 0;
_position = _this select 1;

_scalarresult = if (count _this > 2) then {_this select 2} else {false};

_posx = getMarkerPos _mrk select 0;
_posy = getMarkerPos _mrk select 1;
_mrkarea = getMarkerSize _mrk;
_tx = _mrkarea select 0;
_ty = _mrkarea select 1;
_tdir = markerDir _mrk;
_tshape = markerShape _mrk;
_in = false;

if (_tshape == "RECTANGLE") then
{
	//--- RECTANGLE
	_difx = (_position select 0) - _posx;
	_dify = (_position select 1) - _posy;
	_dir = atan (_difx / _dify);
	if (_dify < 0) then {_dir = _dir + 180};
	_relativedir = _tdir - _dir;
	_adis = abs (_tx / cos (90 - _relativedir));
	_bdis = abs (_ty / cos _relativedir);
	_borderdis = _adis min _bdis;
	_positiondis = _position distance getMarkerPos _mrk;

	_in = if (_scalarresult) then
    {
		_positiondis - _borderdis;
	}
    else
    {
		if (_positiondis < _borderdis) then {true} else {false};
	};
};
if (_tshape == "ELLIPSE") then
{
	//--- ELLIPSE
	_e = sqrt(_tx^2 - _ty^2);
	_posF1 = [_posx + (sin (_tdir+90) * _e), _posy + (cos (_tdir+90) * _e)];
	_posF2 = [_posx - (sin (_tdir+90) * _e), _posy - (cos (_tdir+90) * _e)];
	_total = 2 * _tx;

	_dis1 = _position distance _posF1;
	_dis2 = _position distance _posF2;
	_in = if (_scalarresult) then
    {
		(_dis1 + _dis2) - _total;
	}
    else
    {
		if (_dis1 + _dis2 < _total) then {true} else {false};
	};
};

_in
