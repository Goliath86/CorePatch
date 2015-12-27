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
		class medium;
		class far;
	};
	class TwinM134: M134
	{
		class LowROF: LowROF
		{
			delete dispersion;
		};
		class medium: medium
		{
			delete dispersion;
		};
		class far: far
		{
			delete dispersion;
		};
	};
};
