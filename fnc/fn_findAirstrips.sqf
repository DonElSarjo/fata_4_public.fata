Private ["_return"];

if (count(configfile >> "CfgWorlds" >> worldname >> "SecondaryAirports") < 1) then
{
	if (count getArray(configfile >> "CfgWorlds" >> worldname >> "ilsPosition") < 1) then
	{
		false;
	}
	else
	{
		_return = [];
		
		_posAirstrip = getArray (configfile >> "CfgWorlds" >> worldname >>  "ilsPosition");
		_ilsDirection = getArray (configfile >> "CfgWorlds" >> worldname >> "ilsDirection");
		_dirAirstrip = acos (_ilsDirection select 0) - 90;
		_return pushback _posAirstrip;
		_posAirstrip pushback _dirAirstrip;
		
		systemChat "#2";
		_return;
	};
}
else
{
	_return = [];
	
	_airpotsChildren = (configfile >> "CfgWorlds" >> worldname>> "SecondaryAirports") call BIS_fnc_returnChildren;
	
	for "_i" from 1 to (count (configfile >> "CfgWorlds" >> worldname>> "SecondaryAirports") ) step 1 do 
	{
		_dataAirstrip = [];
		_posAirstrip = getArray (_airpotsChildren select (_i-1) >> "ilsPosition");
		_ilsDirection = getArray (_airpotsChildren select (_i-1) >> "ilsDirection");
		_dirAirstrip = acos (_ilsDirection select 0) - 90;
		_dataAirstrip pushback _posAirstrip;
		_posAirstrip pushback _dirAirstrip;
		_return pushback (_dataAirstrip select 0);
	};
	_dataAirstrip = [];
	_posAirstrip = getArray (configfile >> "CfgWorlds" >> worldname >> "ilsPosition");
	_ilsDirection = getArray (configfile >> "CfgWorlds" >> worldname >> "ilsDirection");
	_dirAirstrip = acos (_ilsDirection select 0) - 90;
	_dataAirstrip pushback _posAirstrip;
	_posAirstrip pushback _dirAirstrip;
	_return pushback (_dataAirstrip select 0);
	systemChat "#3";
	_return;
};
