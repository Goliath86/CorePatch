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
	class B_762x51_Ball : BulletBase
	{
	};
	class B_762x51_noTracer : B_762x51_Ball
	{
		airLock = 0;
	};
	class B_86x70_Ball_noTracer : BulletBase
	{
		delete airLock;
	};
	class B_127x99_Ball : BulletBase
	{
	};
	class B_127x99_Ball_noTracer : B_127x99_Ball
	{
		airLock = 0;
	};
	class B_127x108_Ball : BulletBase
	{
		airLock = 0;
	};
	class B_25mm_APDS : BulletBase
	{
		delete airLock;
	};
	class Sh_40_HE : BulletBase
	{
		airLock = 1;
	};
};