class CfgPatches
{
	class CorePatch_CIT_24772
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class RocketBase;
	class R_Hydra_HE : RocketBase
	{
		delete timeToLive;
	};
	class M_CRV7_HEPD : R_Hydra_HE
	{
		delete audibleFire;
		delete deflecting;
		delete maneuvrability;
		delete maxControlRange;
		delete timeToLive;
		delete visibleFire;
		delete visibleFireTime;
	};
};
