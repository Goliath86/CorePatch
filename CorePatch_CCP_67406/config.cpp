class CfgPatches
{
	class CorePatch_CCP_67406
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
	class Sh_40_HE : BulletBase
	{
		airLock = 1;
	};
	class Sh_40_SABOT : Sh_40_HE
	{
		airLock = 0;
	};
};
