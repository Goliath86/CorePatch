class CfgPatches {
	class CorePatch_AdditionalObjects {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
	class PreloadAddons {
		class CorePatch_AdditionalObjects {
			list[] = {"CorePatch_AdditionalObjects"};
		};
	};
};

class CfgVehicles {
	class Helper_Base_EP1;
	class Sign_sphere500cm_EP1:Helper_Base_EP1 {
		scope = 1;
		model = "\ca\misc_e\sphere500cm_EP1.p3d";
		accuracy = 1000;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0.5,0.5,ca)"};
	};

	class NonStrategic;
	class CorePatch_NonStrategic:NonStrategic {
		animated = 0;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 0.1;
		scope = 0;
		class DestructionEffects {};
		destrType = "DestructNo";
		accuracy = 0.2;
		cost = 0;
	};

	class CorePatch_Lightning1:CorePatch_NonStrategic {
		scope = 1;
		model = "\ca\data\blesk1.p3d";
	};

	class CorePatch_Lightning2:CorePatch_Lightning1 {
		scope = 1;
		model = "\ca\data\blesk2.p3d";
	};

	class CorePatch_CraterFlat:CorePatch_NonStrategic {
		scope = 1;
		model = "\ca\data\krater.p3d";
	};

	class CorePatch_BrokenGlass:CorePatch_NonStrategic {
		scope = 1;
		model = "\ca\structures\Ruins\Glass_Cullet_01.p3d";
	};

	class CorePatch_BloodSplat:CorePatch_NonStrategic {
		scope = 1;
		model = "\ca\characters\krvava_skvrna.p3d";
	};

	class Small_items_NoInteractive;
	class CorePatch_RadioOld:Small_items_NoInteractive {
		scope = 1;
		model = "\ca\misc\mutt_vysilacka.p3d";
		displayName = "$STR_DN_RADIO";
	};

	class Small_items;
	class CorePatch_CardboardBox:Small_items {
		scope = 1;
		model = "\ca\structures\Furniture\Decoration\box_c\box_c.p3d";
	};

	class AmmoCrate_NoInteractive_Base_EP1;
	class CorePatch_SmallAmmoSack:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\AmmoBoxes\Proxy_RUAmmosmall.p3d";
		accuracy = 1000;
		scope = 1;
	};

	class CorePatch_SmallMetalAmmoBox:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\AmmoBoxes\Proxy_RUBasicAmmoBox.p3d";
		displayName = "$STR_EP1_DN_AmmoCrate_NoInteractive_";
		scope = 1;
	};

	class CorePatch_LongMetalAmmoBox:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxBig.p3d";
		displayName = "$STR_EP1_DN_AmmoCrate_NoInteractive_";
		scope = 1;
	};

	class CorePatch_ShortMetalAmmoBox:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		displayName = "$STR_EP1_DN_AmmoCrate_NoInteractive_";
		scope = 1;
	};

	class CorePatch_EastWoodenAmmoBox:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\AmmoBoxes\Proxy_RUWeaponBox.p3d";
		displayName = "$STR_EP1_DN_AmmoCrate_NoInteractive_";
		scope = 1;
	};

	class CorePatch_EastSmallWoodenAmmoBox:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\AmmoBoxes\Proxy_RUWeaponBoxlow.p3d";
		displayName = "$STR_EP1_DN_AmmoCrate_NoInteractive_";
		scope = 1;
	};

	class CorePatch_WestLongWoodenAmmoBox:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\AmmoBoxes\Proxy_UsLouncherBox.p3d";
		displayName = "$STR_EP1_DN_AmmoCrate_NoInteractive_";
		scope = 1;
	};

	class CorePatch_MagazineBag:AmmoCrate_NoInteractive_Base_EP1 {
		model = "\ca\weapons\mag_univ.p3d";
		displayName = "$STR_EP1_DN_AmmoCrate_NoInteractive_";
		scope = 1;
	};

	class Misc_thing_NoInteractive;
	class CorePatch_MineCart:Misc_thing_NoInteractive {
		scope = 1;
		model = "\ca\structures_e\Ind\Ind_Coltan_Mine\Misc_Tram_EP1.p3d";
	};

	class Misc_thing;
	class CorePatch_MissileSCUD:Misc_thing {
		scope = 1;
		model = "\ca\wheeled_e\SCUD\data\scud_rocket.p3d";
	};

	class Land_HBarrier_large;
	class Land_HBarrier5_Curved:Land_HBarrier_large {
		model = "\ca\misc2\HBarrier5_round15.p3d";
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
		mapSize = 7;
		displayName = "$STR_DN_HBARRIER5";
		GhostPreview = "Land_HBarrier5Preview";
	};

	class Wreck_Base;
	class CorePatch_UAZHull:Wreck_Base {
		scope = 1;
		model = "\ca\wheeled\uaz_wreck.p3d";
	};

	class Land_ConcreteRamp;
	class Land_ConcreteRamp_Destructible:Land_ConcreteRamp {
		scope = 1;
		armor = 800;
		destrType = "DestructBuilding";
		model = "\CorePatch\CorePatch_AdditionalObjects\models\concrete_ramp";
	};

	class Land_ConcreteRamp2_Destructible:Land_ConcreteRamp_Destructible {
		scope = 1;
		displayName = $STR_DN_RAMPCONCRETE;
		model = "\ca\data\library\ramp_concrete.p3d";
	};

	class Land_ConcreteBlock;
	class Land_ConcreteBlock_Destructible:Land_ConcreteBlock {
		scope = 1;
		armor = 800;
		destrType = "DestructBuilding";
		model = "\CorePatch\CorePatch_AdditionalObjects\models\concrete_block";
	};

	class WarfareBDepot;
	class WarfareBDepot_Destructible:WarfareBDepot {
		scope = 1;
		armor = 2000;
	};

	class Wall_L_2m5_EP1;
	class Wall_L_5m5_EP1:Wall_L_2m5_EP1 {
		scope = 1;
		model = "\ca\structures_e\Wall\Wall_L\Wall_L_5m_EP1.p3d";
	};

/*	class Land_fort_rampart;
	class Land_fort_rampart_Destructible:Land_fort_rampart {
		scope = 1;
		destrType = "DestructBuilding";
	};*/
	class House;
	class Land_fort_rampart:House {
		destrType = "DestructBuilding";
	};

	class Land_Dirthump01;
	class Land_Dirthump01_Destructible:Land_Dirthump01 {
		scope = 1;
		armor = 2000;
		destrType = "DestructBuilding";		
	};
	class Land_Dirthump01_Destructible_EP1:Land_Dirthump01_Destructible {
		expansion = 1;
		model = "\ca\Misc_E\dirthump01_ep1";
	};

	class Land_Dirthump02;
	class Land_Dirthump02_Destructible:Land_Dirthump01 {
		scope = 1;
		armor = 2000;
		destrType = "DestructBuilding";		
	};
	class Land_Dirthump02_Destructible_EP1:Land_Dirthump02_Destructible {
		expansion = 1;
		model = "\ca\Misc_E\dirthump02_ep1";
	};

	class Land_Dirthump03;
	class Land_Dirthump03_Destructible:Land_Dirthump01 {
		scope = 1;
		armor = 2000;
		destrType = "DestructBuilding";		
	};
	class Land_Dirthump03_Destructible_EP1:Land_Dirthump03_Destructible {
		expansion = 1;
		model = "\ca\Misc_E\dirthump03_ep1";
	};

	class Land_WoodenRamp;
	class Land_WoodenRamp_CP:Land_WoodenRamp {
		scope = 1;
		destrType = "DestructBuilding";
		armor = 70;
	};

	class Land_prebehlavka;
	class Land_prebehlavka_CP:Land_prebehlavka {
		scope = 1;
		destrType = "DestructBuilding";
		armor = 100;
	};

/*	class Land_LHD_house_2;
	class Land_LHD_house_2_CP:Land_LHD_house_2 {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\LHD_house_2";
	};
	class Land_LHD_elev_R;
	class Land_LHD_elev_L:Land_LHD_elev_R {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\LHD_elev_L";
	};*/

	class StaticShip;
	class Land_LHD_house_2_CP: StaticShip
	{
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\LHD_house_2";
		displayName = "$STR_DN_LHD";
		ladders[] = {{"start1","end1"}};
		featureSize = 100;
		destrType = 0;
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bila sedma";
				color[] = {0.003,0.003,0.003,0.0};
				ambient[] = {0.03,0.023,0.0056,0.0};
				brightness = 0.1;
				blinking = "false";
			};
			class BlueStill
			{
				name = "modry pozicni";
				color[] = {0.012,0.012,0.12,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.01;
				blinking = "false";
			};
			class YellowStill
			{
				name = "zluty pozicni";
				color[] = {0.03,0.027,0.00672,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.01;
				blinking = "false";
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.12,0.006,0.006,1.0};
				ambient[] = {0.1,0.01,0.01,1.0};
				brightness = 0.01;
				blinking = "false";
			};
		};
		class AnimationSources
		{
			class dveremale
			{
				animPeriod = 1;
				initPhase = 1;
			};
			class dverevelkeL
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class dverevelkeR
			{
				animPeriod = 1;
				initPhase = 0;
			};
			class Lights_1
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dveremale";
				radius = 2;
				onlyForPlayer = "false";
				condition = "isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" < 0.5";
				statement = "this animate [""dveremale"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dveremale";
				radius = 2;
				onlyForPlayer = "false";
				condition = "isnil""BIS_lockKheSanhDoors_small"" and this animationPhase ""dveremale"" >= 0.5";
				statement = "this animate [""dveremale"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa_dverevelkeL";
				radius = 4;
				onlyForPlayer = "false";
				condition = "isnil""BIS_lockKheSanhDoors_large"" and this animationPhase ""dverevelkeL"" < 0.5";
				statement = "this animate [""dverevelkeL"", 1];this animate [""dverevelkeR"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa_dverevelkeL";
				radius = 4;
				onlyForPlayer = "false";
				condition = "isnil""BIS_lockKheSanhDoors_large"" and this animationPhase ""dverevelkeL"" >= 0.5";
				statement = "this animate [""dverevelkeL"", 0];this animate [""dverevelkeR"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
	};
	class Land_LHD_elev_L: StaticShip
	{
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\LHD_elev_L";
		displayName = "$STR_DN_LHD";
		destrType = 0;
	};

	class Land_fortified_nest_big;
	class Land_fortified_nest_big_CP:Land_fortified_nest_big {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\fortified_nest_big";
	};
	class Base_WarfareBBarrier10x;
	class Base_WarfareBBarrier10x_CP:Base_WarfareBBarrier10x {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\WF_hesco_10x";
	};
	class Base_WarfareBBarrier10xTall;
	class Base_WarfareBBarrier10xTall_CP:Base_WarfareBBarrier10xTall {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\WF_hesco_big_10x";
	};
	class Base_WarfareBBarrier5x;
	class Base_WarfareBBarrier5x_CP:Base_WarfareBBarrier5x {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\WF_hesco_5x";
	};
	class Base_WarfareBBarrier3x_CP:Base_WarfareBBarrier5x {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\WF_hesco_3x";
		armor = 400;
	};
	class Base_WarfareBBarrier1x_CP:Base_WarfareBBarrier5x {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\WF_hesco_1x";
		armor = 200;
	};

	class UserTexture1M_CP:CorePatch_NonStrategic {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTexture1M";
		hiddenSelections[] = {"usertexture"};
	};
	class UserTexture2M_CP:UserTexture1M_CP {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTexture2M";
	};
	class UserTexture5M_CP:UserTexture1M_CP {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTexture5M";
	};
	class UserTexture10M_CP:UserTexture1M_CP {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTexture10M";
	};
	class UserTextureGround1M_CP:UserTexture1M_CP {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTextureGround1M";
	};
	class UserTextureGround2M_CP:UserTexture1M_CP {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTextureGround2M";
	};
	class UserTextureGround5M_CP:UserTexture1M_CP {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTextureGround5M";
	};
	class UserTextureGround10M_CP:UserTexture1M_CP {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\UserTextureGround10M";
	};

	class Library_WeaponHolder;
	class WeaponHolder_Inaccessible_CP:Library_WeaponHolder {
		model = "\CorePatch\CorePatch_AdditionalObjects\models\WeaponHolder_Inaccessible";
	};

	class PowerGenerator;
	class PowerGenerator_CP:PowerGenerator {
		scope = 1;
		model = "\CorePatch\CorePatch_AdditionalObjects\models\PowerGenerator";
		hiddenSelections[] = {"camo_PowerGenerator"};
		hiddenSelectionsTextures[] = {"ca\misc3\powergenerator\data\power_generator_co.paa"};

		armor = 60;
		destrType = "DestructDefault";
		selectionDamage = "camo_PowerGenerator";

		class Damage {
			tex[]={};
			mat[]={
				"ca\misc3\powergenerator\data\metal.rvmat",
				"CorePatch\CorePatch_AdditionalObjects\textures\power_generator_damage_half.rvmat",
				"CorePatch\CorePatch_AdditionalObjects\textures\power_generator_damage_full.rvmat"
			};
		};

		class DestructionEffects {};

		class AnimationSources {
			class Hatch {
				animPeriod = 1;
				source = "user";
			};
		};
	};
};
