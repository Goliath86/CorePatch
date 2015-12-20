class CfgPatches
{
	class CorePatch_CIT_25488
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
	class B_9x39_SP5: BulletBase
	{
		typicalSpeed = 300;
	};
};