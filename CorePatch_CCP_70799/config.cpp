class CfgPatches
{
	class CorePatch_CCP_70799
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_CCP_70799
		{
			list[] = {"CorePatch_CCP_70799"};
		};
	};
};
class CfgVehicles 
{
	class SoldierEB;
	class RUS_Soldier_Base : SoldierEB
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class SoldierWB;
	class GER_Soldier_base_EP1 : SoldierWB
	{
		canDeactivateMines = 1;
	};
	class CZ_Soldier_base_EP1;
	class CZ_Special_Forces_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_GL_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_MG_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_Scout_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_TL_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class GUE_Soldier_Base;
	class GUE_Soldier_Sab : GUE_Soldier_Base
	{
		canHideBodies = 1;
		engineer = 0;
	};
	class Ins_Soldier_Base;
	class Ins_Soldier_Sab : Ins_Soldier_Base
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
		engineer = 0;
	};
	class Ins_Soldier_Sapper : Ins_Soldier_Base
	{
		engineer = 0;
	};
	class MVD_Soldier;
	class MVD_Soldier_Engineer : MVD_Soldier
	{
		canDeactivateMines = 1;
		cost = 750000;
		displayName = "$STR_DN_ENGINEER";
		engineer = 1;
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"MineE",
			"MineE",
			"HandGrenade_East",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"MineE",
			"SmokeShell"
		};
		respawnWeapons[] = {
			"AK_107_kobra",
			"ItemGPS",
			"NVGoggles",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		threat[] = {1, 0.5, 0.1};
		weapons[] = {
			"AK_107_kobra",
			"ItemGPS",
			"NVGoggles",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class RU_Soldier_Base;
	class RU_Soldier_Engineer : RU_Soldier_Base
	{
		accuracy = 3.9000001;
		canCarryBackpack = 0;
		canDeactivateMines = 1;
		cost = 100000;
		displayName = "$STR_DN_ENGINEER";
		engineer = 1;
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"MineE",
			"MineE",
			"HandGrenade_East",
			"SmokeShell"
		};
		model = "\ca\characters2\Rus\Soldier_MG";
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"MineE",
			"SmokeShell"
		};
		respawnWeapons[] = {
			"AK_107_kobra",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		threat[] = {1, 0.5, 0.1};
		weapons[] = {
			"AK_107_kobra",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class TK_GUE_Soldier_Base_EP1;
	class US_Delta_Force_Undercover_Takistani_Base_EP1 : TK_GUE_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class TK_Soldier_base_EP1;
	class TK_Special_Forces_EP1 : TK_Soldier_base_EP1
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class UN_CDF_Soldier_EP1;
	class UN_CDF_Soldier_Engineer_EP1 : UN_CDF_Soldier_EP1
	{
		canDeactivateMines = 1;
		cost = 60000;
		displayName = "$STR_DN_ENGINEER";
		engineer = 1;
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"HandGrenade_East",
			"HandGrenade_East",
			"Mine",
			"Mine"
		};
		picture = "\Ca\characters_E\data\Ico\i_eng_ca.paa";
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"HandGrenade_East",
			"Mine"
		};
		respawnWeapons[] = {
			"AK_74",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		threat[] = {1, 0.5, 0.1};
		weapons[] = {
			"AK_74",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class US_Soldier_Base_EP1;
	class Drake : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Delta_Force_EP1 : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Delta_Force_TL_EP1 : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Soldier_Crew_EP1;
	class Herrera : US_Soldier_Crew_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Soldier_Pilot_EP1;
	class Pierce : US_Soldier_Pilot_EP1
	{
		canDeactivateMines = 1;
	};
	class USMC_Soldier_Base;
	class USMC_SoldierS_Engineer : USMC_Soldier_Base
	{
		cost = 100000;
	};
};
