class CfgPatches
{
	class CorePatch_ChangedDTMagazineAmmo
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class 100Rnd_762x54_PK;
	class 60Rnd_762x54_DT : 100Rnd_762x54_PK
	{
		delete ammo;
	};
};