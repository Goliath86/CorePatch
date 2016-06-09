class CfgPatches
{
	class CorePatch_CIT_24913
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
	class Plane : Air
	{
		delete irScanRangeMax;
		delete irScanRangeMin;
	};
	class A10 : Plane
	{
		irScanRangeMax = 8000;
		irScanRangeMin = 3000;
	};
	class AV8B2 : Plane
	{
		irScanRangeMax = 8000;
		irScanRangeMin = 3000;
	};
	class An2_Base_EP1 : Plane
	{
		delete irScanRangeMin;
		delete irScanToEyeFactor;
	};
	class C130J : Plane
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 3000;
		irScanRangeMin = 1500;
	};
	class F35_base : Plane
	{
		delete irScanRangeMax;
	};
	class L39_base : Plane
	{
		delete irScanToEyeFactor;

		irScanRangeMin = 1500;
	};
	class MV22 : Plane
	{
		irScanRangeMin = 1000;
	};
	class Su25_base : Plane
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 8000;
		irScanRangeMin = 3000;
	};
	class Su34 : Plane
	{
		irScanRangeMin = 3500;
	};
	class Helicopter;
	class AH1_Base : Helicopter
	{
		irScanRangeMax = 6500;
		irScanRangeMin = 2500;
	};
	class AH64_base_EP1 : Helicopter
	{
		irScanRangeMax = 6500;
		irScanRangeMin = 2500;
	};
	class AW159_Lynx_BAF : Helicopter
	{
		irScanRangeMax = 3000;
		irScanRangeMin = 1500;
	};
	class BAF_Merlin_HC3_D : Helicopter
	{
		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class CH47_base_EP1 : Helicopter
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class Ka60_Base_PMC : Helicopter
	{
		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class Ka137_Base_PMC : Helicopter
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class Kamov_Base : Helicopter
	{
		irScanRangeMin = 3500;
		irScanToEyeFactor = 3;
	};
	class Mi17_base : Helicopter
	{
		delete irScanToEyeFactor;

		irScanRangeMin = 1000;
	};
	class Mi24_Base : Helicopter
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 5000;
		irScanRangeMin = 2000;
	};
	class UH1_Base : Helicopter
	{
		irScanRangeMax = 3000;
		irScanRangeMin = 1500;
	};
	class UH1H_base : Helicopter
	{
		delete irScanRangeMin;
		delete irScanToEyeFactor;
	};
	class UH60_Base : Helicopter
	{
		delete irScanToEyeFactor;

		irScanRangeMin = 1000;
	};
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		delete irScanToEyeFactor;
	};
	class UAV;
	class Chukar : UAV
	{
		irScanRangeMax = 1000;
	};
	class MQ9PredatorB : UAV
	{
		irScanRangeMax = 3000;
		irScanRangeMin = 1500;
	};
	class Pchela1T : UAV
	{
		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class AH6_Base_EP1;
	class AH6X_EP1 : AH6_Base_EP1
	{
		irScanRangeMin = 1000;
	};
};
