class CfgPatches
{
	class CorePatch_CCP_67587
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class StrykerBase_EP1;
	class M1133_MEV_EP1 : StrykerBase_EP1
	{
		transportSoldier = 6;
	};
};