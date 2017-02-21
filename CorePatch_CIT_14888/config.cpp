class CfgPatches
{
	class CorePatch_CIT_14888
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
		class CorePatch_CIT_14888
		{
			list[] = {"CorePatch_CIT_14888"};
		};
	};
};
class CfgMagazines
{
	class 5Rnd_127x99_as50;
	class 5Rnd_127x99_as50_CP : 5Rnd_127x99_as50
	{
		ammo = "B_127x99_Ball_noTracer";
	};
};
class CfgWeapons
{
	class Rifle;
	class BAF_AS50_scoped : Rifle
	{
		magazines[] = {
			"5Rnd_127x99_as50_CP",
			"10Rnd_127x99_m107",
			"5Rnd_127x99_as50"
		};
	};
};
