class CfgPatches
{
	class CorePatch_CIT_7147
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class House;
	class Land_Farm_Cowshed_b: House
	{
		model = "\CorePatch\CorePatch_CIT_7147\Farm_Cowshed_b";
	};
};
