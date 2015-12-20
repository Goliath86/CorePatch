class CfgPatches
{
	class CorePatch_CIT_24664
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
	class Land_fort_artillery_nest: House
	{
		delete GhostView;

		ghostPreview = "Land_fort_artillery_nestPreview";
	};
};