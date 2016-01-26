_time = _this select 0;

Private ["_strSec", "_separator", "_mode"];
_sec = _time %60;
_min = (_time - _sec)/60;
_separator = parseText "<br />------------------------<br />";
if (_this select 1 == 1) then {_mode = "Missions Cooldown"} else {_mode = "Counddown"};

for "_j" from _min to 0 step - 1 do
{
    for "_i" from _sec to 0 step - 1 do
    {
        if (_i < 10) then {_strSec = format ["0%1", _i]} else {_strSec = _i};
        _text = format ["%1 : %2 min ", _j, _strSec];
        _txt = composeText [_separator, _text, _separator, _mode];
        hintSilent _txt;
        sleep 1;
    };
    _sec = 59;
};
