class CfgPatches
{
	class CorePatch_CIT_5342
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class AK_107_BASE;
	class AK_107_kobra : AK_107_BASE
	{
		model = "\CorePatch\CorePatch_CIT_5342\AK107_kobra";
	};
};