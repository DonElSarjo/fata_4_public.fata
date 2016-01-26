DES_mission_fnc_tsk11 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
			[spawned_attack] call DES_fnc_deletePatrols;
			deleteVehicle trg0;
			deleteVehicle unit1;
			deleteVehicle unit2;
			deleteVehicle unit3;
			trg0 = nil;
			unit1 = nil;
			unit2 = nil;
			unti3 = nil;
			spawned_attack = nil;
			["tsk0", EAST] call BIS_fnc_deleteTask;
			DES_fnc_missionEnd = nil;
	};
	//get variables
	Private ["_loc"];
	_mission_pos = ((_this select 0)select 0);

	_towns = nearestLocations [_mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "Name"], 5000];
	if (count _towns == 0) then
	{
		_loc = "der eingezeichneten Position";
	}
	else
	{
		_loc = text (_towns select 0);
	};

	_relPosMission = [_mission_pos, 2500, random 360, 50, 5, 100, 1800] call DES_fnc_getRelPosLand;

	//create units
	_rescue_pos = _mission_pos findEmptyPosition [0, 50];
	_rescue_grp = createGroup east;
	unit1 = _rescue_grp createUnit ["rhs_msv_rifleman", _rescue_pos, [], 0, "none"];
	unit2 = _rescue_grp createUnit ["rhs_msv_rifleman", _rescue_pos, [], 0, "none"];
	unit3 = _rescue_grp createUnit ["rhs_msv_rifleman", _rescue_pos, [], 0, "none"];

	_smoke = "Land_FirePlace_F" createVehicle _rescue_pos;
	[0, _smoke] remoteExec ["DES_fnc_spawnSmoke"];

	//units settings
	{
		_x switchMove "AmovPsitMstpSrasWrflDnon";
		_x disableai "MOVE";
		_x disableAI "FSM";
		_x disableAi "TARGET";
		_x disableAI "AUTOTARGET";
		_x setCaptive true;
		[_x,["Kameraden retten.", "script\release2.sqf"]] remoteExec ["addAction", 0, true];
		_x setDir random 360;
	}
	foreach units _rescue_grp;

	//spawn attack
	spawned_attack = [_relPosMission,_mission_pos, 200, 2, 2, 2] call DES_fnc_SpawnAttack;

	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Begeben Sie sich in die Nähe von %1 und retten Sie die eigenen Truppen vor den einrückenden rebellen Truppen.", str (_loc)],
			"Helikopterrettung",
			"Eigene Truppen"
		],
		_mission_pos,
		1,
		1,
		true,
		"Support",
		false
	] call BIS_fnc_taskCreate;

	//add EH
	{
		_x addEventHandler
		[
			"Killed",
			{
				_null = ['tsk0', 'FAILED'] call BIS_fnc_taskSetState;
				[]spawn
				{

					[180, 1] remoteExec ["DES_fnc_timer", -2];
					sleep 180;
					call DES_fnc_missionEnd;
				};
			}
		]
	} forEach units _rescue_grp;

	//create trigger
	trg0 = createTrigger ["EmptyDetector",  getMarkerPos "base"];
	trg0 setTriggerArea [50, 50, 0, false];
	trg0 setTriggerStatements
	[
		"
		(
			[trg0, unit1] call BIS_fnc_inTrigger && [trg0, unit2] call BIS_fnc_inTrigger && [trg0, unit3] call BIS_fnc_inTrigger
		)
		",
		"
			_null = ['tsk0', 'SUCCEEDED'] call BIS_fnc_taskSetState;
			[east, 6] call BIS_fnc_respawnTickets;
			call DES_fnc_missionEnd;
		",
		""
	];

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
