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
	class LAV25_Base : Wheeled_APC
	{
		class ViewPilot
		{
			initAngleY = 0;
		};
	};
};
