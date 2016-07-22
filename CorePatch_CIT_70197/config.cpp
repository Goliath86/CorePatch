class CfgPatches
{
	class CorePatch_CIT_70197
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class 15Rnd_9x19_M9;
	class 10Rnd_9x19_Compact : 15Rnd_9x19_M9
	{
	};
};
class CfgVehicles
{
	class CZ_Soldier_Base_ACR;
	class CZ_Soldier_Crew_Dst_ACR : CZ_Soldier_Base_ACR
	{
		magazines[] = {
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"HandGrenade_West",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact"
		};
		respawnMagazines[] = {
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact"
		};
	};
	class CZ_Soldier_Medic_Wdl_ACR : CZ_Soldier_Base_ACR
	{
		magazines[] = {
			"30Rnd_556x45_G36",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_G36",
			"HandGrenade_West",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact"
		};
		respawnMagazines[] = {
			"30Rnd_556x45_G36",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_G36",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed",
			"10Rnd_9x19_Compact",
			"10Rnd_9x19_Compact"
		};
	};
	class CZ_Soldier_Pilot_Wdl_ACR : CZ_Soldier_Base_ACR
	{
		magazines[] = {
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"HandGrenade_West",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed"
		};
		respawnMagazines[] = {
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"20Rnd_9x19_EVO",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed"
		};
		weaponSlots = "1 + 4 + 8 * 256 + 2 * 4096 + 2 + 4 * 16 + 12 * 131072";
	};
	class CZ_Soldier_RPG_Ass_Dst_ACR : CZ_Soldier_Base_ACR
	{
		magazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"HandGrenade_West",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"HandGrenade_West",
			"SmokeShell",
			"SmokeShellRed",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9"
		};
	};
	class CZ_Soldier_RPG_Dst_ACR : CZ_Soldier_Base_ACR
	{
		magazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"PG7VL",
			"PG7VL",
			"PG7VL",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"PG7VL",
			"PG7VL",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9"
		};
	};
	class RU_Soldier_Base;
	class RU_Soldier_AT : RU_Soldier_Base
	{
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"PG7VL",
			"PG7VL",
			"PG7VL"
		};
	};
	class ReammoBox;
	class ReammoBox_ACR : ReammoBox
	{
	};
	class Bag_Base_ACR : ReammoBox_ACR
	{
	};
	class CZ_Backpack_RPG_ACR : Bag_Base_ACR
	{
		class TransportMagazines
		{
			delete _xx_PG7VR;

			class _xx_PG7VL
			{
				count = 3;
				magazine = "PG7VL";
			};
		};
	};
};
