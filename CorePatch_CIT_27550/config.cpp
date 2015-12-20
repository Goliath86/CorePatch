class CfgPatches
{
	class CorePatch_CIT_27550
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		sensitivityEar = 0.5;
	};
};