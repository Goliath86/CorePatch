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
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class GAU8 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 16;
			reloadTime = 0.015385; // 3900 SPM
			sound[] = {
				"\Ca\Sounds_E\Weapons_E\Gatling\gatling_250ms",
				3.1622777,
				1,
				1100
			};
		};
	};
	class GAU12 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 16;
			reloadTime = 0.015385; // 3900 SPM
			sound[] = {
				"\Ca\Sounds_E\Weapons_E\Gatling\gatling_250ms",
				3.1622777,
				1,
				1100
			};
		};
	};
	class GSh23L : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 13;
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
			burst = 6;
		};
	};
	class GSh302 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 12;
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

			burst = 25;
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
		class LowROF : Mode_FullAuto
		{
			reloadTime = 0.03; // 2000 SPM
		};
		class HighROF : LowROF
		{
			reloadTime = 0.015; // 4000 SPM
		};
		class close;
		class far;
		class medium;
		class short;
	};
	class TwinM134 : M134
	{
		class HighROF : HighROF
		{
			delete reloadTime;
		};
		class LowROF : LowROF
		{
			delete reloadTime;
		};
		class close : close
		{
			delete reloadTime;
		};
		class far : far
		{
			delete reloadTime;
		};
		class medium : medium
		{
			delete reloadTime;
		};
		class short : short
		{
			delete reloadTime;
		};
	};
	class M32_heli : MGun
	{
		sound[] = {
			"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_1",
			1,
			1,
			200
		};
	};
};