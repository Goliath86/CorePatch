class CfgPatches
{
	class CorePatch_CIT_25593
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 230Rnd_30mmHE_2A42 : VehicleMagazine
	{
	};
	class 1904Rnd_30mmAA_2A38M : 230Rnd_30mmHE_2A42
	{
		tracersEvery = 3;
	};
	class 1470Rnd_127x108_YakB : VehicleMagazine
	{
		tracersEvery = 4;
	};
};
class CfgWeapons
{
	class CannonCore;
	class 2A14 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 4;
			reloadTime = 0.03; // 2000 SPM
		};
	};
	class 2A38M : CannonCore
	{
		delete multiplier;
		delete reloadTime;

		class manual : CannonCore
		{
			delete multiplier;

			burst = 4;
			reloadTime = 0.013333; // 4500 SPM
		};
	};
	class AZP85 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 4;
			reloadTime = 0.017647; // 3400 SPM
		};
	};
	class MGun;
	class YakB : MGun
	{
		class manual : MGun
		{
			delete multiplier;

			burst = 7;
			reloadTime = 0.014118; // 4250 SPM
			sound[] = {
				"\Ca\sounds\Weapons\cannon\gsh301",
				3.1622777,
				1,
				1200
			};
		};
	};
};
