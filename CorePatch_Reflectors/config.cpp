class CfgPatches
{
	class CorePatch_Reflectors
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air : AllVehicles
	{
	};
	class Helicopter : Air
	{
	};
	class Mi17_base: Helicopter
	{
		aggregateReflectors[] = {{"1", "1"}};
	};
	class Land : AllVehicles
	{
	};
	class LandVehicle : Land
	{
	};
	class Car : LandVehicle
	{
	};
	class Wheeled_APC : Car
	{
	};
	class BRDM2_Base : Wheeled_APC
	{
		model = "\CorePatch\CorePatch_Reflectors\BRDM2";
	};
	class BRDM2_ATGM_Base : BRDM2_Base
	{
		model = "\CorePatch\CorePatch_Reflectors\BRDM2_ATGM";
	};
	class BRDM2_HQ_Base : BRDM2_Base
	{
		model = "\CorePatch\CorePatch_Reflectors\BRDM2_HQ";
		transportSoldier = 2;
	};
	class BTR60_TK_EP1 : BRDM2_Base
	{
		model = "\CorePatch\CorePatch_Reflectors\BTR60";

		class Reflectors
		{
			class Left
			{
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
			};
			class commander_light : Left
			{
				brightness = 0;
				size = 0;
			};
		};
	};
	class BTR90_Base : Wheeled_APC
	{
		model = "\CorePatch\CorePatch_Reflectors\btr90.p3d";

		class Reflectors
		{
			class Left;
			class commander_light : Left
			{
				brightness = 0;
				size = 0;
			};
		};
	};
	class BTR90_HQ : BTR90_Base
	{
		delete transportSoldier;

		model = "\CorePatch\CorePatch_Reflectors\btr90_HQ.p3d";
		typicalCargo[] = {
			"RU_Soldier_Crew",
			"RU_Soldier_Crew",
			"RU_Soldier",
			"RU_Soldier",
			"RU_Soldier_MG",
			"RU_Soldier_AT"
		};
	};
	class Tank : LandVehicle
	{
	};
	class 2S6M_Tunguska : Tank
	{
		model = "\CorePatch\CorePatch_Reflectors\2S6M_Tunguska";

		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			class commander_light : LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 0.1};
				brightness = 0;
				direction = "konec commander light";
				hitpoint = "commander light";
				position = "commander light";
				selection = "commander light";
				size = 0;
			};
			class RightLight : LeftLight
			{
				color[] = {0.89999998, 0.80000001, 0.80000001, 0.1};
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
		};
	};
	class T55_Base : Tank
	{
		model = "\CorePatch\CorePatch_Reflectors\T55";

		class Reflectors
		{
			class LeftLight
			{
				// ambient[] = {0.1, 0.1, 0.1, 1};
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
			};
			class CommanderLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
			class RightLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
		};
	};
	class T72_Base : Tank
	{
		aggregateReflectors[] = {{"1", "1"}};

		class Reflectors
		{
			class LeftLight
			{
				brightness = 0.4;
			};
		};
	};
	class T90 : Tank
	{
		aggregateReflectors[] = {{"1", "1"}};
		model = "\CorePatch\CorePatch_Reflectors\T90";

		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			class GunnerLight : LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 0.1};
				direction = "konec gunner light";
				hitpoint = "gunner light";
				position = "gunner light";
				selection = "gunner light";
			};
			class RightLight : LeftLight
			{
				color[] = {0.89999998, 0.80000001, 0.80000001, 0.1};
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
		};
	};
	class Tracked_APC : Tank
	{
	};
	class BMP2_Base : Tracked_APC
	{
		aggregateReflectors[] = {{"1", "1"}};
		model = "\CorePatch\CorePatch_Reflectors\BMP2";

		class Reflectors
		{
			class LeftLight
			{
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				size = 0.5;
			};
			/* class CommanderLight : LeftLight
			{
				direction = "konec commander light";
				hitpoint = "commander light";
				position = "commander light";
				selection = "commander light";
			}; */
		};
	};
	class BMP2_Ambul_Base : BMP2_Base
	{
		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.07, 0.07, 0.07, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			class RightLight : LeftLight
			{
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
		};
	};
	class BMP2_HQ_Base : BMP2_Base
	{
		model = "\CorePatch\CorePatch_Reflectors\BMP2_HQ";
		transportSoldier = 6;

		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.07, 0.07, 0.07, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			class RightLight : LeftLight
			{
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
		};
	};
	class BMP3 : Tracked_APC
	{
		aggregateReflectors[] = {{"1", "1"}}; // {{"CommanderLight"}, {"GunnerLight"}, {"1", "1"}};

		class Reflectors
		{
			class LeftLight
			{
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				size = 0.5;
			};
			class CommanderLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
			class GunnerLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
		};
	};
};