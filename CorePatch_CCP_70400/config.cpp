class CfgPatches
{
	class CorePatch_CCP_70400
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
	class B_145x115_AP: BulletBase
	{
		caliber = 2.33;
		hit = 34;
	};
};
