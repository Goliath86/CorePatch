class CfgPatches
{
	class CorePatch_CIT_23003
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class ShellBase;
	class Sh_82_HE : ShellBase
	{
		delete sideAirFricion;

		sideAirFriction = 0;
	};
};
