class CfgPatches
{
	class CorePatch_M113_PMC
	{
		requiredAddons[] = {
			"cacharacters_pmc",
			"catracked_e_m113"
		};
		requiredVersion = 1.00;
		units[] = {"M113_PMC"};
		weapons[] = {};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_M113_PMC {
          list[] = {"CorePatch_M113_PMC"};
       };
    };
};

class CfgVehicles
{
	class M113_Base;
	class M113_PMC : M113_Base
	{
		crew = "Soldier_Crew_PMC";
		expansion = 4;
		faction = "PMC_BAF";
		hiddenSelectionsTextures[] = {"\ca\Tracked_E\M113\Data\m113a3_01_co.paa"};
		scope = 2;
		side = 2;
		typicalCargo[] = {
			"Soldier_Crew_PMC",
			"Soldier_Crew_PMC"
		};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_M203
			{
				count = 5;
				magazine = "1Rnd_HE_M203";
			};
			class _xx_30Rnd_556x45_Stanag
			{
				count = 30;
				magazine = "30Rnd_556x45_Stanag";
			};
			class _xx_100Rnd_556x45_BetaCMag
			{
				count = 5;
				magazine = "100Rnd_556x45_BetaCMag";
			};
			class _xx_HandGrenade_West
			{
				count = 10;
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = 2;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellOrange
			{
				count = 2;
				magazine = "SmokeShellOrange";
			};
		};
		class TransportWeapons
		{
			class _xx_m8_carbine_pmc
			{
				count = 2;
				weapon = "m8_carbine_pmc";
			};
		};
	};
};