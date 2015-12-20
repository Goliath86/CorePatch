class CfgPatches
{
	class CorePatch_CCP_67330_OA
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgFactionClasses
{
	class BIS_CZ
	{
		displayName = "$STR_DN_FN_BIS_CZ_CP";
		primaryLanguage = "EN";
		priority = 9;
		side = 1;
	};
};
class CfgVehicles
{
	class CZ_Soldier_base_EP1;
	class CZ_Special_Forces_GL_DES_EP1 : CZ_Soldier_base_EP1
	{
		displayName = "$STR_DN_SOLDIER_GL_CP";
	};
	class Car;
	class hilux1_civil_3_open_EP1 : Car
	{
		displayName = "$STR_DN_HILUX1_CIVIL_3_OPEN_EP1_CP";
	};
	class MTVR;
	class MtvrRefuel : MTVR
	{
	};
	class MtvrRefuel_base : MtvrRefuel
	{
	};
	class MtvrRefuel_DES_EP1 : MtvrRefuel_base
	{
		displayName = "$STR_DN_MTVRREFUEL_DES_EP1_CP";
	};
	class US_Soldier_Base_EP1;
	class US_Soldier_GL_EP1 : US_Soldier_Base_EP1
	{
		displayName = "$STR_DN_SOLDIER_GL_CP";
	};
	class V3S_Base_EP1;
	class V3S_Refuel_TK_GUE_EP1 : V3S_Base_EP1
	{
		displayName = "$STR_DN_V3S_REFUEL_TK_GUE_EP1_CP";
	};
};