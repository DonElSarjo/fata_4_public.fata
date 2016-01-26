DES_mission_fnc_tsk13 =
{
	DES_fnc_missionEnd =
	{
			["tsk0", EAST] call BIS_fnc_deleteTask;
	        ghst_ied_array = nil;
	        ied_array = nil;
	        DES_fnc_missionEnd = nil;

	};

	_mission_pos = ((_this select 0)select 0);

	private ["_loc"];
	_towns = nearestLocations [ _mission_pos, ["NameVillage", "NameCity", "NameCityCapital", "NameLocal", "Name"], 5000];
	if (count _towns == 0) then
	{
		_loc = "der eingezeichneten Position";
	}
	else
	{
		_loc = text (_towns select 0);
	};

	_null =
	[
		EAST,
		"tsk0",
		[
			format ["Überprüfen Sie die Straße in der Nähe von %1 auf Befahrbarkeit und räumen Sie gegebenfalls alle Kampfmittel", str (_loc)],
			"Kampfmittelräumung",
			"Straße"
		],
		_mission_pos,
		1,
		1,
		true,
		"Search",
		false
	] call BIS_fnc_taskCreate;

	_centerposition = _mission_pos;//position
	_rad = 50;//radius for ieds to spawn
	_maxieds = 1;//max number of ieds to spawn
	_side = EAST;//side for ieds to kill

	_iedtypelist = ["IEDLandBig_F", "IEDUrbanBig_F", "IEDLandSmall_F", "IEDUrbanSmall_F"];

	ghst_ied_array = [];

	//Get array of roads in area
	_roads = (_centerposition nearRoads _rad);

	_ieds = floor (count _roads / 10);

	if (_ieds > _maxieds) then {_ieds = _maxieds;};

	//create empty vehicles
	for "_x" from 0 to (_ieds) do
	{

			_roadssel = _roads call BIS_fnc_selectRandom;
			_roadconto = roadsConnectedTo _roadssel;
			_direction = [_roadssel, _roadconto select 0] call BIS_fnc_DirTo;
			_roads = _roads - [_roadssel];
			_pos =  [(getposatl _roadssel select 0)-5 * sin(random 359), (getposatl _roadssel select 1)-5 * cos(random 359)];
			_loctype = _iedtypelist call BIS_fnc_selectRandom;
			_ieddet = createmine ["ATMine", _pos, [], 0];
			_iedtype = createmine [_loctype, _pos, [], 0];
			_iedtype setdir (random 360);
			_iedtype setPosATL [getposatl _iedtype select 0, getposatl _iedtype select 1, 0];

			//create loop to detect side and blow up
			[_iedtype,_side,_ieddet] spawn
			{
				_iedtype = _this select 0;
				_side = _this select 1;
				_ieddet = _this select 2;

					while {!(isnil "_ieddet") or !(isnil "_iedtype") or (alive _iedtype)} do
					{
						sleep 4;
						if (!(mineActive _ieddet) or !(mineActive _iedtype)) exitwith {};
						if (damage _ieddet > 0.8) then {_iedtype setdamage 1;};
						_near = (getpos _iedtype) nearEntities [["Man", "Car", "Tank"], 15];// nearObjects ["Man", 15];
						{if ((side _x == _side) and (((_x selectionPosition "launcher" select 2) > 1.2) or (_x iskindof "Car") or (_x iskindof "Tank"))) then {
						deletevehicle _ieddet;
						_iedtype setdamage 1;
						}} forEach _near;
					};
				if !(isnil "_ieddet") then
				{
					deletevehicle _ieddet;
				};
				if !(isnil "_iedtype") then
				{
					deletevehicle _iedtype;
				};
	            ied_array = (count ghst_ied_array) - 1;
	            if (ied_array < 1) then
	            {
	                _null = ["tsk0", "SUCCEEDED"] call BIS_fnc_taskSetState;
	                [east, 3] call BIS_fnc_respawnTickets;
	                call DES_fnc_missionEnd;
	            };
			};
		ghst_ied_array = ghst_ied_array + [_iedtype];
	};
}
