class CfgPatches
{
	class CorePatch_CIT_23451
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		accuracy = 0.12;
	};
	class StaticAAWeapon : StaticWeapon
	{
		delete accuracy;
	};
	class StaticATWeapon : StaticWeapon
	{
		delete accuracy;
	};
	class StaticCannon : StaticWeapon
	{
		delete accuracy;
	};
	class StaticGrenadeLauncher : StaticWeapon
	{
		delete accuracy;
	};
	class StaticMGWeapon : StaticWeapon
	{
		delete accuracy;
	};
	class StaticMortar : StaticWeapon
	{
		delete accuracy;
	};
	class StaticSEARCHLight : StaticWeapon
	{
		delete accuracy;
	};
};