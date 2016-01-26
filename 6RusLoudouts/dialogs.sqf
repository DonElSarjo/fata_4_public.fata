#include "defines.hpp"

//define displays
_display = _this select 0;
_CT_LISTNBOX = _display displayctrl 1600;

_CT_LISTNBOX1 = _display displayctrl 1700;

_CT_LISTNBOX2 = _display displayctrl 1800;

// filter weapons and define available equipment
_weapon = primaryWeapon player;
if ((_weapon splitstring "_")select 0 == "rhs")then
{
	availableScopes = ["rhs_acc_1p63","rhs_acc_ekp1","rhs_acc_pkas"];
	availableMuzzles = getArray (configfile >> "CfgWeapons" >> _weapon >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
	availableRailAttachments = ["rhs_acc_2dpZenit"];
	if ((_weapon splitstring "_")select 2 == "pkp") then
	{
		availableScopes = ["rhs_acc_1p29","rhs_acc_1p78","rhs_acc_1p63","rhs_acc_ekp1","rhs_acc_pkas"];
		availableMuzzles = getArray (configfile >> "CfgWeapons" >> _weapon >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
		availableRailAttachments = ["rhs_acc_2dpZenit"];
	};
	if ((_weapon splitstring "_")select 2 == "svdp" || (_weapon splitstring "_")select 2 == "svds") then
	{
		availableScopes = ["rhs_acc_pso1m2","rhs_acc_pso1m21"];
		availableMuzzles = getArray (configfile >> "CfgWeapons" >> _weapon >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
		availableRailAttachments = [];
	};
	if ((_weapon splitstring "_")select 2 == "akm" || (_weapon splitstring "_")select 2 == "akms" || (_weapon splitstring "_")select 2 == "pkm") then
	{
		availableScopes = [];
		availableMuzzles = getArray (configfile >> "CfgWeapons" >> _weapon >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
		availableRailAttachments = ["rhs_acc_2dpZenit"];
	};
}
else
{
 	if ((_weapon splitstring "_")select 2 == "ak12" || (_weapon splitstring "_")select 2 == "aku12" || (_weapon splitstring "_")select 2 == "ak12GL" ||(_weapon splitstring "_")select 2 == "RPK12") then
	{
		availableScopes = ["optic_ACO_grn","optic_Aco","optic_ACO_grn_smg","optic_Aco_smg","rhsusf_acc_eotech_552","rhsusf_acc_compm4","optic_Holosight","optic_Holosight_smg","rhsusf_acc_EOTECH"];
		availableMuzzles = getarray (configfile >> "CfgWeapons" >> _weapon >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
		availableRailAttachments = ["acc_flashlight", "acc_pointer_IR", "ACE_acc_pointer_green", "ACE_acc_pointer_green_IR", "ACE_acc_pointer_red", "rhsusf_acc_anpeq15", "rhsusf_acc_anpeq15_light", "rhsusf_acc_anpeq15A", "rhsusf_acc_anpeq15side"]
	}
	else
	{
		availableScopes = ["rhs_acc_1p63","rhs_acc_ekp1","rhs_acc_pkas","hlc_optic_kobra"];
		availableMuzzles = getarray (configfile >> "CfgWeapons" >> _weapon >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
		availableRailAttachments = [];
	};
};

//add rows ro dialog
//add scopes
{
	_CT_LISTNBOX lnbAddRow [gettext (configfile >> "CfgWeapons" >> _x >> "displayName")];
	_CT_LISTNBOX lnbSetData [[_foreachindex, 0],_x];
	_CT_LISTNBOX lnbSetPicture [[_foreachindex,0],gettext (configfile >> "CfgWeapons" >> _x >> "picture")];
} foreach availableScopes;
_CT_LISTNBOX lnbSetCurSelRow 0;

//add muzzles
{
	_CT_LISTNBOX1 lnbAddRow [gettext (configfile >> "CfgWeapons" >> _x >> "displayName")];
	_CT_LISTNBOX1 lnbSetData [[_foreachindex, 0],_x];
	_CT_LISTNBOX1 lnbSetPicture [[_foreachindex,0],gettext (configfile >> "CfgWeapons" >> _x >> "picture")];
} foreach availableMuzzles;
_CT_LISTNBOX1 lnbSetCurSelRow 0;

//add attachments
{
	_CT_LISTNBOX2 lnbAddRow [gettext (configfile >> "CfgWeapons" >> _x >> "displayName")];
	_CT_LISTNBOX2 lnbSetData [[_foreachindex, 0],_x];
	_CT_LISTNBOX2 lnbSetPicture [[_foreachindex,0],gettext (configfile >> "CfgWeapons" >> _x >> "picture")];
} foreach availableRailAttachments;
_CT_LISTNBOX2 lnbSetCurSelRow 0;
