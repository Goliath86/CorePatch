class CfgPatches
{
	class CorePatch_CIT_11850
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
	class M_AT2_AT: MissileBase
	{
		initTime = 0.1;
		maneuvrability = 6;
		thrustTime = 3.5;
		timeToLive = 17;
		trackLead = 0.75;
		trackOversteer = 0.75;
	};
};
