class CfgPatches
{
	class CorePatch_CIT_26237
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class US_Soldier_Base_EP1;
	class US_Soldier_Light_EP1 : US_Soldier_Base_EP1
	{
		model = "\CorePatch\CorePatch_CIT_26237\US_officer";
	};
	class US_Soldier_Officer_EP1 : US_Soldier_Base_EP1
	{
		model = "\CorePatch\CorePatch_CIT_26237\US_officer";
	};
};
