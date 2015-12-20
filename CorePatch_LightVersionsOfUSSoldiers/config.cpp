class CfgPatches {
	class CorePatch_LightVersionsOfUSSoldiers {
		units[] = {"US_Soldier_MG_Light_EP1", "US_Soldier_Crew_Light_EP1", "US_Soldier_Pilot_Light_EP1", "US_Delta_Force_TL_Light_EP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgVehicles {
	class Man;
	class CAManBase:Man {
		class HitPoints;
	};
	class SoldierWB:CAManBase {};
	class US_Soldier_Base_EP1:SoldierWB {
		class HitPoints:HitPoints {
			class HitHead;
		};
	};
	class US_Soldier_MG_EP1:US_Soldier_Base_EP1 {};
	class US_Soldier_MG_Light_EP1:US_Soldier_MG_EP1 {
		model = "\ca\characters_E\US\US_machine_gunner_Light";
		scope = 1;
		class HitPoints:HitPoints {
			class HitHead:HitHead {
				armor = 0.6;
			};
		};
	};

	class US_Soldier_Crew_EP1:US_Soldier_Base_EP1 {};
	class US_Soldier_Crew_Light_EP1:US_Soldier_Crew_EP1 {
		model = "\ca\characters_E\US\US_crewman_Light";
		scope = 1;
		class HitPoints:HitPoints {
			class HitHead:HitHead {
				armor = 0.6;
			};
		};
	};

	class US_Soldier_Pilot_EP1:US_Soldier_Base_EP1 {};
	class US_Soldier_Pilot_Light_EP1:US_Soldier_Pilot_EP1 {
		model = "\ca\characters_E\US\US_Pilot_light";
		scope = 1;
		class HitPoints:HitPoints {
			class HitHead:HitHead {
				armor = 0.6;
			};
		};
	};

	class US_Delta_Force_TL_EP1:US_Soldier_Base_EP1 {};
	class US_Delta_Force_TL_Light_EP1:US_Delta_Force_TL_EP1 {
		model = "\ca\characters_E\Delta\Delta2_Light.p3d";
		scope = 1;
		class HitPoints:HitPoints {
			class HitHead:HitHead {
				armor = 0.6;
			};
		};
	};
};