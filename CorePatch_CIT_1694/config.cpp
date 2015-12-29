class CfgPatches
{
	class CorePatch_CIT_1694
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
	class BTR90_Base : Wheeled_APC
	{
		class ViewPilot
		{
			maxFov = 0.85000002;
			minFov = 0.41999999;
		};
	};
	class LAV25_Base : Wheeled_APC
	{
		class ViewPilot
		{
			initAngleX = 15;
			initAngleY = 0;
			maxFov = 0.85000002;
			minFov = 0.41999999;
			minAngleX = -85;
		};
	};
};