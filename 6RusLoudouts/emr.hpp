/////////////////////////
// Base class Rifleman //
/////////////////////////
class des_EMRRifleman
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
		"rhs_6b23_digi_6sh92",
		"rhs_6b27m_digi_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "rhs_uniform_emr_patchless";
};
///////////////////////
// Rifleman Loudouts //
///////////////////////
class des_EMRRiflemanAK74m : des_EMRRifleman
{
	displayName = "Schütze - AK-74m";
};
class des_EMRRiflemanAK105 : des_EMRRifleman
{
	displayName = "Schütze - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_EMRRiflemanAK74 : des_EMRRifleman
{
	displayName = "Schütze - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_EMRRiflemanAKS74 : des_EMRRifleman
{
	displayName = "Schütze - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};
};
class des_EMRRiflemanAKS74u : des_EMRRifleman
{
	displayName = "Schütze - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_EMRRiflemanAK12 : des_EMRRifleman
{
	displayName = "Schütze - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_EMRRiflemanAKU12 : des_EMRRifleman
{
	displayName = "Schütze - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_EMRRiflemanAKM : des_EMRRifleman
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
class des_EMRRiflemanAKMS : des_EMRRiflemanAKM
{
	displayName = "Schütze - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_EMRRiflemanAK47 : des_EMRRiflemanAKM
{
	displayName = "Schütze - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_EMRRiflemanAK103 : des_EMRRiflemanAKM
{
	displayName = "Schütze - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_EMRRiflemanAK104 : des_EMRRiflemanAKM
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
class des_EMRAtAK74m : des_EMRRiflemanAK74m
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
class des_EMRAtAK105 : des_EMRRiflemanAK105
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

class des_EMRAtAK74 : des_EMRRiflemanAK74
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
class des_EMRAtAK74s : des_EMRRiflemanAKS74
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
class des_EMRAtAKS74u : des_EMRRiflemanAKS74u
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
class des_EMRAtAK12 : des_EMRRiflemanAK12
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
class des_EMRAtAKU12 : des_EMRRiflemanAKU12
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
class des_EMRAtAKM : des_EMRRiflemanAKM
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
class des_EMRAtAKMS : des_EMRRiflemanAKMS
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
class des_EMRAtAK47 : des_EMRRiflemanAK47
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
class des_EMRAtAK103 : des_EMRRiflemanAK103
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
class des_EMRAtAK104 : des_EMRRiflemanAK104
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
class des_EMRAaAK74m : des_EMRRiflemanAK74m
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
class des_EMRAaAK105 : des_EMRRiflemanAK105
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
class des_EMRAaAK74 : des_EMRRiflemanAK74
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
class des_EMRAaAK74s : des_EMRRiflemanAKS74
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
class des_EMRAaAKS74u : des_EMRRiflemanAKS74u
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
class des_EMRAaAK12 : des_EMRRiflemanAK12
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
class des_EMRAaAKU12 : des_EMRRiflemanAKU12
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
class des_EMRAaAKM : des_EMRRiflemanAKM
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
class des_EMRAaAKMS : des_EMRRiflemanAKMS
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
class des_EMRAaAK47 : des_EMRRiflemanAK47
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
class des_EMRAaAK103 : des_EMRRiflemanAK103
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
class des_EMRAaAK104 : des_EMRRiflemanAK104
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
class des_EMRSergeantAK74m : des_EMRRiflemanAK74m
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
		"rhs_6b23_digi_6sh92_headset_mapcase",
		"rhs_6b27m_digi_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};

class des_EMRSergeantAK105 : des_EMRSergeantAK74m
{
	displayName = "Truppführer - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAK74 : des_EMRSergeantAK74m
{
	displayName = "Truppführer - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAKS74 : des_EMRSergeantAK74m
{
	displayName = "Truppführer - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAKS74U : des_EMRSergeantAK74m
{
	displayName = "Truppführer - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAK12 : des_EMRSergeantAK74m
{
	displayName = "Truppführer - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAKU12 : des_EMRSergeantAK74m
{
	displayName = "Truppführer - AKS-12u";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAKM : des_EMRRiflemanAKM
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
		"rhs_6b23_digi_6sh92_headset_mapcase",
		"rhs_6b27m_digi_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_EMRSergeantAKMS : des_EMRSergeantAKM
{
	displayName = "Truppführer - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAK47 : des_EMRSergeantAKM
{
	displayName = "Truppführer - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAK103 : des_EMRSergeantAKM
{
	displayName = "Truppführer - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"rhs_pdu4"
	};
};
class des_EMRSergeantAK104 : des_EMRSergeantAKM
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
class des_EMRMedicAK74m : des_EMRRiflemanAK74m
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
		"rhs_6b27m_digi_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_EMRMedicAK105 : des_EMRMedicAK74m
{
	displayName = "Sanitäter - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_EMRMedicAK74 : des_EMRMedicAK74m
{
	displayName = "Sanitäter - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_EMRMedicAK74s : des_EMRMedicAK74m
{
	displayName = "Sanitäter - AK-74s";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};

};
class des_EMRMedicAKS74u : des_EMRMedicAK74m
{
	displayName = "Sanitäter - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_EMRMedicAK12 : des_EMRMedicAK74m
{
	displayName = "Sanitäter - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_EMRMedicAKU12 : des_EMRMedicAK74m
{
	displayName = "Sanitäter - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_EMRMedicAKM : des_EMRMedicAK74m
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
class des_EMRMedicAKMS : des_EMRMedicAKM
{
	displayName = "Sanitäter - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_EMRMedicAK47 : des_EMRMedicAKM
{
	displayName = "Sanitäter - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_EMRMedicAK103 : des_EMRMedicAKM
{
	displayName = "Sanitäter - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_EMRMedicAK104 : des_EMRMedicAKM
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
class des_EMRGrenadierAK74mGP25 : des_EMRRifleman
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
		"rhs_6b23_digi_6sh92_vog",
		"rhs_6b27m_digi_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_EMRGrenadierAK12GL : des_EMRGrenadierAK74mGP25
{
	displayName = "Grenadier - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"Binocular"
	};
};
class des_EMRGrenadierAKS74GL : des_EMRGrenadierAK74mGP25
{
	displayName = "Grenadier - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"Binocular"
	};
};
class des_EMRGrenadierAKMgp25 : des_EMRRiflemanAKM
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
		"rhs_6b23_digi_6sh92_vog",
		"rhs_6b27m_digi_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_EMRGrenadierAKMSgp25 : des_EMRGrenadierAKMgp25
{
	displayName = "Grenadier - AKMS (GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"Binocular"
	};
};
class des_EMRGrenadierAK103gp25 : des_EMRGrenadierAKMgp25
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
class des_EMRJuniorSergeantAK74mGP25 : des_EMRGrenadierAK74mGP25
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
class des_EMRJuniorSergeantAK12GL : des_EMRJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"rhs_pdu4"
	};
};
class des_EMRJuniorSergeantAKS74GL : des_EMRJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"rhs_pdu4"
	};
};
class des_EMRJuniorSergeantAKMgp25 : des_EMRGrenadierAKMgp25
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
class des_EMRJuniorSergeantAKMSgp25 : des_EMRJuniorSergeantAKMgp25
{
	displayName = "Manövertruppführer - AKMS(GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"rhs_pdu4"
	};
};
class des_EMRJuniorSergeantAK103gp25 : des_EMRJuniorSergeantAKMgp25
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
class des_EMRMachinegunnerPKP : des_EMRRifleman
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
		"rhs_6b27m_digi_ess",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_EMRMachinegunnerPKM : des_EMRMachinegunnerPKP
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
class des_EMRLmachinegunnerRPK : des_EMRMachinegunnerPKP
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
class des_EMRLmachinegunnerRPK12 : des_EMRLmachinegunnerRPK
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
class des_EMRLmachinegunnerRPK74 : des_EMRLmachinegunnerRPK12
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
class des_EMRDMRSVDm : des_EMRRifleman
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
class des_EMRDMRSVDs : des_EMRDMRSVDm
{
	displayName = "Scharfschütze - SVDS";
	weapons[] =
	{
		"rhs_weap_svds",
		"rhs_weap_makarov_pmm",
		"rhs_pdu4"

	};
}
