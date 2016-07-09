class CfgPatches
{
	class CorePatch_CIT_40393
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class BMP2_Base;
	class BVP1_BASE : BMP2_Base
	{
		delete crew;
		delete typicalCargo;
	};
	class BVP1_TK_ACR : BVP1_BASE
	{
		crew = "TK_Soldier_Crew_EP1";
		typicalCargo[] = {"TK_Soldier_Crew_EP1"};
	};
};
