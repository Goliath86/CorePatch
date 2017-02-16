class CfgPatches
{
	class CorePatch_CIT_5343
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class Rifle;
	class PK : Rifle
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\PK.p3d";
	};
	class bizon : Rifle
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\bizon.p3d";
	};
	class bizon_silenced : bizon
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\bizon_silenced.p3d";
	};
	class AK_BASE;
	class AK_47_M : AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AK_47_M.p3d";
	};
	class AK_47_S : AK_47_M
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AK_47_S.p3d";
	};
	class AKS_GOLD : AK_47_S
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AKS_GOLD.p3d";
	};
	class AK_74 : AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AK_74.p3d";
	};
	class AK_74_GL : AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AK_74_GL.p3d";
	};
	class AKS_BASE;
	class AKS_74 : AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AKS_74.p3d";
	};
	class AKS_74_NSPU : AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AKS_74_NSPU.p3d";
	};
	class AKS_74_U : AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_5343\models\AKS_74_U.p3d";
	};
};
