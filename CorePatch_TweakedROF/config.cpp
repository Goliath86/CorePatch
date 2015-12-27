class CfgPatches
{
	class CorePatch_TweakedROF
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class 230Rnd_30mmHE_2A42;
	class 1904Rnd_30mmAA_2A38M : 230Rnd_30mmHE_2A42
	{
		tracersEvery = 3;
	};
};
class Mode_FullAuto;
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
		multiplier = 1;
		reloadTime = 0.013333;

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
	class GAU8 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 13; // 0.2 s
			reloadTime = 0.015385; // 3900 SPM
		};
	};
	class GAU12 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 6; // 0.1 s
			reloadTime = 0.016667; // 3600 SPM
			sound[] = {
				"\Ca\Sounds_E\Weapons_E\Gatling\gatling_250ms",
				3.1622777,
				1,
				1100
			};
		};
		class close : manual
		{
			soundBurst = 1;
		};
	};
	class GSh23L : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 11; // 0.2 s
			reloadTime = 0.01875; // 3200 SPM
			sound[] = {
				"\Ca\sounds\Weapons\cannon\A10vulcanIV",
				3.1622777,
				1,
				1200
			};
		};
	};
	class GSh301 : CannonCore // 1500 SPM
	{
		class manual : CannonCore
		{
			burst = 5; // 0.2 s
		};
	};
	class GSh302 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 10; // 0.2 s
			reloadTime = 0.02; // 3000 SPM
			sound[] = {
				"\Ca\sounds\Weapons\cannon\A10vulcanIV",
				3.1622777,
				1,
				1200
			};
		};
	};
	class M168 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 20; // 0.2 s
			reloadTime = 0.01; // 6000 SPM
			sound[] = {
				"\Ca\Sounds_E\Weapons_E\Gatling\gatling_burst_1",
				3.1622777,
				1,
				1100
			};
		};
	};
	class M197 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 5;
			reloadTime = 0.04; // 1500 SPM
			sound[] = {
				"\Ca\sounds\Weapons\cannon\M197_5shots_rotation_end",
				10,
				1,
				1200
			};
		};
	};
	class MGun;
	class M134 : MGun
	{
		class LowROF; // 2000 SPM
		class HighROF : LowROF
		{
			reloadTime = 0.045; // 4000 SPM
		};
		class close;
		class short;
		class medium;
		class far;
	};
	class TwinM134 : M134
	{
		class LowROF : LowROF // 4000 SPM
		{
			delete reloadTime;
		};
		class HighROF : HighROF // 8000 SPM
		{
			delete reloadTime;
		};
		class close : close
		{
			delete reloadTime;
		};
		class short : short
		{
			delete reloadTime;
		};
		class medium : medium
		{
			delete reloadTime;
		};
		class far : far
		{
			delete reloadTime;
		};
	};
};
