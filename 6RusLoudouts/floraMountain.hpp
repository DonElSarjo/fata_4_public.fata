/////////////////////////
// Base class Rifleman //
/////////////////////////
class des_FloraMountainRifleman
{
	icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
	weapons[] =
	{
		"rhs_weap_ak74m",
		"Binocular"
	};
	magazines[] =
	{
		"rhs_30Rnd_545x39_7n10_AK",
		"rhs_30Rnd_545x39_7n10_AK",
		"rhs_30Rnd_545x39_7n10_AK",
		"rhs_30Rnd_545x39_7n10_AK",
		"rhs_30Rnd_545x39_7n10_AK",
		"rhs_30Rnd_545x39_7n10_AK",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5"
	};
	items[] =
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_morphine",
		"ACE_EarPlugs"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_6sh92",
		"rhs_6b27m_ml_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "rhs_uniform_mflora_patchless";
};
///////////////////////
// Rifleman Loudouts //
///////////////////////
class des_FloraMountainRiflemanAK74m : des_FloraMountainRifleman
{
	displayName = "Schütze - AK-74m";
};
class des_FloraMountainRiflemanAK105 : des_FloraMountainRifleman
{
	displayName = "Schütze - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAK74 : des_FloraMountainRifleman
{
	displayName = "Schütze - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAKS74 : des_FloraMountainRifleman
{
	displayName = "Schütze - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAKS74u : des_FloraMountainRifleman
{
	displayName = "Schütze - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAK12 : des_FloraMountainRifleman
{
	displayName = "Schütze - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAKU12 : des_FloraMountainRifleman
{
	displayName = "Schütze - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAKM : des_FloraMountainRifleman
{
	displayName = "Schütze - AKM";
	weapons[] =
	{
		"rhs_weap_akm",
		"Binocular"
	};
	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5"
	};

};
class des_FloraMountainRiflemanAKMS : des_FloraMountainRiflemanAKM
{
	displayName = "Schütze - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAK47 : des_FloraMountainRiflemanAKM
{
	displayName = "Schütze - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAK103 : des_FloraMountainRiflemanAKM
{
	displayName = "Schütze - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_FloraMountainRiflemanAK104 : des_FloraMountainRiflemanAKM
{
	displayName = "Schütze - AK-104";
	weapons[] =
	{
		"rhs_weap_ak104",
		"Binocular"
	};
};
/////////////////
// AT Loudouts //
/////////////////
class des_FloraMountainAtAK74m : des_FloraMountainRiflemanAK74m
{
	displayName = "RPG-Schütze - AK-74m";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAK105 : des_FloraMountainRiflemanAK105
{
	displayName = "RPG-Schütze - AK-105";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAK74 : des_FloraMountainRiflemanAK74
{
	displayName = "RPG-Schütze - AK-74";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAK74s : des_FloraMountainRiflemanAKS74
{
	displayName = "RPG-Schütze - AK-74s";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAKS74u : des_FloraMountainRiflemanAKS74u
{
	displayName = "RPG-Schütze - AKS-74u";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAK12 : des_FloraMountainRiflemanAK12
{
	displayName = "RPG-Schütze - AK-12";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAKU12 : des_FloraMountainRiflemanAKU12
{
	displayName = "RPG-Schütze - AKU-12";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAKM : des_FloraMountainRiflemanAKM
{
	displayName = "RPG-Schütze - AKM";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAKMS : des_FloraMountainRiflemanAKMS
{
	displayName = "RPG-Schütze - AKMS";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAK47 : des_FloraMountainRiflemanAK47
{
	displayName = "RPG-Schütze - AK-47";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAK103 : des_FloraMountainRiflemanAK103
{
	displayName = "RPG-Schütze - AK-103";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
class des_FloraMountainAtAK104 : des_FloraMountainRiflemanAK104
{
	displayName = "RPG-Schütze - AK-104";
	weapons[] +=
	{
		"rhs_weap_rpg7"
	};
	linkedItems[] +=
	{
		"rhs_acc_pgo7v"
	};
	backpack = "rhs_rpg";
};
/////////////////
// AA Loudouts //
/////////////////
class des_FloraMountainAaAK74m : des_FloraMountainRiflemanAK74m
{
	displayName = "AA-Schütze - AK-74m";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAK105 : des_FloraMountainRiflemanAK105
{
	displayName = "AA-Schütze - AK-105";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAK74 : des_FloraMountainRiflemanAK74
{
	displayName = "AA-Schütze - AK-74";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAK74s : des_FloraMountainRiflemanAKS74
{
	displayName = "AA-Schütze - AK-74s";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAKS74u : des_FloraMountainRiflemanAKS74u
{
	displayName = "AA-Schütze - AKS-74u";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAK12 : des_FloraMountainRiflemanAK12
{
	displayName = "AA-Schütze - AK-12";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAKU12 : des_FloraMountainRiflemanAKU12
{
	displayName = "AA-Schütze - AKU-12";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAKM : des_FloraMountainRiflemanAKM
{
	displayName = "AA-Schütze - AKM";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAKMS : des_FloraMountainRiflemanAKMS
{
	displayName = "AA-Schütze - AKMS";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAK47 : des_FloraMountainRiflemanAK47
{
	displayName = "AA-Schütze - AK-47";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAK103 : des_FloraMountainRiflemanAK103
{
	displayName = "AA-Schütze - AK-103";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
class des_FloraMountainAaAK104 : des_FloraMountainRiflemanAK104
{
	displayName = "AA-Schütze - AK-104";
	weapons[] +=
	{
		"rhs_weap_igla"
	};
	magazines[] +=
	{
		"rhs_mag_9k38_rocket",
		"rhs_mag_9k38_rocket"
	};
	backpack = "rhs_rpg_empty";
};
//////////////////////
// Sergeant Loudouts//
//////////////////////
class des_FloraMountainSergeantAK74m : des_FloraMountainRiflemanAK74m
{
	displayName = "Truppführer - AK-74m";
	weapons[] =
	{
		"rhs_weap_ak74m",
		"rhs_pdu4"
	};
	items[] +=
	{
		"ACE_MapTools"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_6sh92_headset_mapcase",
		"rhs_6b27m_ml_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_FloraMountainSergeantAK105 : des_FloraMountainSergeantAK74m
{
	displayName = "Truppführer - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAK74 : des_FloraMountainSergeantAK74m
{
	displayName = "Truppführer - AK-74m";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAKS74 : des_FloraMountainSergeantAK74m
{
	displayName = "Truppführer - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAKS74U : des_FloraMountainSergeantAK74m
{
	displayName = "Truppführer - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAK12 : des_FloraMountainSergeantAK74m
{
	displayName = "Truppführer - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAKU12 : des_FloraMountainSergeantAK74m
{
	displayName = "Truppführer - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAKM : des_FloraMountainRiflemanAKM
{
	displayName = "Truppführer - AKM";
	weapons[] =
	{
		"rhs_weap_akm",
		"rhs_pdu4"
	};
	items[] +=
	{
		"ACE_MapTools"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_6sh92_headset_mapcase",
		"rhs_6b27m_ml_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_FloraMountainSergeantAKMS : des_FloraMountainSergeantAKM
{
	displayName = "Truppführer - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAK47 : des_FloraMountainSergeantAKM
{
	displayName = "Truppführer - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAK103 : des_FloraMountainSergeantAKM
{
	displayName = "Truppführer - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"rhs_pdu4"
	};
};
class des_FloraMountainSergeantAK104 : des_FloraMountainSergeantAKM
{
	displayName = "Truppführer - AK-104";
	weapons[] =
	{
		"rhs_weap_ak104",
		"rhs_pdu4"
	};
};
////////////////////
// Medic Loudouts //
////////////////////
class des_FloraMountainMedicAK74m : des_FloraMountainRiflemanAK74m
{
	displayName = "Sanitäter - AK-74m";
	items[] =
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_epinephrine",
		"ACE_salineIV_250",
		"ACE_salineIV_500",
		"ACE_salineIV",
		"ACE_personalAidKit",
		"ACE_surgicalKit",
		"ACE_tourniquet",
		"ACE_tourniquet",
		"ACE_tourniquet",
		"ACE_EarPlugs"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_medic",
		"rhs_6b27m_ml_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_FloraMountainMedicAK105 : des_FloraMountainMedicAK74m
{
	displayName = "Sanitäter - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_FloraMountainMedicAK74 : des_FloraMountainMedicAK74m
{
	displayName = "Sanitäter - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_FloraMountainMedicAK74s : des_FloraMountainMedicAK74m
{
	displayName = "Sanitäter - AK-74s";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};

};
class des_FloraMountainMedicAKS74u : des_FloraMountainMedicAK74m
{
	displayName = "Sanitäter - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_FloraMountainMedicAK12 : des_FloraMountainMedicAK74m
{
	displayName = "Sanitäter - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_FloraMountainMedicAKU12 : des_FloraMountainMedicAK74m
{
	displayName = "Sanitäter - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_FloraMountainMedicAKM : des_FloraMountainMedicAK74m
{
	displayName = "Sanitäter - AKM";
	weapons[] =
	{
		"rhs_weap_akm",
		"Binocular"
	};
	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5"
	};
};
class des_FloraMountainMedicAKMS : des_FloraMountainMedicAKM
{
	displayName = "Sanitäter - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_FloraMountainMedicAK47 : des_FloraMountainMedicAKM
{
	displayName = "Sanitäter - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_FloraMountainMedicAK103 : des_FloraMountainMedicAKM
{
	displayName = "Sanitäter - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_FloraMountainMedicAK104 : des_FloraMountainMedicAKM
{
	displayName = "Sanitäter - AK-104";
	weapons[] =
	{
		"rhs_weap_ak104",
		"Binocular"
	};
};
////////////////////////
// Grenadier Loudouts //
////////////////////////
class des_FloraMountainGrenadierAK74mGP25 : des_FloraMountainRifleman
{
	displayName = "Schütze - AK-74m (GP-25)";
	weapons[] =
	{
		"rhs_weap_ak74m_gp25",
		"Binocular"
	};
	magazines[] +=
	{
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25P",
		"rhs_VOG25P",
		"rhs_VOG25P",
		"rhs_VOG25P",
		"rhs_VG40TB",
		"rhs_VG40TB",
		"rhs_VG40TB",
		"rhs_VG40TB"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_6sh92_vog",
		"rhs_6b27m_ml_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_FloraMountainGrenadierAK12GL : des_FloraMountainGrenadierAK74mGP25
{
	displayName = "Grenadier - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"Binocular"
	};
};
class des_FloraMountainGrenadierAKS74GL : des_FloraMountainGrenadierAK74mGP25
{
	displayName = "Grenadier - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"Binocular"
	};
};
class des_FloraMountainGrenadierAKMgp25 : des_FloraMountainRiflemanAKM
{
	displayName = "Schütze - AKM (GP-25)";
	weapons[] =
	{
		"rhs_weap_akm_gp25",
		"Binocular"
	};
	magazines[] +=
	{
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25",
		"rhs_VOG25P",
		"rhs_VOG25P",
		"rhs_VOG25P",
		"rhs_VOG25P",
		"rhs_VG40TB",
		"rhs_VG40TB",
		"rhs_VG40TB",
		"rhs_VG40TB"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_6sh92_vog",
		"rhs_6b27m_ml_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_FloraMountainGrenadierAKMSgp25 : des_FloraMountainGrenadierAKMgp25
{
	displayName = "Grenadier - AKMS (GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"Binocular"
	};
};
class des_FloraMountainGrenadierAK103gp25 : des_FloraMountainGrenadierAKMgp25
{
	displayName = "Grenadier - AK-103 (GP-25)";
	weapons[] =
	{
		"rhs_weap_ak103_gp25",
		"Binocular"
	};
};
///////////////////////////////
// Junior Sergeant Loudouts //
//////////////////////////////
class des_FloraMountainJuniorSergeantAK74mGP25 : des_FloraMountainGrenadierAK74mGP25
{
	displayName = "Manövertruppführer - AK-74m(GP-25)";
	weapons[] =
	{
		"rhs_weap_ak74m_gp25",
		"rhs_pdu4"
	};
	items[] +=
	{
		"ACE_MapTools"
	};
	linkedItems[] +=
	{
		"ItemGPS"
	};
};
class des_FloraMountainJuniorSergeantAK12GL : des_FloraMountainJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"rhs_pdu4"
	};
};
class des_FloraMountainJuniorSergeantAKS74GL : des_FloraMountainJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"rhs_pdu4"
	};
};
class des_FloraMountainJuniorSergeantAKMgp25 : des_FloraMountainGrenadierAKMgp25
{
	displayName = "Manövertruppführer - AKM(GP-25)";
	weapons[] =
	{
		"rhs_weap_akm_gp25",
		"rhs_pdu4"
	};
	items[] +=
	{
		"ACE_MapTools"
	};
	linkedItems[] +=
	{
		"ItemGPS"
	};
};
class des_FloraMountainJuniorSergeantAKMSgp25 : des_FloraMountainJuniorSergeantAKMgp25
{
	displayName = "Manövertruppführer - AKMS(GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"rhs_pdu4"
	};
};
class des_FloraMountainJuniorSergeantAK103gp25 : des_FloraMountainJuniorSergeantAKMgp25
{
	displayName = "Manövertruppführer - AK-103(GP-25)";
	weapons[] =
	{
		"rhs_weap_ak103_gp25",
		"rhs_pdu4"
	};
};
/////////////////
// MG Loudouts //
/////////////////
class des_FloraMountainMachinegunnerPKP : des_FloraMountainRifleman
{
	displayName = "Maschinengewehrschütze - PKP";
	weapons[] =
		{
			"rhs_weap_pkp",
			"Binocular"
		};
	magazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_rifleman",
		"rhs_6b27m_ml_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_FloraMountainMachinegunnerPKM : des_FloraMountainMachinegunnerPKP
{
	displayName = "Maschinengewehrschütze - PKM";
	weapons[] =
	{
		"rhs_weap_pkm",
		"Binocular"
	};
};
/////////////////
//LMG Loudouts //
/////////////////
class des_FloraMountainLmachinegunnerRPK : des_FloraMountainMachinegunnerPKP
{
	displayName = "Maschinengewehrschütze - RPK";
	weapons[] =
	{
		"hlc_rifle_rpk",
		"Binocular"
	};
	magazines[] =
	{
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"des_45Rnd_762x39mm",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
};
class des_FloraMountainLmachinegunnerRPK12 : des_FloraMountainLmachinegunnerRPK
{
	displayName = "Maschinengewehrschütze - RPK-12";
	weapons[] =
	{
		"hlc_rifle_RPK12",
		"Binocular"
	};
	magazines[] =
	{
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
};
class des_FloraMountainLmachinegunnerRPK74 : des_FloraMountainLmachinegunnerRPK12
{
	displayName = "Maschinengewehrschütze - RPK-74";
	weapons[] =
			{
				"hlc_rifle_rpk74n",
				"Binocular"
			};
};
/////////
// DRM //
/////////
class des_FloraMountainDMRSVDm : des_FloraMountainRifleman
{
	displayName = "Scharfschütze - SVDS";
	weapons[] =
	{
		"rhs_weap_svdp",
		"rhs_weap_makarov_pmm",
		"rhs_pdu4"

	};
	magazines[] =
	{
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	items[] +=
	{
		"ACE_MapTools"
	};
	linkedItems[] =
	{
		"rhs_6b23_ML_sniper",
		"rhs_fieldcap_ml",
		"rhs_acc_pso1m2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_FloraMountainDMRSVDs : des_FloraMountainDMRSVDm
{
	displayName = "Scharfschütze - SVDS";
	weapons[] =
	{
		"rhs_weap_svds",
		"rhs_weap_makarov_pmm",
		"rhs_pdu4"

	};
}
