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
		class Turrets
		{
			class MainTurret;
		};
	};
	class Wheeled_APC : Car
	{
	};
	class BRDM2_Base : Wheeled_APC
	{
	};
	class BRDM2_HQ_Base : BRDM2_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerName = "$STR_POSITION_COMMANDER";
			};
		};
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
	class LAV25_Base : Wheeled_APC
	{
	};
	class LAV25_HQ : LAV25_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerName = "$STR_POSITION_COMMANDER";
			};
		};
	};
	class Tank : LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
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