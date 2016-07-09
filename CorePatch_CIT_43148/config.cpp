class CfgPatches
{
	class CorePatch_CIT_43148
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class MissileBase;
	class M_Bolide_AA : MissileBase
	{
		cmImmunity = 0.80000001;
		weaponLockSystem = "4 + 16";
	};
};
