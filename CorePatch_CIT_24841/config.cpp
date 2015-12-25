class CfgPatches
{
	class CorePatch_CIT_24841
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
	class Ka137_Base_PMC : Helicopter
	{
		threat[] = {0.2, 0, 0};
	};
	class UAV;
	class Chukar : UAV
	{
		threat[] = {0, 0, 0};
	};
	class MQ9PredatorB : UAV
	{
		threat[] = {0, 1, 0};
	};
	class Pchela1T : UAV
	{
		threat[] = {0, 0, 0};
	};
};