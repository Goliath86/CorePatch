class CfgPatches
{
	class CorePatch_CCP_67705
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle : Land
	{
		class NewTurret;
	};
	class Car : LandVehicle
	{
		class Turrets;
	};
	class Wheeled_APC : Car
	{
	};
	class BTR90_Base : Wheeled_APC
	{
	};
	class BTR90_HQ : BTR90_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				delete commanding;

				gunnerName = "$STR_POSITION_COMMANDER";
			};
		};
	};
	class Tank : LandVehicle
	{
		class Turrets;
	};
	class Tracked_APC : Tank
	{
	};
	class BMP2_Base : Tracked_APC
	{
	};
	class BMP2_HQ_Base : BMP2_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				delete commanding;

				gunnerName = "$STR_POSITION_COMMANDER";
			};
		};
	};
};
