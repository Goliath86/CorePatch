class CfgPatches
{
	class CorePatch_CIT_24957
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
		delete irLock;
	};
	class Bo_FAB_250 : BombCore
	{
		delete irLock;
	};
	class LaserBombCore : BombCore
	{
		delete irLock;
	};
	class MissileCore;
	class MissileBase : MissileCore
	{
		irLock = 1;
	};
	class M_9M311_AA : MissileBase
	{
		delete irLock;
	};
	class M_AT2_AT : MissileBase
	{
		delete irLock;
	};
	class M_AT5_AT : MissileBase
	{
		delete irLock;
	};
	class M_AT6_AT : MissileBase
	{
		delete irLock;
	};
	class M_AT10_AT : MissileBase
	{
		delete irLock;
	};
	class M_Ch29_AT : MissileBase
	{
		delete irLock;
	};
	class M_Hellfire_AT : MissileBase
	{
		delete irLock;
	};
	class M_Javelin_AT : MissileBase
	{
		delete irLock;
	};
	class M_Maverick_AT : MissileBase
	{
		delete irLock;
	};
	class M_NLAW_AT : MissileBase
	{
		delete irLock;
	};
	class M_R73_AA : MissileBase
	{
		delete irLock;
	};
	class M_Sidewinder_AA : MissileBase
	{
		delete irLock;
	};
	class M_Stinger_AA : MissileBase
	{
		delete irLock;
	};
	class M_Strela_AA : MissileBase
	{
		delete irLock;
	};
	class M_TOW_AT : MissileBase
	{
		delete irLock;
	};
	class M_Vikhr_AT : MissileBase
	{
		delete irLock;
	};
};
