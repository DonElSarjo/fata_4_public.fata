//load establishing shot
_handle = [] spawn des_fnc_establishingShotClient;
waitUntil {scriptDone _handle};

// load Attachment Selector
createDialog 'DES_mission_dialog';

//loudout adjustment
[player] call des_loudoutAdjustment;

// display tickets
call BIS_fnc_showMissionStatus;
