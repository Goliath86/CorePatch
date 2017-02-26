class CfgAddons {
	class PreloadAddons {
		class CorePatch_AdditionalObjects {
			list[] = {"CorePatch_AdditionalObjects"};
		};
	};
};

class CfgPatches {
	class CorePatch_AdditionalObjects {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
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
		armor = 700;
		destrType = "DestructBuilding";
	};

	class Land_ConcreteRamp2_Destructible:Land_ConcreteRamp_Destructible {
		scope = 1;
		displayName = $STR_DN_RAMPCONCRETE;
		model = "\ca\data\library\ramp_concrete.p3d";
	};

	class Land_ConcreteBlock;
	class Land_ConcreteBlock_Destructible:Land_ConcreteBlock {
		scope = 1;
		armor = 750;
		destrType = "DestructBuilding";
	};

	class WarfareBDepot;
	class WarfareBDepot_Destructible:WarfareBDepot {
		scope = 1;
		armor = 2500;
	};

	class Wall_L_2m5_EP1;
	class Wall_L_5m5_EP1:Wall_L_2m5_EP1 {
		scope = 1;
		model = "\ca\structures_e\Wall\Wall_L\Wall_L_5m_EP1.p3d";
	};

	class Land_fort_rampart;
	class Land_fort_rampart_Destructible:Land_fort_rampart {
		scope = 1;
		destrType = "DestructBuilding";
	};
};
