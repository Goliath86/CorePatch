class CfgPatches
{
	class CorePatch_CIT_23002
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class Default;
	class Laserbeam : Default
	{
		delete aiRateOfFire;
		delete aiRateOfFireDistance;
	};
};