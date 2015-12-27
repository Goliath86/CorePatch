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
class Mode_SemiAuto;
class Mode_FullAuto : Mode_SemiAuto
{
};
class CfgWeapons
{
	class Pistol;
	class M9 : Pistol
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
