class CfgPatches
{
	class CorePatch_CCP_67651
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {
			"BAF_L7A2_GPMG_Small",
			"BAF_L110A1_Aim_Small",
			"M60A4_EP1_Small",
			"M240_Small",
			"M249_EP1_Small",
			"M249_Small",
			"M249_TWS_EP1_Small",
			"M249_m145_EP1_Small",
			"Mk_48_DES_EP1_Small",
			"Mk_48_Small",
			"PK_Small",
			"Pecheneg_Small",
			"ksvk_Small",
			"m107_Small",
			"m107_TWS_EP1_Small",
			"m240_scoped_EP1_Small"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_CCP_67651
		{
			list[] = {"CorePatch_CCP_67651"};
		};
	};
};
class CfgWeapons
{
	class BAF_L7A2_GPMG;
	class BAF_L7A2_GPMG_Small: BAF_L7A2_GPMG
	{
		type = 1;
	};
	class BAF_L110A1_Aim;
	class BAF_L110A1_Aim_Small: BAF_L110A1_Aim
	{
		type = 1;
	};
	class M60A4_EP1;
	class M60A4_EP1_Small: M60A4_EP1
	{
		type = 1;
	};
	class M240;
	class M240_Small: M240
	{
		type = 1;
	};
	class M249;
	class M249_Small: M249
	{
		type = 1;
	};
	class M249_EP1;
	class M249_EP1_Small: M249_EP1
	{
		type = 1;
	};
	class M249_TWS_EP1;
	class M249_TWS_EP1_Small: M249_TWS_EP1
	{
		type = 1;
	};
	class M249_m145_EP1;
	class M249_m145_EP1_Small: M249_m145_EP1
	{
		type = 1;
	};
	class Mk_48;
	class Mk_48_Small: Mk_48
	{
		type = 1;
	};
	class Mk_48_DES_EP1;
	class Mk_48_DES_EP1_Small: Mk_48_DES_EP1
	{
		type = 1;
	};
	class PK;
	class PK_Small: PK
	{
		type = 1;
	};
	class Pecheneg;
	class Pecheneg_Small: Pecheneg
	{
		type = 1;
	};
	class ksvk;
	class ksvk_Small: ksvk
	{
		type = 1;
	};
	class m107;
	class m107_Small: m107
	{
		type = 1;
	};
	class m107_TWS_EP1;
	class m107_TWS_EP1_Small: m107_TWS_EP1
	{
		type = 1;
	};
	class m240_scoped_EP1;
	class m240_scoped_EP1_Small: m240_scoped_EP1
	{
		type = 1;
	};
};
