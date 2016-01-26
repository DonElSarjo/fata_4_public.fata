_obj = _this select 0;
_caller = _this select 1;
_id = _this select 2;

//get current mission, set state to canceled and remove it
if (["tsk0"] call BIS_fnc_taskExists) then {[] remoteExecCall ["DES_fnc_missionEnd", 2];};

//remove action from _obj
_obj removeAction _id;
"Wähle eine neue Mission!" remoteExec ["hint"];
missions_to_remove = 0;
publicVariable "missions_to_remove";
