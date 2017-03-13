class CfgPatches
{
	class CorePatch_CIT_24887
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class Default;
	class MissileCore : Default
	{
		//delete maneuvrability;
	};
	class MissileBase;
	class M_Ch29_AT : MissileBase
	{
		trackOversteer = 0.95;
	};
	class BombCore;
	class Bo_FAB_250 : BombCore
	{
		//delete maneuvrability;
		maneuvrability = 5;
		trackOversteer = 0.5;
		trackLead = 0;
	};
	class LaserBombCore;
	class Bo_GBU12_LGB : LaserBombCore
	{
		//delete trackOversteer;
	};
	class R_Hydra_HE;
	class M_CRV7_HEPD : R_Hydra_HE
	{
		//delete maneuvrability;
	};
};
