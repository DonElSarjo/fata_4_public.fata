private "_unit";

_unit = _this select 0;

[_unit] execFSM "6RusLoudouts\loadoutselector.fsm";

player setVariable ["BIS_noCoreConversations", true];

enableSentences false;
