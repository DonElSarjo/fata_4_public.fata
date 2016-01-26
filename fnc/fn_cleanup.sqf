_obj = _this;
_pos = [];

Private ["_pos","_vehCheck"];

{
	if (typeName _x == "OBJECT") then
	{
		_nul = getPos _x;
		_pos pushback _nul;
	}
	else
	{
		_nul = getMarkerPos _x;
		_pos pushback _nul;
	}
} foreach _obj;

{
	_vehCheck = nearestObjects [_x, ["landVehicle", "Air", "Ship"], 12] select 0;
	if (!isNil "_vehCheck") then {deleteVehicle _vehCheck};
} foreach _pos;
