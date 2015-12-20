class CfgPatches
{
	class CorePatch_CIT_70648
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class MGun;
	class M134: MGun
	{
		class LowROF;
		class far;
		class medium;
	};
	class TwinM134: M134
	{
		class LowROF: LowROF
		{
			delete dispersion;
		};
		class far: far
		{
			delete dispersion;
		};
		class medium: medium
		{
			delete dispersion;
		};
	};
};