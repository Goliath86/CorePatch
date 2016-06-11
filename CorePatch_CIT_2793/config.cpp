class CfgPatches
{
	class CorePatch_CIT_2793
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class AllVehicles;
	class Ship: AllVehicles
	{
		class Turrets;
	};
	class Boat: Ship
	{
	};
	class RHIB: Boat
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class RHIB2Turret: RHIB
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.0099999998;
				};
			};
		};
	};
};
