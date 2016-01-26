_obj = _this select 0;
_caller = _this select 1;
_id = _this select 2;

//check if a mission is already selected
if (!(player isKindOf "rhs_msv_sergeant" || player isKindOf "rhs_msv_junior_sergeant" || player isKindOf "rhs_msv_emr_officer")) exitWith
{
	hint "Nur der Gruppenführer oder der Manövertruppführer kann Missionen anfordern!"
};

tasks_active = player call BIS_fnc_tasksUnit;

//if a mission is already running, give option to cancel it
if ( (count tasks_active) > 0 ) exitwith
{
	hint "Sie haben bereits einen Auftrag! Erfüllen Sie diesen oder brechen Sie ab!";

	missions_to_remove = missions_to_remove + 1;
	publicVariable "missions_to_remove";

	if (missions_to_remove < 2 ) then
		{
			[mission_gen,["Mission abbrechen","script\abort_mission.sqf"]] remoteExec ["addaction",0];
		};
};

//get random mission position
_mrkSpawnPos_transport   	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_cache       	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_arty        	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_aa          	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_free        	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_rescue      	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_drone       	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_wrack       	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
_mrkSpawnPos_konvoy      	= 		markerArray_kpnc    		call BIS_fnc_selectRandom;
_mrkSpawnPos_clear       	= 		markerArray_kpnc    		call BIS_fnc_selectRandom;
_mrkSpawnPos_neutralize  	= 		markerArray_kpnc    		call BIS_fnc_selectRandom;
_mrkSpawnPos_patrole     	= 		markerArray_kpnc    		call BIS_fnc_selectRandom;
_mrkSpawnPos_immobilized 	= 		markerArray_ri      		call BIS_fnc_selectRandom;
_mrkSpawnPos_roadblock   	= 		markerArray_ri      		call BIS_fnc_selectRandom;
_mrkSpawnPos_ied	     	= 		markerArray_ri      		call BIS_fnc_selectRandom;
_mrkSpawnPos_crash       	= 		markerArray_crash   		call BIS_fnc_selectRandom;

//stratigic map
[
    "",
    [getMarkerPos "base" select 0, getMarkerPos "base" select 1],
    [
        //mission_1
        [
            [_mrkSpawnPos_transport select 0,  _mrkSpawnPos_transport select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk1", 2]},
            "Hilfsgüter",
            "Bringen Sie die Hilfsgüter zur Abladezone",
            "3 Punkte",
            "mission_title\transport.jpg",
            0.3,
            [_mrkSpawnPos_transport]
        ],
		//mission_2
        [
            [_mrkSpawnPos_immobilized select 0, _mrkSpawnPos_immobilized select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk2", 2]},
            "Laster",
            "Bringen Sie das beschädigte Fahrzeug zurück in die Basis.",
            "5 Punkte",
            "mission_title\immobilized.jpg",
            0.5,
            [_mrkSpawnPos_immobilized]
        ],
		//mission_3
        [
            [_mrkSpawnPos_konvoy select 0, _mrkSpawnPos_konvoy select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk3", 2]},
            "Konvoi",
            "Bringen Sie den Konvoi zum Bestimmungsort",
            "5 Punkte",
            "mission_title\konvoy.jpg",
            0.5,
            [_mrkSpawnPos_konvoy]
        ],
		//mission_4
        [
            [_mrkSpawnPos_clear select 0, _mrkSpawnPos_clear select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk4", 2]},
            "Gebiet befreien",
            "Befreien Sie das Gebiet",
            "8 Punkte",
            "mission_title\clear.jpg",
            0.8,
            [_mrkSpawnPos_clear]
        ],
		//mission_5
        [
            [_mrkSpawnPos_crash select 0, _mrkSpawnPos_crash select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk5", 2]},
            "Helikopterabsturz",
            "Bergen Sie den abgestürzten Piloten und zerstören Sie das Wrack",
            "5 Punkte",
            "mission_title\crash.jpg",
            0.5,
            [_mrkSpawnPos_crash]
        ],
		//mission_6
        [
            [_mrkSpawnPos_neutralize select 0, _mrkSpawnPos_neutralize select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk6", 2]},
            "Neutralisieren",
            "Neutralisieren Sie die Zielperson",
            "5 Punkte",
            "mission_title\neutralize.jpg",
            0.5,
            [_mrkSpawnPos_neutralize]
        ],
		//mission_7
        [
            [_mrkSpawnPos_cache select 0, _mrkSpawnPos_cache select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk7", 2]},
            "Waffendepot",
            "Vernichten Sie das Waffendepot",
            "5 Punkte",
            "mission_title\cache.jpg",
            0.5,
            [_mrkSpawnPos_cache]
        ],
		//mission_8
        [
            [_mrkSpawnPos_arty select 0, _mrkSpawnPos_arty select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk8", 2]},
            "Artillerie Stellung",
            "Vernichten Sie die Artillerie Stellung",
            "6 Punkte",
            "mission_title\arty.jpg",
            0.6,
            [_mrkSpawnPos_arty]
        ],
		//mission_9
        [
            [_mrkSpawnPos_free select 0, _mrkSpawnPos_free select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk9", 2]},
            "Geiselbefreiung",
            "Befreien Sie die Geiseln auf den Händen der Rebellen",
            "7 Punkte",
            "mission_title\free.jpg",
            0.7,
            [_mrkSpawnPos_free]
        ],
		//mission_10
        [
            [_mrkSpawnPos_roadblock select 0, _mrkSpawnPos_roadblock select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk10", 2]},
            "Straßensperre",
            "Räumen Sie die Straßensperre",
            "10 Punkte",
            "mission_title\roadblock.jpg",
            1,
            [_mrkSpawnPos_roadblock]
        ],
		//mission_11
        [
            [_mrkSpawnPos_rescue select 0, _mrkSpawnPos_rescue select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk11", 2]},
            "Helikopterrettung",
            "Retten Sie die eingeschlossenen Kameraden",
            "6 Punkte",
            "mission_title\transport.jpg",
            0.6,
            [_mrkSpawnPos_rescue]
        ],
		//mission_12
        [
            [_mrkSpawnPos_patrole select 0, _mrkSpawnPos_patrole select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk12", 2]},
            "Hinterhalt",
            "Überfallen Sie den rebellen Trupp",
            "3 Punkte",
            "mission_title\patrol.jpg",
            0.3,
            [_mrkSpawnPos_patrole]
        ],
		//mission_13
        [
            [_mrkSpawnPos_ied select 0, _mrkSpawnPos_ied select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk13", 2]},
            "Kampfmittelräumdienst",
            "Prüfen Sie die Straße auf Befahrbarkeit",
            "3 Punkte",
            "mission_title\ied.jpg",
            0.3,
            [_mrkSpawnPos_ied]
        ],
		//mission_14
        [
            [_mrkSpawnPos_aa select 0, _mrkSpawnPos_aa select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk14", 2]},
            "AA Stellung",
            "Vernichten Sie die AA Stellung",
            "6 Punkte",
            "mission_title\aa.jpg",
            0.6,
            [_mrkSpawnPos_aa]
        ],
		//mission_15
        [
            [_mrkSpawnPos_drone select 0, _mrkSpawnPos_drone select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk15", 2]},
            "Abgestürzte Drone",
            "Zerstören Sie die abgestürzte Drone",
            "5 Punkte",
            "mission_title\drone.jpg",
            0.5,
            [_mrkSpawnPos_drone]
        ],
		//mission_16
        [
            [_mrkSpawnPos_wrack select 0, _mrkSpawnPos_wrack select 1],  //pos mission in format [x,y,y]
			{[_this select 9] remoteExecCall ["DES_mission_fnc_tsk16", 2]},
            "Flugschreiber sichern",
            "Sichern Sie den Flugschreiber des abgestüzten Flugzeuges",
            "6 Punkte",
            "mission_title\wrack.jpg",
            0.6,
            [_mrkSpawnPos_wrack]
        ]
    ],
    [],
    [],
    [],
    0.8,
    false,
    1,
    true,
    "Wählen Sie eine Mission",
    true,
	"\A3\Ui_f\data\Map\GroupIcons\badge_rotate_%1_gs.paa"
] call DES_fnc_StrategicMapOpen;
