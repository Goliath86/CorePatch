class CfgPatches
{
	class CorePatch_Ammo
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_765x17_Ball : BulletBase
	{
		hit = 5;
	};
	class B_86x70_Ball_noTracer : BulletBase
	{
		delete airLock;
	};
	class B_9x18_Ball : BulletBase
	{
		hit = 5;
	};
	class B_9x18_SD : B_9x18_Ball
	{
		hit = 5;
	};
	class B_9x19_Ball : B_9x18_Ball
	{
		hit = 5;
	};
	class B_9x19_SD : B_9x19_Ball
	{
		hit = 5;
	};
	class B_45ACP_Ball : BulletBase
	{
		hit = 6;
	};
	class B_45ACP_noCartridge_Ball : B_45ACP_Ball
	{
		hit = 7;
	};
	class B_127x108_Ball : BulletBase
	{
		airLock = 0;
	};
	class B_25mm_APDS : BulletBase
	{
		delete airLock;

		hit = 80;
	};
	class B_30mm_AP : BulletBase
	{
		hit = 90;
	};
	class B_30mmA10_AP : BulletBase
	{
		hit = 105;
		indirectHit = 18;
	};
	class MissileBase;
	class M_9M311_AA : MissileBase
	{
		trackLead = 0.5;
	};
	class M_AT5_AT : MissileBase
	{
		model = "\CorePatch\CorePatch_Ammo\AT1";
	};
	class M_AT6_AT : MissileBase
	{
		model = "\CorePatch\CorePatch_Ammo\AT1";
	};
	class M_AT10_AT : MissileBase
	{
		model = "\CorePatch\CorePatch_Ammo\AT1";
	};
	class M_Vikhr_AT : MissileBase
	{
		model = "\CorePatch\CorePatch_Ammo\AT1";
	};
	class RocketCore;
	class RocketBase : RocketCore
	{
		model = "\CorePatch\CorePatch_Ammo\AT1";
	};
	class B_762x51_Ball;
	class B_762x51_noTracer : B_762x51_Ball
	{
		airLock = 0;
	};
	class B_127x99_Ball;
	class B_127x99_Ball_noTracer : B_127x99_Ball
	{
		airLock = 0;
	};
	class R_SMAW_HEAA;
	class R_MEEWS_HEAT : R_SMAW_HEAA
	{
		model = "\CorePatch\CorePatch_Ammo\AT1";
	};
	class R_SMAW_HEDP;
	class R_MEEWS_HEDP : R_SMAW_HEDP
	{
		model = "\CorePatch\CorePatch_Ammo\AT1";
	};
};
