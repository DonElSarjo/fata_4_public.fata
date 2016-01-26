[_this select 0] execFSM "6RusLoudouts\loadoutselector.fsm";
player setVariable ["BIS_noCoreConversations", true];
enableSentences false;
/*
_des_cameraAction =
[
	"splendid_camera",
	"Camera",
	"mission_title\camera.paa",
	{_nul = execVM "script\camera.sqf"},
	{true}
] call ace_interact_menu_fnc_createAction;
[
	typeOf player,
	1,
	[
		"ACE_SelfActions",
		"ACE_Equipment"
	],
	_des_cameraAction
] call ace_interact_menu_fnc_addActionToClass;
