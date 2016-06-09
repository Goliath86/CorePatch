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
	class B_23mm_APHE : BulletBase
	{
		hit = 55;
		indirectHitRange = 0.5;
	};
};
