class CfgPatches
{
	class CorePatch_CCP_68351
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
		craterEffects = "ExploAmmoCrater";
	};
	class Sh_40_SABOT : Sh_40_HE
	{
		craterEffects = "ImpactEffectsBig";
	};
};
