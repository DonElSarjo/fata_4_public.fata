_vehicle = _this select 0;
_mastState = _this select 1;
switch ( _mastState ) do {
	case 0 : {
		_respawnID = _vehicle getVariable [ "respawnID", [] ];
		if ( count _respawnID > 0 ) then {
			_respawnID call BIS_fnc_removeRespawnPosition;
		};
	};
	case 1 : {
		_respawnID = [ east, _vehicle ] call BIS_fnc_addRespawnPosition;
		_vehicle setVariable [ "respawnID", _respawnID ];
	};
};
