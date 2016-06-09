class CfgPatches
{
	class CorePatch_TweakedHitsOfAmmo
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
	class B_30mmA10_AP : BulletBase
	{
		hit = 105;
		indirectHit = 18;
	};
	class B_30mm_AP : BulletBase
	{
		hit = 90;
	};
	class B_25mm_HE;
	class B_25mm_APDS : BulletBase
	{
		hit = 80;
	};
};
