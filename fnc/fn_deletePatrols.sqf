if(isnil "_this") exitWith {systemChat "No units to delete"};

_to_delete_inf = (_this select 0)select 0;
_to_delete_mot = (_this select 0)select 1;
_to_delete_mech = (_this select 0)select 2;


if (!((count _to_delete_inf) == 0)) then
{
	for "_l" from 0 to (count _to_delete_inf) - 1 step 1 do 
	{
		{deleteVehicle _x} forEach units (_to_delete_inf select _l);
	};
};
if (!((count _to_delete_mot) == 0)) then
{
	for "_m" from 0 to (count _to_delete_mot) - 1 step 1 do
	{
		{deleteVehicle _x} forEach units (_to_delete_mot select _m);
	};
};
if (!((count _to_delete_mech) == 0)) then
{
	for "_n" from 0 to (count _to_delete_mech) - 1 step 1 do
	{
		{deleteVehicle _x} forEach units (_to_delete_mech select _n);
	};
};
