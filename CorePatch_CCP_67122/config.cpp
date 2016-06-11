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
	class HMMWV_Base : Car
	{
	};
	class HMMWV_Avenger : HMMWV_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				viewGunnerInExternal = 0;
			};
		};
	};
	class LandRover_Base : Car
	{
		class SoundEvents
		{
			class AccelerationIn;
		};
		class Sounds
		{
			class EngineHighIn;
			class EngineLowIn;
			class IdleIn;
			class NoiseIn;
			class TiresAsphaltIn;
			class TiresGrassIn;
			class TiresGravelIn;
			class TiresMudIn;
			class TiresRockIn;
			class TiresSandIn;
		};
	};
	class LandRover_MG_Base_EP1 : LandRover_Base
	{
		soundEngineOffInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",
			1,
			1
		};
		soundEngineOnInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",
			1,
			1
		};

		class SoundEvents : SoundEvents
		{
			class AccelerationIn : AccelerationIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",
					0.56234133,
					1
				};
			};
		};
		class Sounds : Sounds
		{
			class EngineHighIn : EngineHighIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",
					1.4125376,
					0.60000002
				};
			};
			class EngineLowIn : EngineLowIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",
					1.4125376,
					0.60000002
				};
			};
			class IdleIn : IdleIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",
					0.79432821,
					1
				};
			};
			class NoiseIn : NoiseIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",
					0.31622776,
					1
				};
			};
			class TiresAsphaltIn : TiresAsphaltIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1
				};
			};
			class TiresGrassIn : TiresGrassIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1
				};
			};
			class TiresGravelIn : TiresGravelIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1
				};
			};
			class TiresMudIn : TiresMudIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1
				};
			};
			class TiresRockIn : TiresRockIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1
				};
			};
			class TiresSandIn : TiresSandIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1
				};
			};
		};
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
		soundEngineOffInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",
			1,
			1
		};
		soundEngineOnInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",
			1,
			1
		};

		class SoundEvents : SoundEvents
		{
			class AccelerationIn : AccelerationIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",
					0.56234133,
					1
				};
			};
		};
		class Sounds : Sounds
		{
			class EngineHighIn : EngineHighIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",
					1.4125376,
					0.60000002
				};
			};
			class EngineLowIn : EngineLowIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",
					1.4125376,
					0.60000002
				};
			};
			class IdleIn : IdleIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",
					0.79432821,
					1
				};
			};
			class NoiseIn : NoiseIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",
					0.31622776,
					1
				};
			};
			class TiresAsphaltIn : TiresAsphaltIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1
				};
			};
			class TiresGrassIn : TiresGrassIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1
				};
			};
			class TiresGravelIn : TiresGravelIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1
				};
			};
			class TiresMudIn : TiresMudIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1
				};
			};
			class TiresRockIn : TiresRockIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1
				};
			};
			class TiresSandIn : TiresSandIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1
				};
			};
		};
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
		soundEngineOffInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",
			1,
			1
		};
		soundEngineOnInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",
			1,
			1
		};

		class SoundEvents : SoundEvents
		{
			class AccelerationIn : AccelerationIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",
					0.56234133,
					1
				};
			};
		};
		class Sounds : Sounds
		{
			class EngineHighIn : EngineHighIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",
					1.4125376,
					0.60000002
				};
			};
			class EngineLowIn : EngineLowIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",
					1.4125376,
					0.60000002
				};
			};
			class IdleIn : IdleIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",
					0.79432821,
					1
				};
			};
			class NoiseIn : NoiseIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",
					0.31622776,
					1
				};
			};
			class TiresAsphaltIn : TiresAsphaltIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1
				};
			};
			class TiresGrassIn : TiresGrassIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1
				};
			};
			class TiresGravelIn : TiresGravelIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1
				};
			};
			class TiresMudIn : TiresMudIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1
				};
			};
			class TiresRockIn : TiresRockIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1
				};
			};
			class TiresSandIn : TiresSandIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1
				};
			};
		};
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
	class UAZ_Base : Car
	{
	};
	class UAZ_AGS30_Base : UAZ_Base
	{
		soundEngineOffInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",
			0.17782794,
			1
		};
		soundEngineOnInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",
			0.17782794,
			1
		};
	};
	class UAZ_MG_Base : UAZ_Base
	{
		soundEngineOffInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",
			0.17782794,
			1
		};
		soundEngineOnInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",
			0.17782794,
			1
		};
	};
	class UAZ_SPG9_Base : UAZ_Base
	{
		soundEngineOffInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",
			0.17782794,
			1
		};
		soundEngineOnInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",
			0.17782794,
			1
		};
	};
};
