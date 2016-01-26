/////////////////////////
// Base class Rifleman //
/////////////////////////
class des_FloraAltRifleman
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
class des_FloraAltRiflemanAK74m : des_FloraAltRifleman
{
	displayName = "Schütze - AK-74m";
};
class des_FloraAltRiflemanAK105 : des_FloraAltRifleman
{
	displayName = "Schütze - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_FloraAltRiflemanAK74 : des_FloraAltRifleman
{
	displayName = "Schütze - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_FloraAltRiflemanAKS74 : des_FloraAltRifleman
{
	displayName = "Schütze - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};
};
class des_FloraAltRiflemanAKS74u : des_FloraAltRifleman
{
	displayName = "Schütze - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_FloraAltRiflemanAK12 : des_FloraAltRifleman
{
	displayName = "Schütze - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_FloraAltRiflemanAKU12 : des_FloraAltRifleman
{
	displayName = "Schütze - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_FloraAltRiflemanAKM : des_FloraAltRifleman
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
class des_FloraAltRiflemanAKMS : des_FloraAltRiflemanAKM
{
	displayName = "Schütze - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_FloraAltRiflemanAK47 : des_FloraAltRiflemanAKM
{
	displayName = "Schütze - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_FloraAltRiflemanAK103 : des_FloraAltRiflemanAKM
{
	displayName = "Schütze - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_FloraAltRiflemanAK104 : des_FloraAltRiflemanAKM
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
class des_FloraAltAtAK74m : des_FloraAltRiflemanAK74m
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
class des_FloraAltAtAK105 : des_FloraAltRiflemanAK105
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
class des_FloraAltAtAK74 : des_FloraAltRiflemanAK74
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
class des_FloraAltAtAK74s : des_FloraAltRiflemanAKS74
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
class des_FloraAltAtAKS74u : des_FloraAltRiflemanAKS74u
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
class des_FloraAltAtAK12 : des_FloraAltRiflemanAK12
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
class des_FloraAltAtAKU12 : des_FloraAltRiflemanAKU12
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
class des_FloraAltAtAKM : des_FloraAltRiflemanAKM
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
class des_FloraAltAtAKMS : des_FloraAltRiflemanAKMS
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
class des_FloraAltAtAK47 : des_FloraAltRiflemanAK47
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
class des_FloraAltAtAK103 : des_FloraAltRiflemanAK103
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
class des_FloraAltAtAK104 : des_FloraAltRiflemanAK104
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
class des_FloraAltAaAK74m : des_FloraAltRiflemanAK74m
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
class des_FloraAltAaAK105 : des_FloraAltRiflemanAK105
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
class des_FloraAltAaAK74 : des_FloraAltRiflemanAK74
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
class des_FloraAltAaAK74s : des_FloraAltRiflemanAKS74
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
class des_FloraAltAaAKS74u : des_FloraAltRiflemanAKS74u
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
class des_FloraAltAaAK12 : des_FloraAltRiflemanAK12
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
class des_FloraAltAaAKU12 : des_FloraAltRiflemanAKU12
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
class des_FloraAltAaAKM : des_FloraAltRiflemanAKM
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
class des_FloraAltAaAKMS : des_FloraAltRiflemanAKMS
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
class des_FloraAltAaAK47 : des_FloraAltRiflemanAK47
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
class des_FloraAltAaAK103 : des_FloraAltRiflemanAK103
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
class des_FloraAltAaAK104 : des_FloraAltRiflemanAK104
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
class des_FloraAltSergeantAK74m : des_FloraAltRiflemanAK74m
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
class des_FloraAltSergeantAK105 : des_FloraAltSergeantAK74m
{
	displayName = "Truppführer - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAK74 : des_FloraAltSergeantAK74m
{
	displayName = "Truppführer - AK-74m";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAKS74 : des_FloraAltSergeantAK74m
{
	displayName = "Truppführer - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAK12 : des_FloraAltSergeantAK74m
{
	displayName = "Truppführer - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAKS74U : des_FloraAltSergeantAK74m
{
	displayName = "Truppführer - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAKU12 : des_FloraAltSergeantAK74m
{
	displayName = "Truppführer - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAKM : des_FloraAltRiflemanAKM
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
class des_FloraAltSergeantAKMS : des_FloraAltSergeantAKM
{
	displayName = "Truppführer - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAK47 : des_FloraAltSergeantAKM
{
	displayName = "Truppführer - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAK103 : des_FloraAltSergeantAKM
{
	displayName = "Truppführer - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"rhs_pdu4"
	};
};
class des_FloraAltSergeantAK104 : des_FloraAltSergeantAKM
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
class des_FloraAltMedicAK74m : des_FloraAltRiflemanAK74m
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
class des_FloraAltMedicAK105 : des_FloraAltMedicAK74m
{
	displayName = "Sanitäter - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_FloraAltMedicAK74 : des_FloraAltMedicAK74m
{
	displayName = "Sanitäter - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_FloraAltMedicAK74s : des_FloraAltMedicAK74m
{
	displayName = "Sanitäter - AK-74s";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};

};
class des_FloraAltMedicAKS74u : des_FloraAltMedicAK74m
{
	displayName = "Sanitäter - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_FloraAltMedicAK12 : des_FloraAltMedicAK74m
{
	displayName = "Sanitäter - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_FloraAltMedicAKU12 : des_FloraAltMedicAK74m
{
	displayName = "Sanitäter - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_FloraAltMedicAKM : des_FloraAltMedicAK74m
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
class des_FloraAltMedicAKMS : des_FloraAltMedicAKM
{
	displayName = "Sanitäter - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_FloraAltMedicAK47 : des_FloraAltMedicAKM
{
	displayName = "Sanitäter - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_FloraAltMedicAK103 : des_FloraAltMedicAKM
{
	displayName = "Sanitäter - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_FloraAltMedicAK104 : des_FloraAltMedicAKM
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
class des_FloraAltGrenadierAK74mGP25 : des_FloraAltRifleman
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
class des_FloraAltGrenadierAK12GL : des_FloraAltGrenadierAK74mGP25
{
	displayName = "Grenadier - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"Binocular"
	};
};
class des_FloraAltGrenadierAKS74GL : des_FloraAltGrenadierAK74mGP25
{
	displayName = "Grenadier - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"Binocular"
	};
};
class des_FloraAltGrenadierAKMgp25 : des_FloraAltRiflemanAKM
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
class des_FloraAltGrenadierAKMSgp25 : des_FloraAltGrenadierAKMgp25
{
	displayName = "Grenadier - AKMS (GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"Binocular"
	};
};
class des_FloraAltGrenadierAK103gp25 : des_FloraAltGrenadierAKMgp25
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
class des_FloraAltJuniorSergeantAK74mGP25 : des_FloraAltGrenadierAK74mGP25
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
class des_FloraAltJuniorSergeantAK12GL : des_FloraAltJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"rhs_pdu4"
	};
};
class des_FloraAltJuniorSergeantAKS74GL : des_FloraAltJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"rhs_pdu4"
	};
};
class des_FloraAltJuniorSergeantAKMgp25 : des_FloraAltGrenadierAKMgp25
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
class des_FloraAltJuniorSergeantAKMSgp25 : des_FloraAltJuniorSergeantAKMgp25
{
	displayName = "Manövertruppführer - AKMS(GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"rhs_pdu4"
	};
};
class des_FloraAltJuniorSergeantAK103gp25 : des_FloraAltJuniorSergeantAKMgp25
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
class des_FloraAltMachinegunnerPKP : des_FloraAltRifleman
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
class des_FloraAltMachinegunnerPKM : des_FloraAltMachinegunnerPKP
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
class des_FloraAltLmachinegunnerRPK : des_FloraAltMachinegunnerPKP
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
class des_FloraAltLmachinegunnerRPK12 : des_FloraAltLmachinegunnerRPK
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
class des_FloraAltLmachinegunnerRPK74 : des_FloraAltLmachinegunnerRPK12
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
class des_FloraAltDMRSVDm : des_FloraAltRifleman
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
class des_FloraAltDMRSVDs : des_FloraAltDMRSVDm
{
	displayName = "Scharfschütze - SVDS";
	weapons[] =
	{
		"rhs_weap_svds",
		"rhs_weap_makarov_pmm",
		"rhs_pdu4"

	};
}
