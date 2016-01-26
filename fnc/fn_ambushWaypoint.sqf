_start_pos = _this select 0;
_end_pos = ["SAFE", 40, ["NameVillage", "NameCity", "NameCityCapital", "NameLocal"]] call DES_fnc_getRndUserDefPos;
_ambush_array = [];

for "_i" from 0 to (count _end_pos) step 1 do
{
    _distance_start_end = (_end_pos select _i) distance _start_pos;
    _check = [_start_pos, _end_pos select _i, 200] call DES_fnc_checksurface;
    if ((_distance_start_end > 2000) && (!_check)) then {_ambush_array pushback (_start_pos + _end_pos)};
};
_ambush_array;
