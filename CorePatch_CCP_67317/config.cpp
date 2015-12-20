class CfgPatches
{
	class CorePatch_CCP_67317
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
	};
	class AH1_Base: Helicopter
	{
	};
	class AH1Z: AH1_Base
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class AH64_base_EP1: Helicopter
	{
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class AH64D_EP1: AH64_base_EP1
	{
		delete soundIncommingMissile;
		delete soundLocked;
	};
	class BAF_Merlin_HC3_D: Helicopter
	{
		lockDetectionSystem = "4 + 8";
	};
	class CH47_base_EP1: Helicopter
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class Ka60_Base_PMC: Helicopter
	{
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class Kamov_Base: Helicopter
	{
	};
	class Ka52: Kamov_Base
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class Mi17_base: Helicopter
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class Mi17_Civilian_base_Ru: Mi17_base
	{
		lockDetectionSystem = 0;
	};
	class Mi17_base_CZ_EP1: Mi17_base
	{
	};
	class Mi171Sh_Base_EP1: Mi17_base_CZ_EP1
	{
		delete IncommingMisslieDetectionSystem;
		delete LockDetectionSystem;
	};
	class Mi171Sh_CZ_EP1: Mi171Sh_Base_EP1
	{
		delete IncommingMisslieDetectionSystem;
		delete LockDetectionSystem;
	};
	class Mi24_Base: Helicopter
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class UH1_Base: Helicopter
	{
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class UH1H_base: Helicopter
	{
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class UH60_Base: Helicopter
	{
		incommingMisslieDetectionSystem = 16;
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class UH60M_base_EP1: UH60_Base
	{
		delete incommingMisslieDetectionSystem;
		delete lockDetectionSystem;
	};
	class Plane: Air
	{
	};
	class A10: Plane
	{
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class AV8B2: Plane
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class AV8B: AV8B2
	{
		delete IncommingMisslieDetectionSystem;
		delete LockDetectionSystem;
	};
	class C130J: Plane
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class F35_base: Plane
	{
	};
	class F35B: F35_base
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class L39_base: Plane
	{
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "4 + 8";
		magazines[] = {
			"150Rnd_23mm_GSh23L",
			"64Rnd_57mm",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
		weapons[] = {
			"GSh23L_L39",
			"57mmLauncher",
			"CMFlareLauncher"
		};
	};
	class MV22: Plane
	{
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class Su25_base: Plane
	{
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
	class Su34: Plane
	{
		lockDetectionSystem = "4 + 8";
		soundIncommingMissile[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			4
		};
		soundLocked[] = {
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622776,
			2
		};
	};
};