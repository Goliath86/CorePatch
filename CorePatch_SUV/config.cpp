class CfgPatches
{
	class CorePatch_SUV
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class ArmoredSUV_Base_PMC;
	class ArmoredSUV_PMC : ArmoredSUV_Base_PMC
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	
	class SUV_Base_EP1;
	class SUV_PMC : SUV_Base_EP1
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	
	class SUV_PMC_BAF : SUV_Base_EP1
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
};