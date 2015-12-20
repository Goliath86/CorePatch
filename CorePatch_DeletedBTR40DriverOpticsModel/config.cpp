class CfgPatches
{
	class CorePatch_DeletedBTR40DriverOpticsModel
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Car;
	class Wheeled_APC : Car
	{
		class ViewPilot;
	};
	class BTR40_MG_base_EP1 : Wheeled_APC
	{
		delete driverOpticsModel;

		class ViewPilot : ViewPilot
		{
			initFov = 0.69999999;
			maxFov = 0.85000002;
			minFov = 0.41999999;
		};
	};
};