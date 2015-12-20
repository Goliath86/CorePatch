class CfgPatches
{
	class CorePatch_CIT_23002_23003
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
	class ShellBase;
	class Sh_82_HE : ShellBase
	{
		delete sideAirFricion;

		sideAirFriction = 0;
	};
};