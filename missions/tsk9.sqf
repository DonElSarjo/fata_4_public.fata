DES_mission_fnc_tsk9 =
{
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
			[spawned_patr] call DES_fnc_deletePatrols;
			{deleteVehicle _x} forEach composition;
			deleteVehicle trg0;
			deleteVehicle unit1;
			deleteVehicle unit2;
			deleteVehicle unit3;
			trg0 = nil;
			unit1 = nil;
			unit2 = nil;
			unit3 = nil;
			composition = nil;
			spawned_patr = nil;
			["tsk0", EAST] call BIS_fnc_deleteTask;
			DES_fnc_missionEnd = nil;
	};

	//get variables
	Private ["_loc"];
	_mission_pos = ((_this select 0)select 0);

	_towns = nearestLocations [ _mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "NameLocal", "Name"], 5000];
	if (count _towns == 0) then
	{
		_loc = "der eingezeichneten Position";
	}
	else
	{
		_loc = text (_towns select 0);
	};
	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Begeben Sie sich in die Nähe von %1 und befreien Sie die Geiseln aus den Händen der rebellen Truppen. Fahren Sie dafuer mit dem Laster zur markierten Position, nehmen Sie zuerst das rebellen Lager.", str (_loc)],
			"Geiselbefreiung",
			"Geiseln"
		],
		_mission_pos,
		1,
		1,
		true,
		"Search",
		false
	] call BIS_fnc_taskCreate;

	_selectedComposition = ["captive_1", "captive_2", "captive_3", "captive_4", "captive_5", "captive_6"] call BIS_fnc_selectRandom;
	composition  = [_mission_pos, 0, call (compile (preprocessFileLineNumbers ("Compositions\Captive\" + _selectedComposition + ".sqf")))] call BIS_fnc_ObjectsMapper;

	_captive = createGroup east;
	unit1 = _captive createUnit ["rhs_msv_rifleman", getPosATL captive_1, [], 0, "none"];
	unit1 setDir getDir captive_1;
	unit2 = _captive createUnit ["rhs_msv_rifleman", getPosATL captive_2, [], 0, "none"];
	unit2 setDir getDir captive_2;
	unit3 = _captive createUnit ["rhs_msv_rifleman", getPosATL captive_3, [], 0, "none"];
	unit3 setDir getDir captive_3;

	{
	_x switchMove "Acts_AidlPsitMstpSsurWnonDnon_loop";
	_x setCaptive true;
	_x disableai "MOVE";
	_x disableAI "FSM";
	_x disableAi "TARGET";
	_x disableAI "AUTOTARGET";
	[_x, ["Die Geisel befreien.", "script\release.sqf"]] remoteExec ["addAction", 0, true];
	}
	foreach units _captive;

	spawned_patr = [_mission_pos, 3, 1, 0] call DES_fnc_SpawnPatrols;
	{ deleteWaypoint _x} forEach waypoints ((spawned_patr select 0)select 0);
	[((spawned_patr select 0)select 0), _mission_pos] call BIS_fnc_taskDefend;

	Zen_OccupyHouse = compile preprocessFileLineNumbers "fnc\Zen_OccupyHouse.sqf";
	[_mission_pos, units ((spawned_patr select 0)select 1), 50, false, true] call Zen_OccupyHouse;

	{
		_x addEventhandler
		[
			"Killed",
			{
				_null = ["tsk0", "FAILED"] call BIS_fnc_taskSetState;
				[]spawn
				{
					[180, 1] remoteExec ["DES_fnc_timer", -2];
					sleep 180;
					call DES_fnc_missionEnd;
				};
			}
		];
	} foreach units _captive;
	//create trigger

	trg0 = createTrigger ["EmptyDetector",  getMarkerPos "base", true];
	trg0 setTriggerArea [100, 100, 0, true ];
	trg0 setTriggerStatements
	[
		"([trg0, unit1] call BIS_fnc_inTrigger && [trg0, unit2] call BIS_fnc_inTrigger && [trg0, unit3] call BIS_fnc_inTrigger)",
		"
			_null = ['tsk0', 'SUCCEEDED'] call BIS_fnc_taskSetState;
			[east, 7] call BIS_fnc_respawnTickets;
			call DES_fnc_missionEnd;
		",
		""
	];

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
