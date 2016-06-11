class CfgPatches
{
	class CorePatch_RU_Soldier_AT
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
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
};
