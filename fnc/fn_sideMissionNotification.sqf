private ["_image", "_tsk"];

_image       = _this select 0;
_tsk         = _this select 1;
_tskData     = ["tsk0"] call BIS_fnc_taskDescription;
_description = parseText (_tskData select 0 select 0);
_title       = parseText format ["<t size='1.5' color='#a5a8cc'> %1 </t>", (_tskData select 1 select 0)];
_separator   = parseText "<br />-----------------------------------------------<br />";

switch (_image) do
{
    case 1:  { _image = parseText "<img size = '7' image = 'mission_title\transport.jpg'/>" };
    case 2:  { _image = parseText "<img size = '7' image = 'mission_title\immobilized.jpg'/>" };
    case 3:  { _image = parseText "<img size = '7' image = 'mission_title\konvoy.jpg'/>" };
    case 4:  { _image = parseText "<img size = '7' image = 'mission_title\clear.jpg'/>" };
    case 5:  { _image = parseText "<img size = '7' image = 'mission_title\crash.jpg'/>" };
    case 6:  { _image = parseText "<img size = '7' image = 'mission_title\neutralize.jpg'" };
    case 7:  { _image = parseText "<img size = '7' image = 'mission_title\cache.jpg'/>" };
    case 8:  { _image = parseText "<img size = '7' image = 'mission_title\arty.jpg'/>" };
    case 9:  { _image = parseText "<img size = '7' image = 'mission_title\free.jpg'/>" };
    case 10: { _image = parseText "<img size = '7' image = 'mission_title\roadblock.jpg'/>" };
    case 11: { _image = parseText "<img size = '7' image = 'mission_title\transport.jpg'/>" };
    case 12: { _image = parseText "<img size = '7' image = 'mission_title\patrol.jpg'/>" };
    case 13: { _image = parseText "<img size = '7' image = 'mission_title\ied.jpg'/>" };
    case 14: { _image = parseText "<img size = '7' image = 'mission_title\aa.jpg'/>" };
    case 15: { _image = parseText "<img size = '7' image = 'mission_title\drone.jpg'/>" };
    case 16: { _image = parseText "<img size = '7' image = 'mission_title\wrack.jpg'/>" };
};

switch (_tsk) do
{
    case 1:  { _tsk = parseText "<t size='2.2' color='#0011ff'> BEGONNEN </t>" };
    case 2:  { _tsk = parseText "<t size='2.2' color='#22ff00'> ABGESCHLOSSEN </t>" };
    case 3:  { _tsk = parseText "<t size='2.2' color='#ff0000'> GESCHEITERT </t>" };
    case 4:  { _tsk = parseText "<t size='2.2' color='#a5a8cc'> ABGEBROCHEN </t>" };
};

_txt = composeText [_separator, _image, _separator, _tsk, _separator, _title, lineBreak, lineBreak, _description];
_txt remoteExecCall ["hint", 0];
