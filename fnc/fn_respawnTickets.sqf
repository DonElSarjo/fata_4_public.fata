if (isServer) then
{
	Private ["_veh"];
	_veh = _this select 0;

	EH_GetIn = _veh addEventhandler
	[
		"GetIn",
		{
			if (!(typeOf (_this select 2) isEqualTo "rhs_pilot") && ((_this select 1) isEqualTo "driver" || (_this select 1) isEqualTo "gunner")) exitWith
			{
					(_this select 2) action ["GetOut", _this select 0];

			};
			if (count (crew (_this select 0)) < 2 && {["SAFE", (getPos (_this select 0))] call DES_fnc_isInArea}) then
			{
				if ((_this select 0 ) iskindof "CAR" && !((_this select 0 ) iskindof "Wheeled_Apc_F") ) then
				{
					if ([east,0] call BIS_fnc_respawnTickets > 3) then
					{
						[east,-3] call BIS_fnc_respawnTickets;

						_separator = parseText "<br />------------------------<br />";
						_image = getText (configfile >> "CfgVehicles" >> typeOf (_this select 0) >> "picture");
						_name = getText (configfile >> "CfgVehicles" >> typeOf (_this select 0) >> "displayName");
						_text = "Ihnen wurden 3 Tickets abgezogen";
						_txt = composeText [_separator, image _image, _separator, _name, _separator, _text];

						_txt remoteExecCall ["hint", owner (_this select 2)];
						accessCar = true
					}
					else
					{
						_this select 2 action ["Eject", _this select 0];

						"Sie haben nicht genug Tickets um das Fahrzeug zu benützen" remoteExecCall ["hint", owner (_this select 2)];

						accessCar = false
					}
				};
				if ((_this select 0) iskindof "Tank" || ((_this select 0) iskindof "CAR" && (_this select 0) iskindof "Wheeled_Apc_F")) then
				{
					if ([east, 0] call BIS_fnc_respawnTickets > 5) then
					{
						[east, -5] call BIS_fnc_respawnTickets;

						_separator = parseText "<br />------------------------<br />";
						_image = getText (configfile >> "CfgVehicles" >> typeOf (_this select 0) >> "picture");
						_name = getText (configfile >> "CfgVehicles" >> typeOf (_this select 0) >> "displayName");
						_text = "Ihnen wurden 5 Tickets abgezogen";
						_txt = composeText [_separator, image _image, _separator, _name, _separator, _text];

						_txt remoteExecCall ["hint", owner (_this select 2)];
						accessAPC = true
					}
					else
					{
						_this select 2 action ["Eject", _this select 0];

						"Sie haben nicht genug Tickets um das Fahrzeug zu benützen" remoteExecCall ["hint", owner (_this select 2)];

						accessAPC = false
					}
				};
				if ((_this select 0) iskindof "AIR") then
				{
					if ([east ,0] call BIS_fnc_respawnTickets > 8) then
					{
						[east, -8] call BIS_fnc_respawnTickets;

						_separator = parseText "<br />------------------------<br />";
						_image = getText (configfile >> "CfgVehicles" >> typeOf (_this select 0) >> "picture");
						_name = getText (configfile >> "CfgVehicles" >> typeOf (_this select 0) >> "displayName");
						_text = "Ihnen wurden 8 Tickets abgezogen";
						_txt = composeText [_separator, image _image, _separator, _name, _separator, _text];

						_txt remoteExecCall ["hint", owner (_this select 2)];

						accessAir = true
					}
					else
					{
						_this select 2 action ["GetOut", _this select 0];

						"Sie haben nicht genug Tickets um das Fahrzeug zu benützen" remoteExecCall ["hint", owner (_this select 2)];

						accessAir = false
					}
				}
			}
		}
	];

	EH_GetOut = _veh addEventhandler
	[
		"GetOut",
	   {
		   if (!(typeOf (_this select 2) isEqualTo "rhs_pilot") && ((_this select 1) isEqualTo "driver" || (_this select 1) isEqualTo "gunner")) exitWith
		   {"Sie sind kein Pilot!" remoteExecCall ["hint", owner (_this select 2)];};
			if (count (crew (_this select 0)) < 1 && {["SAFE", (getPos (_this select 0))] call DES_fnc_isInArea}) then
			{
				if ((_this select 0)  iskindof "CAR" && accessCar && !((_this select 0) iskindof "Wheeled_Apc_F")) then
				{
					[east, 3] call BIS_fnc_respawnTickets;

					"Ihnen wurden 3 Tickets gutgeschrieben" remoteExecCall ["hint", owner (_this select 2)]
				};
				if (((_this select 0) iskindof "Tank" || ((_this select 0) iskindof "CAR" && _this select 0 iskindof "Wheeled_Apc_F")) && accessAPC) then
				{
					[east, 5] call BIS_fnc_respawnTickets;

					"Ihnen wurden 5 Tickets gutgeschrieben" remoteExecCall ["hint", owner (_this select 2)]
				};
				if ((_this select 0) iskindof "AIR" && accessAir) then
				{
					[east, 8] call BIS_fnc_respawnTickets;

					"Ihnen wurden 8 Tickets gutgeschrieben" remoteExecCall ["hint", owner (_this select 2)]
				}
			}
		}
	]
}
