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
	class BombCore : Default
	{
	};
	class Bo_FAB_250 : BombCore
	{
		delete maneuvrability;
	};
	class LaserBombCore : BombCore
	{
	};
	class Bo_GBU12_LGB : LaserBombCore
	{
		delete trackOversteer;
	};
	class MissileCore : Default
	{
		delete maneuvrability;
	};
	class MissileBase : MissileCore
	{
	};
	class M_Ch29_AT : MissileBase
	{
		trackOversteer = 0.94999999;
	};
	class RocketCore : Default
	{
	};
	class RocketBase : RocketCore
	{
	};
	class R_Hydra_HE : RocketBase
	{
	};
	class M_CRV7_HEPD : R_Hydra_HE
	{
		delete maneuvrability;
	};
};