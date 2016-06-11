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
	class LAV25_Base;
	class LAV25_HQ: LAV25_Base
	{
		model = "\CorePatch\CorePatch_CIT_62100\LAV25_HQ";
	};
};
