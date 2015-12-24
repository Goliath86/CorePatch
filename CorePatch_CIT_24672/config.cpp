class CfgPatches
{
	class CorePatch_CIT_24672
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
	class BTR40_MG_base_EP1 : Wheeled_APC
	{
		delete DriverOutOptics;
		delete driverOptics;
		delete driverOpticsOutModel;
	};
};
