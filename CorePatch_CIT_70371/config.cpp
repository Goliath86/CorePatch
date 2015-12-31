class CfgPatches
{
	class CorePatch_CIT_70371
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_CIT_70371
		{
			list[] = {"CorePatch_CIT_70371"};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 45Rnd_545x39_RPK: CA_Magazine
	{
		ammo = "B_545x39_Ball";
		count = 45;
		descriptionShort = "$STR_DSS_45RND_RPK_CP";
		displayName = "$STR_DN_45RND_545X39_RPK_CP";
		lastRoundsTracer = 4;
		model = "\CorePatch\CorePatch_CIT_70371\30Rnd_545x39_AK";
		nameSound = "mgun";
		picture = "\CA\weapons\AK\data\equip\m_ak74_ca.paa";
		scope = 2;
		tracersEvery = 4;
		type = 256;
	};
	class 75Rnd_545x39_RPK: CA_Magazine
	{
		count = 45;
		descriptionShort = "$STR_DSS_45RND_RPK_CP";
		displayName = "$STR_DN_45RND_545X39_RPK_CP";
		model = "\CorePatch\CorePatch_CIT_70371\30Rnd_545x39_AK";
		picture = "\CA\weapons\AK\data\equip\m_ak74_ca.paa";
		type = 256;
	};
};
class CfgWeapons
{
	class Rifle;
	class AK_BASE: Rifle
	{
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AKSD",
			"45Rnd_545x39_RPK",
			"75Rnd_545x39_RPK"
		};
	};
	class AK_74: AK_BASE
	{
	};
	class RPK_74: AK_74
	{
		displayName = "$STR_DN_RPK_74_CP";
		magazines[] = {
			"45Rnd_545x39_RPK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AKSD",
			"75Rnd_545x39_RPK"
		};
		//model = "\CorePatch\CorePatch_CIT_70371\RPK_74";
	};
};
class CfgVehicles
{
	class CDF_Soldier_Base;
	class CDF_Soldier_AR: CDF_Soldier_Base
	{
		magazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"HandGrenade_East",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"SmokeShell"
		};
	};
	class GUE_Soldier_Base;
	class GUE_Soldier_AR: GUE_Soldier_Base
	{
		magazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"HandGrenade_East"
		};
		respawnMagazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East"
		};
	};
	class Ins_Soldier_Base;
	class Ins_Soldier_AR: Ins_Soldier_Base
	{
		magazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"HandGrenade_East",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"SmokeShell"
		};
	};
	class RU_Soldier_Base;
	class RU_Soldier_AR: RU_Soldier_Base
	{
		magazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"HandGrenade_East",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"SmokeShell"
		};
	};
	class ReammoBox;
	class GuerillaCacheBox: ReammoBox
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 20";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class LocalBasicAmmunitionBox: ReammoBox
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 30";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class LocalBasicWeaponsBox: LocalBasicAmmunitionBox
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 20";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class RUBasicAmmunitionBox: ReammoBox
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 100";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class RUSpecialWeaponsBox: RUBasicAmmunitionBox
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 40";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class ReammoBox_EP1;
	class GuerillaCacheBox_EP1: ReammoBox_EP1
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 20";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class TKBasicAmmunitionBox_EP1: ReammoBox_EP1
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 100";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class TKBasicWeapons_EP1: ReammoBox_EP1
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 100";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class UNBasicAmmunitionBox_EP1: ReammoBox_EP1
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 30";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class UNBasicWeapons_EP1: ReammoBox_EP1
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 20";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class TK_Assault_Pack_EP1;
	class TK_Assault_Pack_RPK_EP1: TK_Assault_Pack_EP1
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 3";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class TK_GUE_Soldier_Base_EP1;
	class TK_GUE_Soldier_AR_EP1: TK_GUE_Soldier_Base_EP1
	{
		magazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK"
		};
		respawnMagazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK"
		};
	};
	class TK_INS_Soldier_Base_EP1;
	class TK_INS_Soldier_AR_EP1: TK_INS_Soldier_Base_EP1
	{
		magazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK"
		};
		respawnMagazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK"
		};
	};
	class TK_Soldier_base_EP1;
	class TK_Soldier_AR_EP1: TK_Soldier_base_EP1
	{
		magazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East",
			"HandGrenade_East"
		};
		respawnMagazines[] = {
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"45Rnd_545x39_RPK",
			"HandGrenade_East"
		};
	};
	class UralReammo_Base;
	class UralReammo_TK_EP1: UralReammo_Base
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 10";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
	class V3S_Base_EP1;
	class V3S_Reammo_TK_GUE_EP1: V3S_Base_EP1
	{
		class TransportMagazines
		{
			delete _xx_75Rnd_545x39_RPK;

			class _xx_45Rnd_545x39_RPK
			{
				count = "2 * 10";
				magazine = "45Rnd_545x39_RPK";
			};
		};
	};
};
