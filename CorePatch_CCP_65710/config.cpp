class CfgPatches
{
	class CorePatch_CCP_65710
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class CannonCore;
	class 2A38M : CannonCore
	{
		magazineReloadTime = 30;
	};
	class MissileLauncher;
	class 9M311Laucher : MissileLauncher
	{
		magazineReloadTime = 30;
	};
};
