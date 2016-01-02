class CfgPatches
{
	class CorePatch_CIT_62100
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class Land;
	
	class LandVehicle:Land
	{
	};
	
	class car:LandVehicle
	{
	};
	
	class Wheeled_APC:car
	{
	};
	
	class LAV25_Base: Wheeled_APC
	{
	};
	
	class LAV25:LAV25_Base
	{
	};
	
	class LAV25_HQ:LAV25_Base
	{
		model = "\CorePatch\CorePatch_CIT_62100\lav_hq";
	};
};