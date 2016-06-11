class CfgPatches
{
	class CorePatch_CIT_24668
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class UAV;
	class MQ9PredatorB : UAV
	{
		laserScanner = 1;
	};
};
