class CfgPatches
{
	class CorePatch_CIT_22999
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 64Rnd_9x19_SD_Bizon : CA_Magazine
	{
		delete cartridge;
	};
};