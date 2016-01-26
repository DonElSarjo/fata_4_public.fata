0 call fn_sthud_usermenu_changeMode;
("RscMissionStatus" call bis_fnc_rscLayer) cutFadeOut 0.5;
_display = [] call (uiNamespace getvariable "bis_fnc_camera");
_display displayaddeventhandler
[
    "Unload",
    {
        3 call fn_sthud_usermenu_changeMode;
        [] spawn BIS_fnc_showMissionStatus;
    }
];
