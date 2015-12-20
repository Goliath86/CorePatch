class CfgPatches
{
	class CorePatch_AT1
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_AT5_AT: MissileBase
	{
		model = "\CorePatch\CorePatch_AT1\at1";
	};
	class M_AT6_AT: MissileBase
	{
		model = "\CorePatch\CorePatch_AT1\at1";
	};
	class M_AT10_AT: MissileBase
	{
		model = "\CorePatch\CorePatch_AT1\at1";
	};
	class M_Vikhr_AT: MissileBase
	{
		model = "\CorePatch\CorePatch_AT1\at1";
	};
	class RocketCore;
	class RocketBase: RocketCore
	{
		model = "\CorePatch\CorePatch_AT1\at1";
	};
	class R_SMAW_HEDP: RocketBase
	{
	};
	class R_SMAW_HEAA: R_SMAW_HEDP
	{
	};
	class R_MEEWS_HEAT: R_SMAW_HEAA
	{
		model = "\CorePatch\CorePatch_AT1\at1";
	};
	class R_MEEWS_HEDP: R_SMAW_HEDP
	{
		model = "\CorePatch\CorePatch_AT1\at1";
	};
};