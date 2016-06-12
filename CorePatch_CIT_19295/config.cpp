class CfgPatches
{
	class CorePatch_CIT_19295
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
	class Car : LandVehicle
	{
		class Turrets;
	};
	class BAF_Jackal2_BASE_D : Car
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class BAF_Jackal2_GMG_D : BAF_Jackal2_BASE_D
	{
		class Turrets : Turrets
		{
			class GMG_Turret : MainTurret
			{
				discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
				discreteDistanceInitIndex = 0;
			};
		};
	};
};
