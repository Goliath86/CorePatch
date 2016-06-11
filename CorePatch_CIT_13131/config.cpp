class CfgPatches
{
	class CorePatch_CIT_13131
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class CZ_Soldier_base_EP1;
	class CZ_Soldier_AT_DES_EP1 : CZ_Soldier_base_EP1
	{
		magazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"MAAWS_HEAT",
			"MAAWS_HEDP",
			"HandGrenade_West",
			"HandGrenade_West"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"MAAWS_HEDP",
			"HandGrenade_West"
		};
	};
	class CZ_Soldier_DES_EP1 : CZ_Soldier_base_EP1
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
			"HandGrenade_West",
			"HandGrenade_West"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"HandGrenade_West",
			"HandGrenade_West"
		};
	};
	class CZ_Soldier_medik_DES_EP1 : CZ_Soldier_DES_EP1
	{
		magazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"SmokeShell"
		};
	};
	class CZ_Soldier_Light_DES_EP1 : CZ_Soldier_base_EP1
	{
		magazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58"
		};
	};
	class CZ_Soldier_Office_DES_EP1 : CZ_Soldier_base_EP1
	{
		magazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"IR_Strobe_Target",
			"SmokeShellRed",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"IR_Strobe_Target",
			"SmokeShellRed",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17"
		};
	};
	class CZ_Soldier_Pilot_EP1 : CZ_Soldier_base_EP1
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
			"SmokeShellRed"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"HandGrenade_West",
			"SmokeShellRed"
		};
	};
	class CZ_Soldier_SL_DES_EP1 : CZ_Soldier_base_EP1
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
			"IR_Strobe_Target",
			"SmokeShellRed",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17"
		};
		respawnMagazines[] = {
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"30Rnd_762x39_SA58",
			"HandGrenade_West",
			"IR_Strobe_Target",
			"SmokeShellRed",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17"
		};
	};
};
