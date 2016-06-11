class CfgPatches
{
	class CorePatch_CIT_24657
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Car;
	class BAF_Jackal2_BASE_D : Car
	{
		delete ejectDeadCommander;
	};
};
