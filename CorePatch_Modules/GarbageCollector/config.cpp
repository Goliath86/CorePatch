class CfgPatches
{
	class CorePatch_Modules_GarbageCollector
	{
		requiredAddons[] = {"CorePatch_Modules"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Logic;
	class GarbageCollector: Logic
	{
		class Eventhandlers
		{
			init = "private '_ok'; _ok = (_this select 0) execVM '\CorePatch\CorePatch_Modules\GarbageCollector\data\scripts\init.sqf'";
		};
	};
};
