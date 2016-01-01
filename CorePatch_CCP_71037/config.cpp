class CfgPatches
{
	class CorePatch_CCP_71037
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class AT5Launcher;
	class 2A46MRocket : AT5Launcher
	{
		magazineReloadTime = 20;
		reloadTime = 8;
	};
};
