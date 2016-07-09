class CfgPatches
{
	class CorePatch_CIT_16115
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class CfgWeapons
{
	class Pistol;
	class M9 : Pistol
	{
		dispersion = 0.004;
	};
	class CZ_75_D_COMPACT : M9
	{
		dispersion = 0.004;
	};
	class CZ_75_SP_01_PHANTOM : M9
	{
		dispersion = 0.004;
	};
	class M9SD : M9
	{
	};
	class CZ_75_SP_01_PHANTOM_SD : M9SD
	{
		dispersion = 0.004;
	};
	class Makarov : Pistol
	{
		dispersion = 0.004;
	};
	class Sa61_EP1 : Pistol
	{
		class FullAuto : Mode_FullAuto
		{
			dispersion = 0.0038;
		};
		class Single : Mode_SemiAuto
		{
			dispersion = 0.0038;
		};
	};
	class UZI_EP1 : Pistol
	{
		class FullAuto : Mode_FullAuto
		{
			dispersion = 0.0036;
		};
		class Single : Mode_SemiAuto
		{
			dispersion = 0.0036;
		};
	};
	class glock17_EP1 : Pistol
	{
		dispersion = 0.004;
	};
	class revolver_EP1 : Pistol
	{
		dispersion = 0.004;
	};
};
