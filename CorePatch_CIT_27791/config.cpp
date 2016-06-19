class CfgPatches
{
	class CorePatch_CIT_27791
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class SoldierEB;
	class RU_Soldier_Base : SoldierEB
	{
		accuracy = 2;
	};
	class TK_INS_Soldier_Base_EP1 : SoldierEB
	{
		accuracy = 2;
	};
	class SoldierGB;
	class TK_GUE_Soldier_Base_EP1 : SoldierGB
	{
		accuracy = 2;
	};
	class SoldierWB;
	class BAF_Soldier_base_EP1 : SoldierWB
	{
		accuracy = 2;
	};
};
