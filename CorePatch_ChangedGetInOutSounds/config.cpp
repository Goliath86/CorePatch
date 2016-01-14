class CfgPatches
{
	class CorePatch_ChangedGetInOutSounds
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class AH1_Base;
	class AH1Z : AH1_Base
	{
		soundGetIn[] = {
			"ca\sounds\air\noises\heli_door_01",
			0.31622776,
			1,
			50
		};
	};
	class AH64_base_EP1;
	class AH64D : AH64_base_EP1
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\AH64\close",
			0.31622776,
			1,
			40
		};
	};
	class AH64D_EP1 : AH64_base_EP1
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\AH64\close",
			0.31622776,
			1,
			40
		};
	};
	class CH_47F_EP1;
	class CH_47F_BAF : CH_47F_EP1
	{
		soundGetIn[] = {
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1,
			40
		};
	};
	class F35_base;
	class F35B : F35_base
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class Kamov_Base;
	class Ka52 : Kamov_Base
	{
		soundGetIn[] = {
			"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",
			1,
			1,
			50
		};
	};
	class UH60_Base;
	class MH60S : UH60_Base
	{
		soundGetIn[] = {
			"\ca\Sounds\Air\Noises\heli_door_01",
			0.31622776,
			1,
			30
		};
	};
	class UH60M_base_EP1 : UH60_Base
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\UH1H\open_close",
			0.31622776,
			1,
			40
		};
	};
	class Car;
	class ATV_Base_EP1 : Car
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_gearshift",
			0.56234133,
			1,
			20
		};
	};
	class ArmoredSUV_Base_PMC : Car
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			20
		};
	};
	class BAF_Jackal2_BASE_D : Car
	{
		soundGetIn[] = {
			"\Ca\sounds_baf\wheeled\jackal_door",
			1,
			1,
			30
		};
	};
	class HMMWV_Base : Car
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",
			0.56234133,
			1,
			20
		};
	};
	class HMMWV_M998A2_SOV_DES_EP1 : HMMWV_Base
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",
			0.56234133,
			1,
			20
		};
	};
	class Ikarus : Car
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-getout-1",
			1,
			1,
			40
		};
	};
	class Lada_base : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\lada\lada_door",
			1,
			1,
			30
		};
	};
	class LandRover_Base : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door",
			1,
			1,
			30
		};
	};
	class Offroad_DSHKM_base : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.25118864,
			1,
			30
		};
	};
	class Pickup_PK_base : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.25118864,
			1,
			30
		};
	};
	class S1203_TK_CIV_EP1 : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\lada\lada_door",
			1,
			1,
			30
		};
	};
	class SUV_Base_EP1 : Car
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			20
		};
	};
	class SkodaBase : Car
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\Car\ext\ext-Car-getout-1",
			0.31622776,
			1,
			30
		};
	};
	class car_hatchback : SkodaBase
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1",
			0.31622776,
			1,
			30
		};
	};
	class car_sedan : SkodaBase
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1",
			0.31622776,
			1,
			30
		};
	};
	class datsun1_civil_1_open : SkodaBase
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.25118864,
			1,
			30
		};
	};
	class TowingTractor : Car
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\Tractor\ext\ext-Tractor-getout-1",
			0.1,
			1,
			30
		};
	};
	class Tractor: Car
	{
		soundGetIn[] = {
			"\Ca\sounds\Vehicles\Wheeled\URAL\ext\ext-ural-getout",
			0.1,
			1,
			30
		};
	};
	class UAZ_Base : Car
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			20
		};
	};
	class UAZ_AGS30_Base : UAZ_Base
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			20
		};
	};
	class UAZ_MG_Base : UAZ_Base
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			20
		};
	};
	class UAZ_SPG9_Base : UAZ_Base
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			20
		};
	};
	class VWGolf : Car
	{
		soundGetIn[] = {
			"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout",
			0.56234133,
			1,
			40
		};
	};
	class Volha_TK_CIV_Base_EP1 : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\lada\lada_door",
			1,
			1,
			30
		};
	};
	class hilux1_civil_1_open : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.56234133,
			1,
			30
		};
	};
	class hilux1_civil_3_open_EP1 : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.56234133,
			1,
			30
		};
	};
	class Helicopter;
	class AH6_Base_EP1 : Helicopter
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\AH6\close",
			0.31622776,
			1,
			40
		};
	};
	class AW159_Lynx_BAF : Helicopter
	{
		soundGetIn[] = {
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1,
			40
		};
	};
	class BAF_Merlin_HC3_D : Helicopter
	{
		soundGetIn[] = {
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1,
			40
		};
	};
	class CH47_base_EP1 : Helicopter
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\CH47\close",
			0.31622776,
			1,
			40
		};
	};
	class Ka60_Base_PMC : Helicopter
	{
		soundGetIn[] = {
			"Ca\Sounds_PMC\Air_PMC\Ka_door",
			0.31622776,
			1,
			40
		};
	};
	class Mi17_base : Helicopter
	{
		soundGetIn[] = {
			"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",
			1,
			1,
			50
		};
	};
	class Mi24_Base : Helicopter
	{
		soundGetIn[] = {
			"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",
			1,
			1,
			40
		};
	};
	class UH1_Base : Helicopter
	{
		soundGetIn[] = {
			"\ca\Sounds\Air\Noises\heli_door_01",
			0.31622776,
			1,
			40
		};
	};
	class UH1H_base : Helicopter
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\UH1H\open_close",
			0.31622776,
			1,
			40
		};
	};
	class Plane;
	class A10 : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class AV8B2 : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			30
		};
	};
	class An2_Base_EP1 : Plane
	{
		soundGetIn[] = {
			"ca\sounds_E\Air_E\AN2\close",
			0.31622776,
			1,
			40
		};
	};
	class C130J : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\C130\close",
			0.31622776,
			1,
			40
		};
	};
	class L39_base : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class MV22 : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\MV22\close",
			0.31622776,
			1,
			40
		};
	};
	class Su25_base : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class Su34 : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			20
		};
	};
	class Tank;
	class 2S6M_Tunguska : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};
	};
	class BAF_FV510_D : Tank
	{
		soundGetIn[] = {
			"Ca\sounds_baf\tracked\ext_door",
			0.56234133,
			1,
			50
		};
	};
	class M1A1 : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1",
			0.56234133,
			1,
			50
		};
	};
	class M2A2_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			50
		};
	};
	class M113_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};
	};
	class MLRS : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};
	};
	class T34 : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};
	};
	class T55_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};
	};
	class T72_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};
	};
	class T90 : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1",
			0.56234133,
			1,
			60
		};
	};
	class ZSU_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			50
		};
	};
	class Tracked_APC;
	class AAV : Tracked_APC
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};
	};
	class BMP2_Base : Tracked_APC
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};
	};
	class BMP3 : Tracked_APC
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};
	};
	class Truck;
	class Kamaz_Base : Truck
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\Kamaz\int\int-Kamaz-getout-1",
			0.31622776,
			1,
			50
		};
	};
	class MAZ_543_SCUD_Base_EP1 : Truck
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\stryker\stryker_door",
			1,
			1,
			30
		};
	};
	class MTVR : Truck
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin",
			0.70794576,
			1,
			50
		};
	};
	class Ural_Base_withTurret : Truck
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout",
			1,
			1,
			30
		};
	};
	class V3S_Base : Truck
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1",
			0.44668359,
			1,
			40
		};
	};
	class Wheeled_APC;
	class BRDM2_Base : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			40
		};
	};
	class BTR60_TK_EP1 : BRDM2_Base
	{
		soundGetOut[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",
			1,
			1,
			40
		};
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			40
		};
	};
	class BTR40_MG_base_EP1 : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",
			1,
			1,
			30
		};
	};
	class BTR90_Base : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			30
		};
	};
	class GAZ_Vodnik_HMG : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			30
		};
	};
	class LAV25_Base : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			50
		};
	};
	class StrykerBase_EP1 : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\stryker\stryker_door",
			1,
			1,
			30
		};
	};
};
