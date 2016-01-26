_obj = _this select 0;
_caller = _this select 1;
_id = _this select 2;

[_obj, _id] remoteExec ["removeAction", 0, true];
[_caller, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["playMove"] ;
[_obj, "Acts_AidlPsitMstpSsurWnonDnon_out"] remoteExec ["playMove"];
_obj enableAi "move";

[_obj] join group _caller;
