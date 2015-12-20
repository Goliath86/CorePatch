class CfgPatches
{
	class CorePatch_CIT_25048
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class CannonCore;
	class GAU8 : CannonCore
	{
		class manual;
		class close : manual
		{
			maxRangeProbab = 0.039999999;
			midRangeProbab = 0.57999998;
			minRangeProbab = 0.050000001;
		};
		class short : close
		{
			delete maxRangeProbab;
			delete midRangeProbab;
			delete minRangeProbab;
		};
		class medium : close
		{
			delete maxRangeProbab;
			delete midRangeProbab;
			delete minRangeProbab;
		};
		class far : close
		{
			delete minRangeProbab;

			maxRangeProbab = 0.0099999998;
			midRangeProbab = 0.40000001;
		};
	};
	class GAU12 : CannonCore
	{
		class manual;
		class close : manual
		{
			maxRangeProbab = 0.039999999;
		};
		class short : close
		{
			delete maxRangeProbab;
			delete midRangeProbab;
			delete minRangeProbab;
		};
		class medium : close
		{
			delete maxRangeProbab;
			delete midRangeProbab;
			delete minRangeProbab;
		};
		class far : close
		{
			delete minRangeProbab;
		};
	};
	class M230 : CannonCore
	{
		class manual;
		class close : manual
		{
			maxRangeProbab = 0.039999999;
			midRangeProbab = 0.57999998;
			minRangeProbab = 0.050000001;
		};
		class short : close
		{
			delete maxRangeProbab;
			delete midRangeProbab;
			delete minRangeProbab;
		};
		class medium : close
		{
			delete maxRangeProbab;
			delete midRangeProbab;
			delete minRangeProbab;
		};
		class far : close
		{
			delete minRangeProbab;

			maxRangeProbab = 0.0099999998;
			midRangeProbab = 0.40000001;
		};
	};
};