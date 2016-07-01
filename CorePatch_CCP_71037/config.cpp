class CfgPatches
{
	class CorePatch_CCP_71037
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class AT5Launcher;
	class 2A46MRocket : AT5Launcher
	{
		magazineReloadTime = 1.5;
		reloadSound[] = {
			"\ca\Sounds\weapons\cannon\gun125reload",
			1,
			1,
			20
		};
		reloadTime = 5;
	};
	class 2A70Rocket : 2A46MRocket
	{
		magazineReloadTime = 2;
		reloadTime = 6;
	};
};
