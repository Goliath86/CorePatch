class CfgPatches
{
	class CorePatch_CCP_67740
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Helicopter;
	class AH6_Base_EP1 : Helicopter
	{
		delete magazines;
		delete weapons;
	};
};
