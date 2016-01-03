class CfgPatches
{
	class CorePatch_CIT_8198
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_CIT_8198
		{
			list[] = {"CorePatch_CIT_8198"};
		};
	};
};

class CfgVehicles
{
	class Helicopter;
	class Mi24_Base: Helicopter
	{
		model="\CorePatch\CorePatch_CIT_8198\mi24_v.p3d";
	};
	
	class Mi24_Base_RU;
	class Mi24_P: Mi24_Base_RU
	{
		model="\CorePatch\CorePatch_CIT_8198\mi24_p.p3d";
	};
	
	class Mi24_Base_CDF;
	class Mi24_D: Mi24_Base_CDF
	{
		model = "\CorePatch\CorePatch_CIT_8198\mi35.p3d";
	};
};