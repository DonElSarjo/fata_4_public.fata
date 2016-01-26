////////////////
//Mission Init//
////////////////

//misc
0 fadeRadio 0;
"SAFE" SetMarkerAlpha 0;
"SAFE0" SetMarkerAlpha 0;

//player loudout selection
if (hasInterface) then
{
	[player] execFSM "6RusLoudouts\loadoutselector.fsm";
};

//logistics
execVM "R3F_LOG\init.sqf";

//FPS Marker
if (paramsArray select 4 == 1) then
{
	_FPSmrk = createMarker ["fpsMarker",[0,0,0]];
	_FPSmrk setMarkerShape "ICON";
	_FPSmrk setMarkerType "KIA";
	_FPSmrk setMarkerColor "ColorBlack";
};

//server variables and mission functions
if (isServer) then
{
	//FPS Marker text
	if (paramsArray select 4 == 1) then
	{
		[] spawn
		{
			while {true} do
			{
				"fpsMarker" setMarkerText format ["Server: %1 FPS", (floor diag_fps)];
				sleep (paramsArray select 5);
			}
		}
	};

	for "_i" from 1 to 16 step 1 do
	{
		call compile preprocessFileLineNumbers (format ["missions\tsk%1.sqf", _i])
	};

	//side mission positions
	markerArray_crash =
	[
		"SAFE0",
		10,
		["Hill", "ViewPoint"]
	] call DES_fnc_getRndUserDefPos;
	markerArray_kpnc =
	[
		"SAFE0",
		30,
		["NameVillage", "NameLocal", "NameCity", "NameCityCapital", "Name"]
	] call DES_fnc_getRndUserDefPos;
	markerArray_safepos =
	[
		"SAFE0",
		50,
		0.01
	] call DES_fnc_findSafePos;
	markerArray_ri =
	[
		"SAFE0",
		40
	] call DES_fnc_getRndRoadPos;
	missions_to_remove  = 0;

	{publicVariable _x} forEach
	[
		"markerArray_crash",
		"markerArray_kpnc",
		"markerArray_safepos",
		"markerArray_ri",
		"missions_to_remove"
	];

	//enemy groups
	grp_array_inf     =   ((configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "Infantry")                 call BIS_fnc_returnChildren);

	grp_array_mot     =    (configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "rhs_group_indp_ins_uaz")   call BIS_fnc_returnChildren;
	grp_array_mot  append ((configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "rhs_group_indp_ins_ural")  call BIS_fnc_returnChildren);

	grp_array_mech    =    (configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "rhs_group_indp_ins_bmd1")  call BIS_fnc_returnChildren;
	grp_array_mech append ((configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "rhs_group_indp_ins_bmp1")  call BIS_fnc_returnChildren);
	grp_array_mech append ((configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "rhs_group_indp_ins_btr60") call BIS_fnc_returnChildren);
	grp_array_mech append ((configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "rhs_group_indp_ins_btr70") call BIS_fnc_returnChildren);

	//ticket system
	[east,(paramsarray select 3)] call BIS_fnc_respawnTickets;

	[] spawn
	{
		while {[east,0] call BIS_fnc_respawnTickets > 0} do {sleep 5};
		["l_fail", false, false, false] remoteExec ["BIS_fnc_endMission"]
	};

};

// HC switch
hcPresent = false;

if (!hasInterface && !isServer) then
{
	hcPresent = true;
	publicVariable "hcPresent"
};

[] execVM "eos\OpenMe.sqf";

/*/////////////////
//Insurgency init//
///////////////////

waitUntil { isServer || !isNull player };

#include "core\modules\gridMarkers\functions\functions.sqf"
#include "core\modules\cacheScript\functions\cacheFunctions.sqf"
#include "core\modules\cacheScript\functions\cacheGetPositions.sqf"

#ifndef execNow
#define execNow call compile preprocessfilelinenumbers
#endif

execNow "core\init.sqf";
