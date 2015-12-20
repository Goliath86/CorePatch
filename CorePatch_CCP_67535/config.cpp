class CfgPatches
{
	class CorePatch_CCP_67535
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class MissileLauncher;
	class AT5Launcher : MissileLauncher
	{
		reloadTime = 10;
	};
};