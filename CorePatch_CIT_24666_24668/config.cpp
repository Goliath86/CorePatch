class CfgPatches
{
	class CorePatch_CIT_24666_24668
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
		delete wreck;

		laserScanner = 1;
	};
	class Pchela1T : UAV
	{
		delete wreck;
	};
};