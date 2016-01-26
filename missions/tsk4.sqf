DES_mission_fnc_tsk4 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for claenup and variable flush
	DES_fnc_missionEnd =
	{
		[spawned_patr] call DES_fnc_deletePatrols;
		deleteVehicle trg0;
		deleteMarker "missionmrk";
		mrk = nil;
		trg0 = nil;
		spawned_patr = nil;
		["tsk0", EAST] call BIS_fnc_deleteTask;
		DES_fnc_missionEnd = nil;
	};

	//get variables
	_mission_pos = ((_this select 0)select 0);
	_towns = nearestLocations [_mission_pos, ["NameVillage", "NameLocal", "NameCity", "NameCityCapital", "Name"], 250];
	_loc = text (_towns select 0);

	//create Task
	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Befreien Sie %1 von rebellen Truppen", str (_loc)],
			format ["Säubere %1", str (_loc)],
			format ["%1", str (_loc)]
		],
		_mission_pos,
		1,
		1,
		true,
		"Attack",
		false
	] call BIS_fnc_taskCreate;

	mrk = createMarker ["missionmrk", _mission_pos];
	mrk setMarkerShape "ELLIPSE";
	mrk setMarkerSize [300, 300];
	mrk setMarkerBrush "DIAGGRID";
	mrk  setMarkerColor "ColorGUER";

	//spawn units
	spawned_patr = [_mission_pos, 2, 1, 1] call DES_fnc_SpawnPatrols;

	//create trigger
	trg0 = createTrigger ["EmptyDetector",  _mission_pos];
	trg0 setTriggerArea [300, 300, 0, false];
	trg0 setTriggerActivation ["GUER", "NOT PRESENT", false];
	trg0 setTriggerStatements
	[
		"this",
		"
			_null = ['tsk0','SUCCEEDED'] call BIS_fnc_taskSetState;
			call DES_fnc_missionEnd;
			[east, 8] call BIS_fnc_respawnTickets;
		",
		""
	];

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
