class CfgPatches
{
	class CorePatch_CCP_67739
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Mi17_base;
	class Mi17_medevac_base : Mi17_base
	{
		magazines[] = {"120Rnd_CMFlareMagazine"};
		weapons[] = {"CMFlareLauncher"};
	};
};