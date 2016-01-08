class CfgPatches
{
	class CorePatch_ChangedGetInOutActions
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles : All
	{
		class NewTurret;
	};
	class Air : AllVehicles
	{
	};
	class Helicopter : Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class AW159_Lynx_BAF : Helicopter
	{
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
			};
		};
	};
	class BAF_Merlin_HC3_D : Helicopter
	{
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
	};
	class Plane : Air
	{
	};
	class Su34 : Plane
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
			};
		};
	};
	class Land : AllVehicles
	{
	};
	class LandVehicle : Land
	{
	};
	class Car : LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Truck : Car
	{
	};
	class Ural_Base_withTurret : Truck
	{
	};
	class GRAD_Base : Ural_Base_withTurret
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
			};
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
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
			};
		};
	};
	class BTR90_Base : Wheeled_APC
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets
				{
					class CommanderOptics : NewTurret
					{
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
					};
				};
			};
		};
	};
	class BTR90_HQ : BTR90_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
			};
		};
	};
	class GAZ_Vodnik_HMG : Wheeled_APC
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
			};
		};
	};
	class LAV25_Base : Wheeled_APC
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets
				{
					class CommanderOptics : NewTurret
					{
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
					};
				};
			};
		};
	};
	class LAV25_HQ : LAV25_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
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
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
			};
		};
	};
};