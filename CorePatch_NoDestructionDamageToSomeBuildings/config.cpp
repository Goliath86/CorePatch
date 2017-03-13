class CfgPatches {
	class CorePatch_NoDestructionDamageToSomeBuildings {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgVehicles {
	class Building;
	class NonStrategic:Building {
		class DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP { // Taken from NonStrategic
			class Sound
			{
				simulation = "sound";
				type = "DestrHouse";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.05;
			};
			class DestroyPhase1
			{
				simulation = "destroy";
				type = "DelayedDestruction";
				lifeTime = 2.5;
				position = "";
				intensity = 1;
				interval = 1;
			};
			/*class DamageAround1
			{
				simulation = "damageAround";
				type = "DamageAroundHouse";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};*/
		};
		class DestructionEffects_NonStrategic_NoDamage_CP:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP { // Taken from House
			class Smoke1
			{
				simulation = "particles";
				type = "HouseDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2: Smoke1
			{
				type = "HouseDestructionSmoke2";
			};
			class Smoke3: Smoke1
			{
				type = "HouseDestructionSmoke3";
			};
			class Smoke4: Smoke1
			{
				type = "HouseDestructionSmoke4";
			};
			class Smoke5: Smoke1
			{
				type = "HouseDestrSmokeLong";
			};
		};
	};
	class HouseBase:NonStrategic {};
	class House:HouseBase {};

	class Base_WarfareBBarrier5x:House		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};
	class Land_fort_rampart:House			{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};
	class Land_fort_artillery_nest:House		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};
	class Land_ConcreteRamp:House			{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};
	class Land_ConcreteBlock:House			{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};
	class Land_Dirthump01:House			{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};
	class Land_Dirthump02:House			{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};
	class Land_Dirthump03:House			{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};

	class Land_fort_bagfence_corner:House		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP {};};
	class Land_fort_bagfence_long:House		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP {};};
	class Land_fort_bagfence_round:House		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP {};};

	class Land_HBarrier_large:NonStrategic		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_CP {};};

	class Land_CncBlock:NonStrategic		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP {};};
	class Land_CncBlock_Stripes:NonStrategic	{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP {};};
	class Land_CncBlock_D:NonStrategic		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP {};};
	class Fort_Crate_wood:NonStrategic		{class DestructionEffects:DestructionEffects_NonStrategic_NoDamage_NoSmoke_CP {};};
};
