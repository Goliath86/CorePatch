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
		delete threat;
	};
	class MtvrReammo: MTVR
	{
		delete threat;
	};
	class MtvrRefuel: MTVR
	{
		delete threat;
	};
	class MtvrRepair: MTVR
	{
		delete threat;
	};
};