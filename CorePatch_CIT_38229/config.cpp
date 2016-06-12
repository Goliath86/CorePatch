class CfgPatches
{
	class CorePatch_CIT_38229
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
	class BAF_Jackal2_L2A1_D : BAF_Jackal2_BASE_D
	{
		class Turrets : Turrets
		{
			class M2_Turret : MainTurret
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
				delete turretInfoType;
			};
		};
	};
};
