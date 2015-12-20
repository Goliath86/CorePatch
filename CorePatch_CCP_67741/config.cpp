class CfgPatches
{
	class CorePatch_CCP_67741
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Air;
	class Plane : Air
	{
		class NewTurret;
	};
	class Su34 : Plane
	{
		magazines[] = {
			"40Rnd_S8T",
			"180Rnd_30mm_GSh301",
			"120Rnd_CMFlareMagazine"
		};
		weapons[] = {
			"80mmLauncher",
			"GSh301",
			"CMFlareLauncher"
		};

		class Turrets
		{
			class MainTurret : NewTurret
			{
				magazines[] = {
					"6Rnd_Ch29",
					"4Rnd_R73",
					"40Rnd_S8T"
				};
				weapons[] = {
					"Ch29Launcher_Su34",
					"R73Launcher",
					"80mmLauncher"
				};
			};
		};
	};
};