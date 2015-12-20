class CfgPatches
{
	class CorePatch_CIT_24671
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Wheeled_APC;
	class StrykerBase_EP1 : Wheeled_APC
	{
		delete driverIsCommander;
		delete memoryPointsGetInCommander;
		delete memoryPointsGetInCommanderDir;
	};
};