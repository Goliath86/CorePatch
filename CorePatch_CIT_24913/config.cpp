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
		irScanRangeMax = 5000;
		irScanRangeMin = 2000;
	};
	class AV8B2 : Plane
	{
		irScanRangeMax = 5000;
		irScanRangeMin = 2000;
	};
	class An2_Base_EP1 : Plane
	{
		delete irScanToEyeFactor;

		irScanRangeMin = 500;
	};
	class C130J : Plane
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 5000;
		irScanRangeMin = 2000;
	};
	class F35_base : Plane
	{
		delete irScanRangeMax;
		delete irScanToEyeFactor;

		irScanRangeMin = 2000;
	};
	class F35B : F35_base
	{
		irScanRangeMin = 2000;
		irScanToEyeFactor = 2;
	};
	class L39_base : Plane
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class MV22 : Plane
	{
		irScanRangeMin = 1000;
	};
	class Su25_base : Plane
	{
		delete irScanToEyeFactor;

		irScanRangeMin = 2000;
	};
	class Su34 : Plane
	{
		irScanRangeMin = 2000;
		irScanToEyeFactor = 2;
	};
	class Helicopter;
	class AH1_Base : Helicopter
	{
		irScanRangeMax = 5000;
		irScanRangeMin = 2000;
	};
	class AW159_Lynx_BAF : Helicopter
	{
		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
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

		irScanRangeMin = 500;
	};
	class Kamov_Base : Helicopter
	{
		irScanRangeMin = 2000;
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
		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class UH1H_base : Helicopter
	{
		delete irScanToEyeFactor;

		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
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
	class AH6_Base_EP1;
	class AH6X_EP1 : AH6_Base_EP1
	{
		irScanRangeMax = 1000;
	};
	class UAV;
	class Chukar : UAV
	{
		irScanRangeMax = 1000;
		irScanRangeMin = 500;
	};
	class MQ9PredatorB : UAV
	{
		irScanRangeMax = 2000;
		irScanRangeMin = 1000;
	};
	class Pchela1T : UAV
	{
		irScanRangeMax = 1000;
		irScanRangeMin = 500;
	};
};
