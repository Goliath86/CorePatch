class CfgPatches
{
	class CorePatch_CIT_39786
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
	class Pandur2_Base : StrykerBase_EP1
	{
		canFloat = 1;
		unitInfoType = "UnitInfoShip";
	};
};
