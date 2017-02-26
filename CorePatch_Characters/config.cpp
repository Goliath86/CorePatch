class CfgPatches
{
	class CorePatch_Characters
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {
			"US_Delta_Force_TL_Light_EP1",
			"US_Soldier_Crew_Light_EP1",
			"US_Soldier_MG_Light_EP1"
		};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_Characters
		{
			list[] = {"CorePatch_Characters"};
		};
	};
};
class CfgMovesBasic
{
	class Actions
	{
		class CivilProneActions;
		class BinocProneCivilActions : CivilProneActions
		{
			playerCrouch = "AwopPknlMstpSoptWbinDnon_non";
			playerProne = "";
		};
		class CivilStandActions;
		class BinocStandCivilActions : CivilStandActions
		{
			playerCrouch = "AwopPknlMstpSoptWbinDnon_non";
			playerStand = "";
		};
		class BinocKneelCivilActions : BinocStandCivilActions
		{
			playerCrouch = "";
			playerStand = "AwopPercMstpSoptWbinDnon_non";
		};
	};
};
class CfgFactionClasses
{
	class BIS_CZ
	{
		displayName = "$STR_DN_FN_BIS_CZ_CP";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase : Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
		};
	};
	class SoldierEB : CAManBase
	{
	};
	class Ins_Soldier_Base : SoldierEB
	{
	};
	class Ins_Soldier_CO : Ins_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
	};
	class Ins_Soldier_Crew : Ins_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
		};
	};
	class Ins_Soldier_Pilot : Ins_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_opFor_ca";
	};
	class Ins_Soldier_Sab : Ins_Soldier_Base
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
		// engineer = 0;
	};
	//class Ins_Soldier_Sapper : Ins_Soldier_Base
	//{
	//	engineer = 0;
	//};
	class Ins_Villager3 : Ins_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	};
	class Ins_Woodlander1 : Ins_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	};
	class Ins_Worker2 : Ins_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	};
	class MVD_Soldier_Base : SoldierEB
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class RU_Soldier_Base : SoldierEB
	{
	};
	class RU_Commander : RU_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class RU_Soldier_Light : RU_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class RU_Soldier_SL : RU_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
	};
	class RUS_Soldier_Base : SoldierEB
	{
		canDeactivateMines = 1;
		canHideBodies = 1;

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class TK_Soldier_base_EP1 : SoldierEB
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.85000002;
			};
		};
	};
	class TK_Aziz_EP1 : TK_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class TK_Commander_EP1 : TK_Soldier_base_EP1
	{
		portrait = "\Ca\characters_E\data\portraits\tak_spec_CA";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class TK_Soldier_Crew_EP1 : TK_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_crew_ca";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
		};
	};
	class TK_Soldier_Engineer_EP1 : TK_Soldier_base_EP1
	{
		displayName = "$STR_DN_SOLDIER_ENGINEER_CP";
	};
	class TK_Soldier_Officer_EP1 : TK_Soldier_base_EP1
	{
		portrait = "\Ca\characters_E\data\portraits\tak_spec_CA";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class TK_Soldier_Pilot_EP1 : TK_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
		};
	};
	class TK_Special_Forces_EP1 : TK_Soldier_base_EP1
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
		portrait = "\Ca\characters_E\data\portraits\loc_soldier_CA";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class SoldierGB : CAManBase
	{
	};
	class CIV_Contractor1_BAF : SoldierGB
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class GUE_Soldier_Base : SoldierGB
	{
	};
	class GUE_Soldier_1 : GUE_Soldier_Base
	{
	};
	class GUE_Soldier_Crew : GUE_Soldier_1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_opFor_ca";
	};
	class GUE_Soldier_Pilot : GUE_Soldier_1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_opFor_ca";
	};
	class GUE_Soldier_Sab : GUE_Soldier_Base
	{
		canHideBodies = 1;
		// engineer = 0;
	};
	class GUE_Soldier_Sniper : GUE_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
	};
	class GUE_Villager3 : GUE_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	};
	class GUE_Woodlander1 : GUE_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	};
	class GUE_Worker2 : GUE_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	};
	class Soldier_Base_PMC : SoldierGB
	{
	};
	class Soldier_Engineer_PMC : Soldier_Base_PMC
	{
		displayName = "$STR_DN_FIELD_TECHNICIAN_CP";
	};
	class Soldier_Pilot_PMC : Soldier_Base_PMC
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_pilot_ca";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
		};
	};
	class TK_GUE_Soldier_Base_EP1 : SoldierGB
	{
	};
	class US_Delta_Force_Undercover_Takistani_Base_EP1 : TK_GUE_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class UN_CDF_Soldier_base_EP1 : SoldierGB
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.85000002;
			};
		};
	};
	class UN_CDF_Soldier_Crew_EP1 : UN_CDF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
		};
	};
	class UN_CDF_Soldier_EP1 : UN_CDF_Soldier_base_EP1
	{
	};
	class UN_CDF_Soldier_Guard_EP1 : UN_CDF_Soldier_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class UN_CDF_Soldier_Light_EP1 : UN_CDF_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";
	};
	class UN_CDF_Soldier_Officer_EP1 : UN_CDF_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";

		class HitPoints : HitPoints
		{
			delete HitBody;
		};
	};
	class SoldierWB : CAManBase
	{
	};
	class BAF_Soldier_base_EP1 : SoldierWB
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.85000002;
			};
		};
	};
	class BAF_crewman_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			delete HitHead;
			delete HitBody;
		};
	};
	class BAF_Pilot_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			delete HitBody;
		};
	};
	class BAF_Soldier_EN_MTP : BAF_Soldier_base_EP1
	{
		displayName = "$STR_DN_SOLDIER_ENGINEER_CP";

		class HitPoints : HitPoints
		{
			delete HitHead;
			delete HitBody;
		};
	};
	class BAF_Soldier_FAC_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			delete HitHead;
			delete HitBody;
		};
	};
	class BAF_Soldier_L_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class BAF_Soldier_Marksman_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			delete HitHead;
			delete HitBody;
		};
	};
	class BAF_Soldier_Officer_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			delete HitBody;
		};
	};
	class BAF_Soldier_SL_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			delete HitHead;
			delete HitBody;
		};
	};
	class BAF_Soldier_scout_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			delete HitHead;
			delete HitBody;
		};
	};
	class BAF_Soldier_spotter_MTP : BAF_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_Base : SoldierWB
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.85000002;
			};
			class HitBody : HitBody
			{
				armor = 1;
				passThrough = 0.80000001;
			};
		};
	};
	class CDF_Commander : CDF_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier : CDF_Soldier_Base
	{
	};
	class CDF_Soldier_Engineer : CDF_Soldier
	{
		displayName = "$STR_DN_SOLDIER_ENGINEER_CP";
	};
	class CDF_Soldier_Crew : CDF_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_Light : CDF_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_Militia : CDF_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";

		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_Officer : CDF_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_Pilot : CDF_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_Sniper : CDF_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_Spotter : CDF_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CDF_Soldier_TL : CDF_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class CZ_Soldier_base_EP1 : SoldierWB
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.85000002;
			};
		};
	};
	class CZ_Soldier_Light_DES_EP1 : CZ_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
	};
	class CZ_Soldier_Office_DES_EP1 : CZ_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
	};
	class CZ_Soldier_Pilot_EP1 : CZ_Soldier_base_EP1
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class CZ_Special_Forces_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_GL_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
		displayName = "$STR_DN_GRENADIER";
		portrait = "\Ca\characters_E\data\portraits\acr_soldier_CA";
	};
	class CZ_Special_Forces_MG_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_Scout_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_TL_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
		portrait = "\Ca\characters_E\data\portraits\acr_soldier_CA";
	};
	class CZ_Soldier_Base_ACR : CZ_Soldier_base_EP1
	{
	};
	class CZ_Soldier_Crew_Dst_ACR : CZ_Soldier_Base_ACR
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.69999999;
			};
		};
	};
	class CZ_Soldier_Crew_Wdl_ACR : CZ_Soldier_Crew_Dst_ACR
	{
		class HitPoints : HitPoints
		{
			delete HitHead;
		};
	};
	class GER_Soldier_base_EP1 : SoldierWB
	{
		canDeactivateMines = 1;
		portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
	};
	class GER_Soldier_Medic_EP1 : GER_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";

		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class GER_Soldier_TL_EP1 : GER_Soldier_base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";

		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class US_Soldier_Base_EP1 : SoldierWB
	{
	};
	class US_Delta_Force_EP1 : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Delta_Force_TL_EP1 : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Delta_Force_TL_Light_EP1 : US_Delta_Force_TL_EP1
	{
		model = "\ca\characters_E\Delta\Delta2_Light";
		scope = 1;

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class US_Soldier_Crew_EP1 : US_Soldier_Base_EP1
	{
	};
	class US_Soldier_Crew_Light_EP1 : US_Soldier_Crew_EP1
	{
		model = "\ca\characters_E\US\US_crewman_Light";
		scope = 1;

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class US_Soldier_Engineer_EP1 : US_Soldier_Base_EP1
	{
		displayName = "$STR_DN_SOLDIER_ENGINEER_CP";
	};
	class US_Soldier_Light_EP1 : US_Soldier_Base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class US_Soldier_MG_EP1 : US_Soldier_Base_EP1
	{
	};
	class US_Soldier_MG_Light_EP1 : US_Soldier_MG_EP1
	{
		model = "\ca\characters_E\US\US_machine_gunner_Light";
		scope = 1;

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class US_Soldier_Officer_EP1 : US_Soldier_Base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
	};
	class US_Soldier_Pilot_EP1 : US_Soldier_Base_EP1
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class Pierce : US_Soldier_Pilot_EP1
	{
	};
	class Pierce_Light : Pierce
	{
		class HitPoints : HitPoints
		{
			delete HitBody;
		};
	};
	class US_Pilot_Light_EP1 : US_Soldier_Base_EP1
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_pilot_ca";
	};
	class USMC_Soldier_Base : SoldierWB
	{
	};
	class USMC_Soldier_Light : USMC_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class USMC_Soldier_Officer : USMC_Soldier_Base
	{
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_officer_ca";
	};
	class USMC_Soldier_Pilot : USMC_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{
				armor = 0.80000001;
				passThrough = 1;
			};
		};
	};
	class USMC_SoldierS_Engineer : USMC_Soldier_Base
	{
		displayName = "$STR_DN_SOLDIER_ENGINEER_CP";
	};
};
