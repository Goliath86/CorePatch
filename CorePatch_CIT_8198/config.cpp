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
class CfgVehicles
{
	class Helicopter;
	class Mi24_Base: Helicopter
	{
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi24_V";
	};
	class Mi24_Base_CDF;
	class Mi24_D: Mi24_Base_CDF
	{
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi35";
	};
	class Mi24_Base_RU;
	class Mi24_P: Mi24_Base_RU
	{
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi24_P";
	};
};
