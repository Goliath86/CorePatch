class CfgPatches
{
	class CorePatch_CIT_23378
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Air;
	class Plane : Air
	{
		ejectDamageLimit = 0.85;
	};
};