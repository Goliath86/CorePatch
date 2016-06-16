class CfgPatches
{
	class CorePatch_CIT_23501
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
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
		};
	};
	class ArmoredSUV_Base_PMC : Car
	{
		class HitPoints : HitPoints
		{
			class HitLFWheel : HitLFWheel
			{
				armor = 0.15000001;
			};
			class HitLBWheel : HitLBWheel
			{
				armor = 0.15000001;
			};
			class HitRFWheel : HitRFWheel
			{
				armor = 0.15000001;
			};
			class HitRBWheel : HitRBWheel
			{
				armor = 0.15000001;
			};
		};
	};
};
