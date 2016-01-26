if (_this select 0 == 1) then
{
	if (! BIS_fnc_establishingShot_playing) then {[("6.Rus Basis") , ("Du hast die"), ("Safezone betreten")] spawn BIS_fnc_infoText};
	player allowDamage false;
	eh_safezone = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
}
else
{
	[("PR Fata"), ("Du hast die"), ("Safezone verlassen")] spawn BIS_fnc_infoText;
	player allowDamage true;
	player removeEventHandler ["fired", eh_safezone];
};
