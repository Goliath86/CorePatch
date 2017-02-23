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
	class AT3 : MissileBase
	{
		model = "\CorePatch\CorePatch_Ammo\models\AT3_9M14_inflight";
		soundFly[] = {
			"\Ca\sounds\Weapons\explosions\rocket_fly1",
			0.316228,
			1.5
		};
	};
	class M_9M311_AA : MissileBase
	{
		trackLead = 0.5;
	};
	class M_AT3_AT : MissileBase
	{
		model = "\CorePatch\CorePatch_Ammo\models\AT3_9M14_inflight";
	};

	class M_TOW_AT:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\TOW_inflight";};

	class M_Javelin_AT:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\Javelin_inflight";};

	class M_AT2_AT:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\AT2_9M17_inflight";};

	class M_AT5_AT:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\AT3_9M14_inflight";};
	class M_AT6_AT:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\AT3_9M14_inflight";};
	class M_AT10_AT:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\AT3_9M14_inflight";};
	class M_Vikhr_AT:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\AT3_9M14_inflight";};

	class M_Stinger_AA:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\Stinger_inflight";};
	class M_Strela_AA:MissileBase	{model = "\CorePatch\CorePatch_Ammo\models\Strela_inflight";};
	class M_Igla_AA:M_Strela_AA	{model = "\CorePatch\CorePatch_Ammo\models\Strela_inflight";};

	class RocketCore;
	class RocketBase:RocketCore	{model = "\CorePatch\CorePatch_Ammo\models\M136_inflight";};
	class R_SMAW_HEDP:RocketBase	{model = "\CorePatch\CorePatch_Ammo\models\SMAW_inflight";};
	class R_SMAW_HEAA:R_SMAW_HEDP	{};
	class R_MEEWS_HEAT:R_SMAW_HEAA	{model = "\CorePatch\CorePatch_Ammo\models\M136_inflight";};
	class R_MEEWS_HEDP:R_SMAW_HEDP	{model = "\CorePatch\CorePatch_Ammo\models\M136_inflight";};

	class R_M136_AT:RocketBase	{model = "\CorePatch\CorePatch_Ammo\models\M136_inflight";};
	class R_RPG18_AT:RocketBase	{model = "\CorePatch\CorePatch_Ammo\models\PG9_inflight";};
	class R_PG7V_AT:RocketBase	{model = "\CorePatch\CorePatch_Ammo\models\PG7V_inflight";};
	class R_PG7VL_AT:R_PG7V_AT	{model = "\CorePatch\CorePatch_Ammo\models\PG7VL_inflight";};
	class R_PG7VR_AT:R_PG7V_AT	{model = "\CorePatch\CorePatch_Ammo\models\PG7VR_inflight";};
	class R_OG7_AT:R_PG7V_AT	{model = "\CorePatch\CorePatch_Ammo\models\OG7V_inflight";};
	class R_PG9_AT:RocketBase	{model = "\CorePatch\CorePatch_Ammo\models\PG9_inflight";};
	class R_OG9_HE:R_PG9_AT		{model = "\CorePatch\CorePatch_Ammo\models\OG9_inflight";};
	class R_GRAD:RocketBase		{model = "\CorePatch\CorePatch_Ammo\models\Grad_inflight";};
	class R_MLRS:RocketBase		{model = "\CorePatch\CorePatch_Ammo\models\Grad_inflight";};

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
};
class CfgMagazines {
	class CA_LauncherMagazine;
	class RPG18:CA_LauncherMagazine {
		picture = "\ca\weapons\data\equip\m_pg9_ca.paa";
	};
};
