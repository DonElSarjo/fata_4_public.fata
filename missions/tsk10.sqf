DES_mission_fnc_tsk10 =
{
	//debug
	systemChat "Creating mission...";
	_time = time;

	//Function for cleanup and variable flush
	DES_fnc_missionEnd =
	{
			[spawned_patr] call DES_fnc_deletePatrols;
			[spawned_attack] call DES_fnc_deletePatrols;
			{deleteVehicle _x} forEach composition;
			deleteVehicle trg0;
			trg0 = nil;
			mission_pos = nil;
			composition = nil;
			spawned_patr = nil;
			spawned_attack = nil;
			relPosMission = nil;
			["tsk0", EAST] call BIS_fnc_deleteTask;
			["tsk1", EAST] call BIS_fnc_deleteTask;
			unitcount = nil;
			DES_fnc_missionEnd = nil;
	};
	//get variables
	Private ["_loc", "_direction"];
	mission_pos = ((_this select 0)select 0);

	_towns = nearestLocations [ mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "NameLocal", "Name"], 5000];
	if (count _towns == 0) then
	{
		_loc = "der eingezeichneten Position";
	}
	else
	{
		_loc = text (_towns select 0);
	};

	_nearRoads = mission_pos nearRoads 10;

	if(count _nearRoads > 0) then
	{
		_road = _nearRoads select 0;
		_roadConnectedTo = roadsConnectedTo _road;
		_connectedRoad = _roadConnectedTo select 0;
		_direction = [_road, _connectedRoad] call BIS_fnc_DirTo;
	};

	relPosMission = [mission_pos, 1000, _direction, 50, 5, 100, 800] call DES_fnc_getRelPosLand;

	spawned_attack = [[grpNull], [], [grpNull]];

	//debug
	systemChat "Variables,functions,cleanup done";

	//spawn composition
	_selectedComposition = ["roadblock1", "roadblock2", "roadblock3", "roadblock4", "roadblock5", "roadblock6", "roadblock7", "roadblock8", "roadblock9", "roadblock10", "roadblock11"] call BIS_fnc_selectRandom;
	composition  = [mission_pos, _direction, call (compile (preprocessFileLineNumbers ("Compositions\Roadblocks\" + _selectedComposition + ".sqf")))] call BIS_fnc_ObjectsMapper;

	spawned_patr = [mission_pos, 1, 0, 0] call DES_fnc_SpawnPatrols;
	{ deleteWaypoint _x} forEach waypoints ((spawned_patr select 0)select 0);
	[((spawned_patr select 0)select 0), mission_pos] call BIS_fnc_taskDefend;

	//debug
	systemChat "Objects done";

	//create task
	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Begeben Sie sich in die Nähe von %1, wo rebellen Truppen eine Straßensperre errichtet haben. Sorgen Sie dafür, dass die Straße wieder frei wird und sich keine rebellen Truppen dort befinden.", str (_loc)],
			"Straßensperre",
			"Straßensperre"
		],
		mission_pos,
		1,
		1,
		true,
		"Attack",
		false
	] call BIS_fnc_taskCreate;

	unitcount = count units ((spawned_patr select 0)select 0);

	{
		_x addEventHandler
		[
			"killed",
			{
				unitcount = unitcount - 1;
				if (unitcount < 1) then
				{
					_null = ['tsk0', 'SUCCEEDED'] call BIS_fnc_taskSetState;
					_null = [
								EAST,
								"tsk1",
								[
									"Ein rebellen Trupp bewegt sich auf Ihre Position zu. Halten Sie die Stellung für 10 min bis die Verstärkung eintrifft",
									"Gegenangriff",
									"Straßensperre"
								],
								mission_pos,
								1,
								1,
								true,
								"DEFEND",
								false
							] call BIS_fnc_taskCreate;
					spawned_attack = [relPosMission,mission_pos,100,1,0,1] call DES_fnc_SpawnAttack;
					trg0 = createTrigger ["EmptyDetector",  mission_pos];
					trg0 setTriggerArea [500, 500, 0, false];
					trg0 setTriggerActivation ["EAST", "NOT PRESENT", false];
					trg0 setTriggerStatements
					[
						"this",
						"
							_null = ['tsk1', 'FAILED'] call BIS_fnc_taskSetState;
							call DES_fnc_missionEnd;
						",
						""
					];
					[600, 0] remoteExec ["DES_fnc_timer", -2];
					[]spawn
					{
						sleep 600;
						_null = ["tsk1", "SUCCEEDED"] call BIS_fnc_taskSetState;
						[east, 10] call BIS_fnc_respawnTickets;
						deleteVehicle trg0;
						[]spawn
						{
							[180, 1] remoteExec ["DES_fnc_timer",-2];
							sleep 180;
							call DES_fnc_missionEnd;
						};
					}
				}
			}
		]
	} foreach units ((spawned_patr select 0)select 0);

	//debug
	systemChat format ["Mission created after %1 sec", (time - _time)];
}
