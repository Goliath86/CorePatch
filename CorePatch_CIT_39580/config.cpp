class CfgPatches
{
	class CorePatch_CIT_39580
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgFaces
{
	class Default;
	class Man : Default
	{
		class Default;
		class Face01 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"Head_RU",
				"Head_RU_CO",
				"Head_CDF",
				"Head_CDF_CO",
				"Head_INS",
				"Head_GUE",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face01_camo1 : Face01
		{
			identityTypes[] = {
				"",
				"",
				"Head_RU_Camo",
				"Head_RU_CO_Camo",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"Head_INS_Camo",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
		class Face02 : Default
		{
			identityTypes[] = {
				"Default",
				"Head_USMC",
				"Head_USMC_CO",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"Head_GUE",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face02_camo1 : Face02
		{
			identityTypes[] = {
				"Head_USMC_Camo",
				"Head_USMC_CO_Camo",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
		class Face04 : Default
		{
			identityTypes[] = {
				"Default",
				"Head_USMC",
				"Head_USMC_CO",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face04_camo1 : Face04
		{
			identityTypes[] = {
				"Head_USMC_Camo",
				"Head_USMC_CO_Camo",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face06 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"Head_INS",
				"",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face06_camo1 : Face06
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"Head_INS_Camo",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face07 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"Head_INS",
				"Head_GUE",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face07_camo1 : Face07
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"Head_INS_Camo",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
		class Face09 : Default
		{
			identityTypes[] = {
				"Default",
				"Head_USMC",
				"Head_USMC_CO",
				"Head_RU",
				"Head_RU_CO",
				"Head_CDF",
				"Head_CDF_CO",
				"Head_INS",
				"Head_GUE",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face09_camo1 : Face09
		{
			identityTypes[] = {
				"Head_USMC_Camo",
				"Head_USMC_CO_Camo",
				"Head_RU_Camo",
				"Head_RU_CO_Camo",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"Head_INS_Camo",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
		class Face10 : Default
		{
			identityTypes[] = {
				"Default",
				"Head_USMC",
				"Head_USMC_CO",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face10_camo1 : Face10
		{
			identityTypes[] = {
				"Head_USMC_Camo",
				"Head_USMC_CO_Camo",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face13 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face13_camo1 : Face13
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face15 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"Head_GUE",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face15_camo1 : Face15
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
		class Face18 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"Head_RU",
				"Head_RU_CO",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face18_camo1 : Face18
		{
			identityTypes[] = {
				"",
				"",
				"Head_RU_Camo",
				"Head_RU_CO_Camo",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face25 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face25_camo1 : Face25
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face43 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face43_camo1 : Face43
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face45 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"Head_GUE",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face45_camo1 : Face45
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
		class Face53 : Default
		{
			identityTypes[] = {
				"Default",
				"Head_USMC",
				"Head_USMC_CO",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face53_camo1 : Face53
		{
			identityTypes[] = {
				"Head_USMC_Camo",
				"Head_USMC_CO_Camo",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face60_Hair : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"Head_RU",
				"Head_RU_CO",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face60_Hair_camo1 : Face60_Hair
		{
			identityTypes[] = {
				"",
				"",
				"Head_RU_Camo",
				"Head_RU_CO_Camo",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face63 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"Head_RU",
				"Head_RU_CO",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face63_camo1 : Face63
		{
			identityTypes[] = {
				"",
				"",
				"Head_RU_Camo",
				"Head_RU_CO_Camo",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face88 : Default
		{
			identityTypes[] = {
				"Default",
				"Head_USMC",
				"Head_USMC_CO",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face88_camo1 : Face88
		{
			identityTypes[] = {
				"Head_USMC_Camo",
				"Head_USMC_CO_Camo",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face89 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"Head_INS",
				"",
				"Head_CIV",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face89_camo1 : Face89
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"Head_INS_Camo",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face91 : Default
		{
			identityTypes[] = {
				"Default",
				"Head_USMC",
				"Head_USMC_CO",
				"Head_RU",
				"Head_RU_CO",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face91_camo1 : Face91
		{
			identityTypes[] = {
				"Head_USMC_Camo",
				"Head_USMC_CO_Camo",
				"Head_RU_Camo",
				"Head_RU_CO_Camo",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face93 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face93_camo1 : Face93
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face103 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"Head_GUE",
				"",
				"",
				"",
				"Head_ACR"
			};
		};
		class Face103_camo1 : Face103
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
		class Face105 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"Head_RU",
				"Head_RU_CO",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"",
				"",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face105_camo1 : Face105
		{
			identityTypes[] = {
				"",
				"",
				"Head_RU_Camo",
				"Head_RU_CO_Camo",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"",
				"Head_ACR_Camo"
			};
		};
		class Face106 : Default
		{
			identityTypes[] = {
				"Default",
				"",
				"",
				"",
				"",
				"Head_CDF",
				"Head_CDF_CO",
				"",
				"Head_GUE",
				"Head_CIV",
				"",
				"Head_BAF",
				"Head_ACR"
			};
		};
		class Face106_camo1 : Face106
		{
			identityTypes[] = {
				"",
				"",
				"",
				"",
				"Head_CDF_Camo",
				"Head_CDF_CO_Camo",
				"",
				"Head_GUE_Camo",
				"Head_ACR_Camo"
			};
		};
	};
};
class CfgVehicles
{
	class SoldierWB;
	class CZ_Soldier_base_EP1 : SoldierWB
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR",
			"CDF_Glasses"
		};
	};
	class CZ_Sharpshooter_DES_ACR : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
	class CZ_Sharpshooter_Wdl_ACR : CZ_Sharpshooter_DES_ACR
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR",
			"Head_ACR_Camo"
		};
	};
	class CZ_Soldier_Base_ACR : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR",
			"CDF_Glasses"
		};
	};
	class CZ_Soldier_Pilot_Wdl_ACR : CZ_Soldier_Base_ACR
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR",
			"aviator_sunglases"
		};
	};
	class CZ_Soldier_Recon_Wdl_ACR : CZ_Soldier_Base_ACR
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
	class CZ_Soldier_Sniper_ACR : CZ_Soldier_Base_ACR
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR",
			"Head_ACR_Camo"
		};
	};
	class CZ_Soldier_Spec1_Wdl_ACR : CZ_Soldier_Base_ACR
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR",
			"Head_ACR_Camo"
		};
	};
	class CZ_Soldier_Pilot_EP1 : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR",
			"aviator_sunglases"
		};
	};
	class CZ_Soldier_Sniper_EP1 : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
	class CZ_Special_Forces_DES_EP1 : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
	class CZ_Special_Forces_GL_DES_EP1 : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
	class CZ_Special_Forces_MG_DES_EP1 : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
	class CZ_Special_Forces_Scout_DES_EP1 : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
	class CZ_Special_Forces_TL_DES_EP1 : CZ_Soldier_base_EP1
	{
		identityTypes[] = {
			"Language_ACR_CZ",
			"Head_ACR"
		};
	};
};
