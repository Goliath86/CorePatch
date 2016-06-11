class CfgPatches
{
	class CorePatch_ChangedM32ShotSound
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class MGun;
	class M32_heli : MGun
	{
		sound[] = {
			"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_1",
			1,
			1,
			200
		};
	};
};
