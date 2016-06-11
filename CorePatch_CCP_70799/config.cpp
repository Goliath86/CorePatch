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
	class CAManBase;
	class SoldierEB : CAManBase
	{
		class HitPoints;
	};
	class MVD_Soldier_Base : SoldierEB
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class MVD_Soldier_Medic : MVD_Soldier_Base
	{
		accuracy = 3.9000001;
		attendant = 1;
		canCarryBackpack = 0;
		cost = 500000;
		displayName = "$STR_DN_MEDIC";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"HandGrenade_East",
			"HandGrenade_East",
			"HandGrenade_East",
			"HandGrenade_East",
			"SmokeShell",
			"SmokeShellOrange"
		};
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"HandGrenade_East",
			"HandGrenade_East",
			"SmokeShell",
			"SmokeShellOrange"
		};
		respawnWeapons[] = {
			"AKS_74_U",
			"ItemGPS",
			"NVGoggles",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		weapons[] = {
			"AKS_74_U",
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
	class RUS_Soldier_Base : SoldierEB
	{
		canDeactivateMines = 1;
		canHideBodies = 1;

		class HitPoints : HitPoints
		{
			class HitHead;
		};
	};
	class RUS_Soldier_Medic : RUS_Soldier_Base
	{
		accuracy = 3.9000001;
		attendant = 1;
		canCarryBackpack = 0;
		cost = 200000;
		displayName = "$STR_DN_SPECNAZ_MEDIC_CP";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		magazines[] = {
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"HandGrenade_East",
			"HandGrenade_East",
			"SmokeShell",
			"SmokeShellOrange"
		};
		model = "\ca\characters2\Rus\Specnaz_Back";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		respawnMagazines[] = {
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"HandGrenade_East",
			"SmokeShell"
		};
		respawnWeapons[] = {
			"Bizon",
			"ItemGPS",
			"NVGoggles",
			"Binocular",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		weapons[] = {
			"Bizon",
			"ItemGPS",
			"NVGoggles",
			"Binocular",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
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
	class TK_Special_Forces_Medic_EP1 : TK_Special_Forces_EP1
	{
		attendant = 1;
		backpack = "";
		canCarryBackpack = 0;
		cost = 100000;
		displayName = "$STR_DN_TK_SPECIAL_FORCES_MEDIC_CP";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade_East",
			"HandGrenade_East",
			"SmokeShell",
			"SmokeShellBlue",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov"
		};
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		respawnMagazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade_East",
			"SmokeShellBlue",
			"8Rnd_9x18_Makarov",
			"8Rnd_9x18_Makarov"
		};
		respawnWeapons[] = {
			"M4A1",
			"Binocular",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"Makarov"
		};
		weapons[] = {
			"M4A1",
			"Binocular",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"Makarov"
		};
	};
	class UN_CDF_Soldier_base_EP1;
	class UN_CDF_Soldier_Engineer_EP1 : UN_CDF_Soldier_base_EP1
	{
		accuracy = 3.9000001;
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
		scope = 2;
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
	class UN_CDF_Soldier_Medic_EP1 : UN_CDF_Soldier_base_EP1
	{
		accuracy = 3.7;
		attendant = 1;
		canCarryBackpack = 0;
		cost = 60000;
		displayName = "$STR_DN_MEDIC";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"HandGrenade_East",
			"SmokeShellOrange"
		};
		nameSound = "veh_Medic";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		respawnMagazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"HandGrenade_East",
			"SmokeShellOrange"
		};
		respawnWeapons[] = {
			"AKS_74_U",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		textPlural = "$STR_DN_MEDICS";
		textSingular = "$STR_DN_MEDIC";
		weaponSlots = "1 + 4 + 8 * 256 + 2 * 4096 + 2 + 4 * 16 + 12 * 131072";
		weapons[] = {
			"AKS_74_U",
			"Throw",
			"Put",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Medic"};
				speechPlural[] = {"veh_Medics"};
			};
			class EN : Default
			{
			};
			class CZ
			{
				speechSingular[] = {"veh_Medic_CZ"};
				speechPlural[] = {"veh_Medics_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Medic_CZ4P"};
				speechPlural[] = {"veh_Medics_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Medic_RU"};
				speechPlural[] = {"veh_Medics_RU"};
			};
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
};
