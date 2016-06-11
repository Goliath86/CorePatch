class CfgPatches
{
	class CorePatch_CIT_24651
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Tank;
	class M113_Base : Tank
	{
		delete irScanRangeMax;
		delete irScanRangeMin;
	};
};
