class CfgPatches
{
	class CorePatch_CCP_67330
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
	class Lada_base : Car
	{
		displayName = "$STR_DN_LADA_CP";
	};
	class Lada1 : Lada_base
	{
		displayName = "$STR_DN_LADA_WHITE_CP";
	};
	class Lada2 : Lada_base
	{
		displayName = "$STR_DN_LADA_RED_CP";
	};
	class LadaLM : Lada_base
	{
		displayName = "$STR_DN_LADALM_CP";
	};
	class hilux1_civil_3_open_EP1 : Car
	{
		displayName = "$STR_DN_HILUX1_CIVIL_3_OPEN_CP";
	};
	class MTVR;
	class MtvrRefuel : MTVR
	{
		displayName = "$STR_DN_MTVR_REFUEL_CP";
	};
	class Ural_Base;
	class UralRefuel_Base : Ural_Base
	{
		displayName = "$STR_DN_URAL_REFUEL_CP";
	};
	class ReammoBox;
	class USBasicAmmunitionBox : ReammoBox
	{
	};
	class USBasicWeaponsBox : USBasicAmmunitionBox
	{
		displayName = "$STR_DN_USBASICWEAPONSBOX_CP";
	};
	class USLaunchersBox : USBasicAmmunitionBox
	{
		displayName = "$STR_DN_USLAUNCHERSBOX_CP";
	};
	class USOrdnanceBox : USBasicAmmunitionBox
	{
		displayName = "$STR_DN_USORDNANCEBOX_CP";
	};
};
