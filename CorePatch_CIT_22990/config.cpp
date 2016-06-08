class CfgPatches
{
	class CorePatch_CIT_22990
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class Default;
	class TimeBomb : Default
	{
		delete sound;
	};
	class Mine : TimeBomb
	{
		delete sound;
	};
	class Put;
	class BAF_ied_v1 : Put
	{
		delete sound;
	};
	class PipeBomb : Put
	{
		delete sound;
	};
};
