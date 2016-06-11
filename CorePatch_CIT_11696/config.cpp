class CfgPatches
{
	class CorePatch_CIT_11696
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class M4A3_CCO_EP1;
	class M4A3_RCO_GL_EP1: M4A3_CCO_EP1
	{
		irDistance = 100;
		model = "\CorePatch\CorePatch_CIT_11696\M4A3_RCO_GL";
	};
};
