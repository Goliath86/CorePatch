
class CfgPatches {

	class CorePatch_Armory_Fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_Armory_Fix {
          list[] = {"CorePatch_Armory_Fix"};
       };
    };
};

class Default;

class CfgOO {
	
	class Debug {
		
		class Methods {
		
			class Debug {
				parameterTypes[] = {"OBJECT"};
				script = "\CorePatch\CorePatch_Armory\data\scripts\Debug.sqf";
			};	
		};
	};
};

class CfgObjectCompositions {

	class MediumTentCamp_napa {
		objectScript = "\CorePatch\CorePatch_Armory\data\scripts\MediumTentCamp_napa.sqf";
	};
	
	class FuelDepot_US_EP1 {
		objectScript = "\CorePatch\CorePatch_Armory\data\scripts\fuelDepot_us.sqf";
	};
};

class CfgFaces {
	
	class WomanHead {
	
		class Face97: Default {
		};
	};
};