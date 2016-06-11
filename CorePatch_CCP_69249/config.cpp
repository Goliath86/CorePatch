class CfgPatches
{
	class CorePatch_CCP_69249
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
	class LandVehicle: Land
	{
		aggregateReflectors[] = {{"1", "1"}};

		class Reflectors
		{
			class Left
			{
				brightness = 0.3;
				color[] = {0.89999998, 0.80000001, 0.80000001, 0.5};
				size = 3.5;
			};
			class Right
			{
				brightness = 0.4;
				size = 3.5;
			};
		};
	};
};
