if (isNil "BIS_fnc_establishingShot_playing") then
{
    Private ["_txt", "_towns","_iconArray", "_colorEast", "_playerPos"];

    // deactivate ShackTac Hud, so it doesn't show up in the establishing shot
    0 call fn_sthud_usermenu_changeMode;

    // create establishing shot
    _colorEast = EAST call BIS_fnc_sideColor;
    _playerPos = getPos (vehicle player);

    if (["SAFE", _playerPos] call DES_fnc_isInArea) then
    {
        _txt = "PR Fata - 6.Rus Basis";
        _iconArray =
        [
            ["\A3\ui_f\data\map\markers\nato\o_hq.paa", _colorEast, getMarkerPos "mrk_1_3", 1, 1, 0, "6.Rus HQ", 1],
            ["\A3\ui_f\data\map\markers\nato\o_med.paa", _colorEast, getMarkerPos "mrk_1_4", 1, 1, 0, "Lazarett", 1],
            ["\A3\ui_f\data\map\markers\nato\o_service.paa", _colorEast, getMarkerPos "mrk_x", 1, 1, 0, "Fahrzeugreperatur", 1],
            ["\A3\ui_f\data\map\markers\nato\o_service.paa", _colorEast, getMarkerPos "z_111", 1, 1, 0, "Helikopterreparatur", 1],
            ["\A3\ui_f\data\map\markers\nato\o_mech_inf.paa", _colorEast, getMarkerPos "mrk", 1, 1, 0, "Schwere Fahrzeuge", 1],
            ["\A3\ui_f\data\map\markers\nato\o_support.paa", _colorEast, getMarkerPos "mrk_1", 1, 1, 0, "Versorgungsfahrzeuge", 1],
            ["\A3\ui_f\data\map\markers\nato\o_motor_inf.paa", _colorEast, getMarkerPos "mrk_1_1", 1, 1, 0, "Leichte Fahrzeuge", 1],
            ["\A3\ui_f\data\map\markers\nato\o_installation.paa", _colorEast, getMarkerPos "mrk_y_1", 1, 1, 0, "Logistiklager", 1],
            ["\A3\ui_f\data\map\markers\nato\o_installation.paa", _colorEast, getMarkerPos "mrk_y_1_1", 1, 1, 0, "Logistiklager", 1],
            ["\A3\ui_f\data\map\markers\nato\o_installation.paa", _colorEast, getMarkerPos "mrk_y", 1, 1, 0, "Munitionslager", 1],
            ["\A3\ui_f\data\map\markers\nato\o_installation.paa", _colorEast, getMarkerPos "mrk_y_2", 1, 1, 0, "Munitionslager", 1],
            ["\A3\ui_f\data\map\markers\nato\o_air.paa", _colorEast, getMarkerPos "mrk_1_2", 1, 1, 0, "Helikopter", 1]
        ]
    }
    else
    {
        _towns = nearestLocations [_playerPos, ["NameVillage", "NameCit y", "NameCityCapital", "NameLocal", "Name"], 1000];
        _iconArray =
        [
            ["\A3\ui_f\data\map\markers\nato\o_hq.paa", _colorEast, _playerPos, 1, 1, 0, "Mobiler Stützpunkt - GAZ-66 (R-142)", 1]
        ];

        if (isNil "_towns") then
        {
            _txt = "Mobiler Stützpunkt";
        }
        else
        {
            _txt = format ["Mobiler Stützpunkt nahe %1", text (_towns select 0)];
        }
    };
    [
    	_playerPos,
    	_txt,
    	150,
    	150,
    	150,
    	1,
    	_iconArray,
    	0
    ] spawn BIS_fnc_establishingShot;

    // wait until the establishing shot is over/canceled
    waitUntil {!isnil "BIS_fnc_establishingShot_playing" && {!BIS_fnc_establishingShot_playing}};

    // activate ShackTac Hud
    3 call fn_sthud_usermenu_changeMode;
};
// load Attachment Selector
_handle = createDialog 'DES_mission_dialog';

// display tickets
call BIS_fnc_showMissionStatus;
