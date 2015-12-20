class CfgPatches
{
	class CorePatch_CIT_71737
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
	class B_86x70_Ball_noTracer : BulletBase
	{
		delete indirectHit;
		delete indirectHitRange;

		hit = 17;
	};
};