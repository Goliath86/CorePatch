class CfgPatches
{
	class CorePatch_CCP_69133
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Truck;
	class MTVR: Truck
	{
		threat[] = {0, 0, 0};
	};
};
