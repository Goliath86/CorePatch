class CfgPatches
{
	class CorePatch_CIT_71270
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto : Mode_SemiAuto
{
};
class CfgWeapons
{
	class Rifle;
	class BAF_AS50_scoped : Rifle
	{
		class Full : Mode_FullAuto
		{
			begin1[] = {
				"ca\sounds\weapons\rifles\m107",
				2.5118864,
				1,
				1300
			};
		};
		class Single : Mode_SemiAuto
		{
			begin1[] = {
				"ca\sounds\weapons\rifles\m107",
				2.5118864,
				1,
				1300
			};
		};
	};
};