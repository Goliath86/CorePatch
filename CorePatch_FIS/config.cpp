class CfgPatches {

	class CorePatch_FIS_Fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_FIS_Fix {
          list[] = {"CorePatch_FIS_Fix"};
       };
    };
};

class DefaultEventhandlers {
	init = "if(isNil 'BIS_Effects_Init' || isNil 'Corepatch_Effects_Init') then {[] call compile preProcessFileLineNumbers '\CorePatch\CorePatch_FIS\data\scripts\init.sqf';}";
};