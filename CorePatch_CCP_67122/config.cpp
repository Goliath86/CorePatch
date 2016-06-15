class CfgPatches
{
	class CorePatch_CCP_67122
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
		class Turrets
		{
			class MainTurret;
		};
	};
	class LandRover_Base : Car
	{
	};
	class LandRover_MG_Base_EP1 : LandRover_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				viewGunnerInExternal = 1;
			};
		};
	};
	class LandRover_SPG9_Base_EP1 : LandRover_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				viewGunnerInExternal = 1;
			};
		};
	};
	class LandRover_Special_CZ_EP1 : LandRover_Base
	{
		class Turrets : Turrets
		{
			class AGS30_Turret : MainTurret
			{
				viewGunnerInExternal = 1;
			};
			class PK_Turret : MainTurret
			{
				viewGunnerInExternal = 1;
			};
		};
	};
	class Truck : Car
	{
	};
	class Ural_Base_withTurret : Truck
	{
	};
	class Ural_ZU23_Base : Ural_Base_withTurret
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				viewGunnerInExternal = 1;
			};
		};
	};
};
