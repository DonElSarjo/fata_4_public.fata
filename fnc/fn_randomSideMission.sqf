//get random mission position
while {des_sideMissionCyle} do
{
    sleep 300;

    if !(["tsk1"] call BIS_fnc_taskExists) then
    {
        _mrkSpawnPos_tsk1       	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk7       	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk8        	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk14         	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk9        	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk11      	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk15       	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk16       	= 		markerArray_safepos 		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk3        	= 		markerArray_kpnc    		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk4       	= 		markerArray_kpnc    		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk6  	        = 		markerArray_kpnc    		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk12       	= 		markerArray_kpnc    		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk2       	= 		markerArray_ri      		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk10   	    = 		markerArray_ri      		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk13	     	= 		markerArray_ri      		call BIS_fnc_selectRandom;
        _mrkSpawnPos_tsk5       	= 		markerArray_crash   		call BIS_fnc_selectRandom;

        //get random nbr
        _nbr = str (floor (random 16));
        _pos = "_mrkSpawnPos_tsk" + _nbr;
        _fnc = "DES_mission_fnc_tsk" + _nbr;

        [_pos] remoteExecCall [_fnc, 2];

        sleep 600;
    }
};
