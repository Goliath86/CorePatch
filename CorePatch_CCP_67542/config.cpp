class CfgPatches
{
	class CorePatch_CCP_67542
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
	class Kamaz_Base : Truck
	{
		picture = "\CorePatch\CorePatch_CCP_67542\kamaz_repair.paa";
	};
	class KamazReammo : Kamaz_Base
	{
		picture = "\CorePatch\CorePatch_CCP_67542\kamaz_repair.paa";
	};
	class KamazRepair : Kamaz_Base
	{
		picture = "\CorePatch\CorePatch_CCP_67542\kamaz_repair.paa";
	};
};
