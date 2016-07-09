class CfgPatches
{
	class CorePatch_CIT_39785
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class GRAD_Base;
	class RM70_ACR : GRAD_Base
	{
		crew = "CZ_Soldier_805_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_805_Wdl_ACR"};
	};
};
