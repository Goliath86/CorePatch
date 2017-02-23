class CfgPatches
{
	class CorePatch_CCP_67380
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {
			"M240BC_MG_Nest",
			"M240BC_veh_2",
			"PKTBC_2",
			"PKTBC_MG_Nest"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_CCP_67380
		{
			list[] = {"CorePatch_CCP_67380"};
		};
	};
};
class CfgWeapons
{
	class CannonCore;
	class 2A14 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class 2A28 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class 2A42 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class 2A72 : CannonCore
	{
		ballisticsComputer = 1;
	};
	class D10 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class ZiS_S_53 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class MGun;
	class AGS30 : MGun
	{
		ballisticsComputer = 2;
	};
	class DSHKM : MGun
	{
		ballisticsComputer = 2;
	};
	class KORD : MGun
	{
		ballisticsComputer = 2;
	};
	class KPVT : MGun
	{
		ballisticsComputer = 2;
	};
	class M32_heli : MGun
	{
		ballisticsComputer = 2;
	};
	class YakB : MGun
	{
		ballisticsComputer = 2;
	};
	class M240_veh;
	class BAF_M240_veh : M240_veh
	{
		ballisticsComputer = 2;
	};
	class M240_veh_MG_Nest;
	class M240BC_MG_Nest : M240_veh_MG_Nest
	{
		ballisticsComputer = 2;
	};
	class M240BC_veh;
	class M240BC_veh_2 : M240BC_veh
	{
	};
	class PKT;
	class DT_veh : PKT
	{
		ballisticsComputer = 2;
	};
	class PKT_veh;
	class SGMT : PKT_veh
	{
		ballisticsComputer = 2;
	};
	class PKT_MG_Nest;
	class PKTBC_MG_Nest : PKT_MG_Nest
	{
		ballisticsComputer = 2;
	};
	class PKTBC;
	class PKTBC_2 : PKTBC
	{
	};
};
