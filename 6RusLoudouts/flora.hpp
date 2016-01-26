/////////////////////////
// Base class Rifleman //
/////////////////////////
class des_FloraRifleman
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
		"rhs_6b23_6sh92",
		"rhs_6b26_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "rhs_uniform_flora_patchless";
};
///////////////////////
// Rifleman Loudouts //
///////////////////////
class des_FloraRiflemanAK74m : des_FloraRifleman
{
	displayName = "Schütze - AK-74m";
};
class des_FloraRiflemanAK105 : des_FloraRifleman
{
	displayName = "Schütze - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_FloraRiflemanAK74 : des_FloraRifleman
{
	displayName = "Schütze - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_FloraRiflemanAKS74 : des_FloraRifleman
{
	displayName = "Schütze - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};
};
class des_FloraRiflemanAKS74u : des_FloraRifleman
{
	displayName = "Schütze - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_FloraRiflemanAK12 : des_FloraRifleman
{
	displayName = "Schütze - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_FloraRiflemanAKU12 : des_FloraRifleman
{
	displayName = "Schütze - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_FloraRiflemanAKM : des_FloraRifleman
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
class des_FloraRiflemanAKMS : des_FloraRiflemanAKM
{
	displayName = "Schütze - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_FloraRiflemanAK47 : des_FloraRiflemanAKM
{
	displayName = "Schütze - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_FloraRiflemanAK103 : des_FloraRiflemanAKM
{
	displayName = "Schütze - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_FloraRiflemanAK104 : des_FloraRiflemanAKM
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
class des_FloraAtAK74m : des_FloraRiflemanAK74m
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
class des_FloraAtAK105 : des_FloraRiflemanAK105
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
class des_FloraAtAK74 : des_FloraRiflemanAK74
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
class des_FloraAtAK74s : des_FloraRiflemanAKS74
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
class des_FloraAtAKS74u : des_FloraRiflemanAKS74u
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
class des_FloraAtAK12 : des_FloraRiflemanAK12
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
class des_FloraAtAKU12 : des_FloraRiflemanAKU12
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
class des_FloraAtAKM : des_FloraRiflemanAKM
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
class des_FloraAtAKMS : des_FloraRiflemanAKMS
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
class des_FloraAtAK47 : des_FloraRiflemanAK47
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
class des_FloraAtAK103 : des_FloraRiflemanAK103
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
class des_FloraAtAK104 : des_FloraRiflemanAK104
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
class des_FloraAaAK74m : des_FloraRiflemanAK74m
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
class des_FloraAaAK105 : des_FloraRiflemanAK105
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
class des_FloraAaAK74 : des_FloraRiflemanAK74
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
class des_FloraAaAK74s : des_FloraRiflemanAKS74
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
class des_FloraAaAKS74u : des_FloraRiflemanAKS74u
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
class des_FloraAaAK12 : des_FloraRiflemanAK12
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
class des_FloraAaAKU12 : des_FloraRiflemanAKU12
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
class des_FloraAaAKM : des_FloraRiflemanAKM
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
class des_FloraAaAKMS : des_FloraRiflemanAKMS
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
class des_FloraAaAK47 : des_FloraRiflemanAK47
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
class des_FloraAaAK103 : des_FloraRiflemanAK103
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
class des_FloraAaAK104 : des_FloraRiflemanAK104
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
class des_FloraSergeantAK74m : des_FloraRiflemanAK74m
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
		"rhs_6b23_6sh92_headset_mapcase",
		"rhs_6b26_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_FloraSergeantAK105 : des_FloraSergeantAK74m
{
	displayName = "Truppführer - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAK74 : des_FloraSergeantAK74m
{
	displayName = "Truppführer - AK-74m";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAKS74 : des_FloraSergeantAK74m
{
	displayName = "Truppführer - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAK12 : des_FloraSergeantAK74m
{
	displayName = "Truppführer - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAKS74U : des_FloraSergeantAK74m
{
	displayName = "Truppführer - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAKU12 : des_FloraSergeantAK74m
{
	displayName = "Truppführer - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAKM : des_FloraRiflemanAKM
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
		"rhs_6b23_6sh92_headset_mapcase",
		"rhs_6b26_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_FloraSergeantAKMS : des_FloraSergeantAKM
{
	displayName = "Truppführer - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAK47 : des_FloraSergeantAKM
{
	displayName = "Truppführer - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAK103 : des_FloraSergeantAKM
{
	displayName = "Truppführer - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"rhs_pdu4"
	};
};
class des_FloraSergeantAK104 : des_FloraSergeantAKM
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
class des_FloraMedicAK74m : des_FloraRiflemanAK74m
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
		"rhs_6b23_medic",
		"rhs_6b26_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_FloraMedicAK105 : des_FloraMedicAK74m
{
	displayName = "Sanitäter - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_FloraMedicAK74 : des_FloraMedicAK74m
{
	displayName = "Sanitäter - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_FloraMedicAK74s : des_FloraMedicAK74m
{
	displayName = "Sanitäter - AK-74s";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};

};
class des_FloraMedicAKS74u : des_FloraMedicAK74m
{
	displayName = "Sanitäter - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_FloraMedicAK12 : des_FloraMedicAK74m
{
	displayName = "Sanitäter - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_FloraMedicAKU12 : des_FloraMedicAK74m
{
	displayName = "Sanitäter - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_FloraMedicAKM : des_FloraMedicAK74m
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
class des_FloraMedicAKMS : des_FloraMedicAKM
{
	displayName = "Sanitäter - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_FloraMedicAK47 : des_FloraMedicAKM
{
	displayName = "Sanitäter - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_FloraMedicAK103 : des_FloraMedicAKM
{
	displayName = "Sanitäter - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_FloraMedicAK104 : des_FloraMedicAKM
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
class des_FloraGrenadierAK74mGP25 : des_FloraRifleman
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
		"rhs_6b23_6sh92_vog",
		"rhs_6b26_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_FloraGrenadierAK12GL : des_FloraGrenadierAK74mGP25
{
	displayName = "Grenadier - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"Binocular"
	};
};
class des_FloraGrenadierAKS74GL : des_FloraGrenadierAK74mGP25
{
	displayName = "Grenadier - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"Binocular"
	};
};
class des_FloraGrenadierAKMgp25 : des_FloraRiflemanAKM
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
		"rhs_6b23_6sh92_vog",
		"rhs_6b26_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_FloraGrenadierAKMSgp25 : des_FloraGrenadierAKMgp25
{
	displayName = "Grenadier - AKMS (GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"Binocular"
	};
};
class des_FloraGrenadierAK103gp25 : des_FloraGrenadierAKMgp25
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
class des_FloraJuniorSergeantAK74mGP25 : des_FloraGrenadierAK74mGP25
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
class des_FloraJuniorSergeantAK12GL : des_FloraJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"rhs_pdu4"
	};
};
class des_FloraJuniorSergeantAKS74GL : des_FloraJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"rhs_pdu4"
	};
};
class des_FloraJuniorSergeantAKMgp25 : des_FloraGrenadierAKMgp25
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
class des_FloraJuniorSergeantAKMSgp25 : des_FloraJuniorSergeantAKMgp25
{
	displayName = "Manövertruppführer - AKMS(GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"rhs_pdu4"
	};
};
class des_FloraJuniorSergeantAK103gp25 : des_FloraJuniorSergeantAKMgp25
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
class des_FloraMachinegunnerPKP : des_FloraRifleman
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
		"rhs_6b23_rifleman",
		"rhs_6b26_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_FloraMachinegunnerPKM : des_FloraMachinegunnerPKP
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
class des_FloraLmachinegunnerRPK : des_FloraMachinegunnerPKP
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
class des_FloraLmachinegunnerRPK12 : des_FloraLmachinegunnerRPK
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
class des_FloraLmachinegunnerRPK74 : des_FloraLmachinegunnerRPK12
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
class des_FloraDMRSVDm : des_FloraRifleman
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
		"rhs_6b23_digi_sniper",
		"rhs_Booniehat_digi",
		"rhs_acc_pso1m2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_FloraDMRSVDs : des_FloraDMRSVDm
{
	displayName = "Scharfschütze - SVDS";
	weapons[] =
	{
		"rhs_weap_svds",
		"rhs_weap_makarov_pmm",
		"rhs_pdu4"

	};
}
