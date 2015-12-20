class CfgPatches
{
	class CorePatch_CIT_28047
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
	class B_23mm_APHE: BulletBase
	{
		hit = 95;
		indirectHit = 20;
		indirectHitRange = 0.4;
	};
	class B_30mm_HE: BulletBase
	{
		hit = 150;
		indirectHit = 34;
		indirectHitRange = 2;
	};
};