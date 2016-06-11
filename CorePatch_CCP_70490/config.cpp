class CfgPatches
{
	class CorePatch_CCP_70490
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class R_Hydra_HE;
	class M_CRV7_HEPD: R_Hydra_HE
	{
		indirectHit = 100;
		indirectHitRange = 10;
	};
	class M_CRV7_FAT: M_CRV7_HEPD
	{
		indirectHit = 20;
		indirectHitRange = 2;
	};
};
