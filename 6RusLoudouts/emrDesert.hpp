/////////////////////////
// Base class Rifleman //
/////////////////////////
class des_EMRdesertRifleman
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
		"rhs_6b26_ess_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	uniformClass = "rhs_uniform_vdv_emr_des";
};
///////////////////////
// Rifleman Loudouts //
///////////////////////
class des_EMRdesertRiflemanAK74m : des_EMRdesertRifleman
{
	displayName = "Schütze - AK-74m";
};
class des_EMRdesertRiflemanAK105 : des_EMRdesertRifleman
{
	displayName = "Schütze - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAK74 : des_EMRdesertRifleman
{
	displayName = "Schütze - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAKS74 : des_EMRdesertRifleman
{
	displayName = "Schütze - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAKS74u : des_EMRdesertRifleman
{
	displayName = "Schütze - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAK12 : des_EMRdesertRifleman
{
	displayName = "Schütze - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAKU12 : des_EMRdesertRifleman
{
	displayName = "Schütze - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAKM : des_EMRdesertRifleman
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
class des_EMRdesertRiflemanAKMS : des_EMRdesertRiflemanAKM
{
	displayName = "Schütze - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAK47 : des_EMRdesertRiflemanAKM
{
	displayName = "Schütze - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAK103 : des_EMRdesertRiflemanAKM
{
	displayName = "Schütze - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_EMRdesertRiflemanAK104 : des_EMRdesertRiflemanAKM
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
class des_EMRdesertAtAK74m : des_EMRdesertRiflemanAK74m
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
class des_EMRdesertAtAK105 : des_EMRdesertRiflemanAK105
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

class des_EMRdesertAtAK74 : des_EMRdesertRiflemanAK74
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
class des_EMRdesertAtAK74s : des_EMRdesertRiflemanAKS74
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
class des_EMRdesertAtAKS74u : des_EMRdesertRiflemanAKS74u
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
class des_EMRdesertAtAK12 : des_EMRdesertRiflemanAK12
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
class des_EMRdesertAtAKU12 : des_EMRdesertRiflemanAKU12
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
class des_EMRdesertAtAKM : des_EMRdesertRiflemanAKM
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
class des_EMRdesertAtAKMS : des_EMRdesertRiflemanAKMS
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
class des_EMRdesertAtAK47 : des_EMRdesertRiflemanAK47
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
class des_EMRdesertAtAK103 : des_EMRdesertRiflemanAK103
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
class des_EMRdesertAtAK104 : des_EMRdesertRiflemanAK104
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
class des_EMRdesertAaAK74m : des_EMRdesertRiflemanAK74m
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
class des_EMRdesertAaAK105 : des_EMRdesertRiflemanAK105
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
class des_EMRdesertAaAK74 : des_EMRdesertRiflemanAK74
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
class des_EMRdesertAaAK74s : des_EMRdesertRiflemanAKS74
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
class des_EMRdesertAaAKS74u : des_EMRdesertRiflemanAKS74u
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
class des_EMRdesertAaAK12 : des_EMRdesertRiflemanAK12
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
class des_EMRdesertAaAKU12 : des_EMRdesertRiflemanAKU12
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
class des_EMRdesertAaAKM : des_EMRdesertRiflemanAKM
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
class des_EMRdesertAaAKMS : des_EMRdesertRiflemanAKMS
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
class des_EMRdesertAaAK47 : des_EMRdesertRiflemanAK47
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
class des_EMRdesertAaAK103 : des_EMRdesertRiflemanAK103
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
class des_EMRdesertAaAK104 : des_EMRdesertRiflemanAK104
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
class des_EMRdesertSergeantAK74m : des_EMRdesertRiflemanAK74m
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
		"rhs_6b26_ess_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};

class des_EMRdesertSergeantAK105 : des_EMRdesertSergeantAK74m
{
	displayName = "Truppführer - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAK74 : des_EMRdesertSergeantAK74m
{
	displayName = "Truppführer - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAKS74 : des_EMRdesertSergeantAK74m
{
	displayName = "Truppführer - AKS-74";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAKS74U : des_EMRdesertSergeantAK74m
{
	displayName = "Truppführer - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAK12 : des_EMRdesertSergeantAK74m
{
	displayName = "Truppführer - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAKU12 : des_EMRdesertSergeantAK74m
{
	displayName = "Truppführer - AKS-12u";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAKM : des_EMRdesertRiflemanAKM
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
		"rhs_6b26_ess_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_EMRdesertSergeantAKMS : des_EMRdesertSergeantAKM
{
	displayName = "Truppführer - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAK47 : des_EMRdesertSergeantAKM
{
	displayName = "Truppführer - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAK103 : des_EMRdesertSergeantAKM
{
	displayName = "Truppführer - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"rhs_pdu4"
	};
};
class des_EMRdesertSergeantAK104 : des_EMRdesertSergeantAKM
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
class des_EMRdesertMedicAK74m : des_EMRdesertRiflemanAK74m
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
		"rhs_6b23_digi_medic",
		"rhs_6b26_ess_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_EMRdesertMedicAK105 : des_EMRdesertMedicAK74m
{
	displayName = "Sanitäter - AK-105";
	weapons[] =
	{
		"rhs_weap_ak105",
		"Binocular"
	};
};
class des_EMRdesertMedicAK74 : des_EMRdesertMedicAK74m
{
	displayName = "Sanitäter - AK-74";
	weapons[] =
	{
		"hlc_rifle_ak74",
		"Binocular"
	};
};
class des_EMRdesertMedicAK74s : des_EMRdesertMedicAK74m
{
	displayName = "Sanitäter - AK-74s";
	weapons[] =
	{
		"hlc_rifle_aks74",
		"Binocular"
	};

};
class des_EMRdesertMedicAKS74u : des_EMRdesertMedicAK74m
{
	displayName = "Sanitäter - AKS-74u";
	weapons[] =
	{
		"hlc_rifle_aks74u",
		"Binocular"
	};
};
class des_EMRdesertMedicAK12 : des_EMRdesertMedicAK74m
{
	displayName = "Sanitäter - AK-12";
	weapons[] =
	{
		"hlc_rifle_ak12",
		"Binocular"
	};
};
class des_EMRdesertMedicAKU12 : des_EMRdesertMedicAK74m
{
	displayName = "Sanitäter - AKU-12";
	weapons[] =
	{
		"hlc_rifle_aku12",
		"Binocular"
	};
};
class des_EMRdesertMedicAKM : des_EMRdesertMedicAK74m
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
class des_EMRdesertMedicAKMS : des_EMRdesertMedicAKM
{
	displayName = "Sanitäter - AKMS";
	weapons[] =
	{
		"rhs_weap_akms",
		"Binocular"
	};
};
class des_EMRdesertMedicAK47 : des_EMRdesertMedicAKM
{
	displayName = "Sanitäter - AK-47";
	weapons[] =
	{
		"hlc_rifle_ak47",
		"Binocular"
	};
};
class des_EMRdesertMedicAK103 : des_EMRdesertMedicAKM
{
	displayName = "Sanitäter - AK-103";
	weapons[] =
	{
		"rhs_weap_ak103",
		"Binocular"
	};
};
class des_EMRdesertMedicAK104 : des_EMRdesertMedicAKM
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
class des_EMRdesertGrenadierAK74mGP25 : des_EMRdesertRifleman
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
		"rhs_6b26_ess_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_EMRdesertGrenadierAK12GL : des_EMRdesertGrenadierAK74mGP25
{
	displayName = "Grenadier - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"Binocular"
	};
};
class des_EMRdesertGrenadierAKS74GL : des_EMRdesertGrenadierAK74mGP25
{
	displayName = "Grenadier - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"Binocular"
	};
};
class des_EMRdesertGrenadierAKMgp25 : des_EMRdesertRiflemanAKM
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
		"rhs_6b26_ess_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
};
class des_EMRdesertGrenadierAKMSgp25 : des_EMRdesertGrenadierAKMgp25
{
	displayName = "Grenadier - AKMS (GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"Binocular"
	};
};
class des_EMRdesertGrenadierAK103gp25 : des_EMRdesertGrenadierAKMgp25
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
class des_EMRdesertJuniorSergeantAK74mGP25 : des_EMRdesertGrenadierAK74mGP25
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
class des_EMRdesertJuniorSergeantAK12GL : des_EMRdesertJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AK-12GL";
	weapons[] =
	{
		"hlc_rifle_ak12GL",
		"rhs_pdu4"
	};
};
class des_EMRdesertJuniorSergeantAKS74GL : des_EMRdesertJuniorSergeantAK74mGP25
{
	displayName = "Manövertruppführer - AKS-74GL";
	weapons[] =
	{
		"hlc_rifle_aks74_GL",
		"rhs_pdu4"
	};
};
class des_EMRdesertJuniorSergeantAKMgp25 : des_EMRdesertGrenadierAKMgp25
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
class des_EMRdesertJuniorSergeantAKMSgp25 : des_EMRdesertJuniorSergeantAKMgp25
{
	displayName = "Manövertruppführer - AKMS(GP-25)";
	weapons[] =
	{
		"rhs_weap_akms_gp25",
		"rhs_pdu4"
	};
};
class des_EMRdesertJuniorSergeantAK103gp25 : des_EMRdesertJuniorSergeantAKMgp25
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
class des_EMRdesertMachinegunnerPKP : des_EMRdesertRifleman
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
		"rhs_6b23_digi_6sh92",
		"rhs_6b26_ess_green",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	backpack = "rhs_sidor";
};
class des_EMRdesertMachinegunnerPKM : des_EMRdesertMachinegunnerPKP
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
class des_EMRdesertLmachinegunnerRPK : des_EMRdesertMachinegunnerPKP
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
class des_EMRdesertLmachinegunnerRPK12 : des_EMRdesertLmachinegunnerRPK
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
class des_EMRdesertLmachinegunnerRPK74 : des_EMRdesertLmachinegunnerRPK12
{
	displayName = "Maschinengewehrschütze - RPK-74";
	weapons[] =
			{
				"hlc_rifle_rpk74n",
				"Binocular"
			};
};
/////////
// DMR //
/////////
class des_EMRdesertDMRSVDm : des_EMRdesertRifleman
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
		"rhs_fieldcap_digi_des",
		"rhs_acc_pso1m2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ItemRadio"
	};
};
class des_EMRdesertDMRSVDs : des_EMRdesertDMRSVDm
{
	displayName = "Scharfschütze - SVDS";
	weapons[] =
	{
		"rhs_weap_svds",
		"rhs_weap_makarov_pmm",
		"rhs_pdu4"

	};
}
