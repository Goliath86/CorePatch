class CfgPatches
{
	class CorePatch_CCP_70799
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {
			"MVD_Soldier_Medic",
			"RU_Soldier_Engineer",
			"RUS_Soldier_Medic",
			"TK_Special_Forces_Medic_EP1",
			"UN_CDF_Soldier_Engineer_EP1",
			"UN_CDF_Soldier_Medic_EP1"
		};
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
	class MVD_Soldier_Base;
	class MVD_Soldier : MVD_Soldier_Base
	{
	};
	class MVD_Soldier_Medic : MVD_Soldier
	{
		accuracy = 3.7;
		attendant = 1;
		canCarryBackpack = 0;
		cost = 500000;
		displayName = "$STR_DN_MEDIC";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		model = "\ca\characters2\Rus\Vityaz_2";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
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
	class RU_Soldier_Base;
	class RU_Soldier : RU_Soldier_Base
	{
	};
	class RU_Soldier_Engineer : RU_Soldier
	{
		canCarryBackpack = 0;
		canDeactivateMines = 1;
		cost = 100000;
		displayName = "$STR_DN_SOLDIER_ENGINEER_CP";
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
		threat[] = {1, 0.5, 0.1};
	};
	class RUS_Soldier_Base;
	class RUS_Soldier1 : RUS_Soldier_Base
	{
	};
	class RUS_Soldier_Medic : RUS_Soldier1
	{
		accuracy = 3.7;
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
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		respawnMagazines[] = {
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"64Rnd_9x19_Bizon",
			"HandGrenade_East",
			"SmokeShell"
		};
	};
	class TK_Special_Forces_EP1;
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
		displayName = "$STR_DN_SOLDIER_ENGINEER_CP";
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
};
