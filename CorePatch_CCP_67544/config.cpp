class CfgPatches
{
	class CorePatch_CCP_67544
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class HMMWV_base;
	class HMMWV_Terminal_EP1 : HMMWV_base
	{
		picture = "\Ca\wheeled2\data\UI\Picture_M997A2_CA.paa";
	};
};
