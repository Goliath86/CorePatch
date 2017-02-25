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
	init = "if(isNil 'BIS_Effects_Init' || isNil 'Corepatch_Effects_Init') then {call compile preProcessFileLineNumbers '\CorePatch\CorePatch_FIS\data\scripts\init.sqf';}";
};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle {
		class Eventhandlers: DefaultEventhandlers
		{
			init = "if(isNil 'BIS_Effects_Init' || isNil 'Corepatch_Effects_Init') then {call compile preProcessFileLineNumbers '\CorePatch\CorePatch_FIS\data\scripts\init.sqf';}; _this call compile preprocessFileLineNumbers '\ca\communityconfigurationproject_e\ai_madetankgunnersuseatandheammo\muzzle\init.sqf';";
			fired = "_this call BIS_Effects_EH_Fired; _this call BIS_CPP_Muzzle_ForceReload;";
		};
	};
	class Tank: LandVehicle	{
		class Eventhandlers: DefaultEventhandlers
		{
			init = "if(isNil 'BIS_Effects_Init' || isNil 'Corepatch_Effects_Init') then {call compile preProcessFileLineNumbers '\CorePatch\CorePatch_FIS\data\scripts\init.sqf';}; _this call compile preprocessFileLineNumbers '\ca\communityconfigurationproject_e\ai_madetankgunnersuseatandheammo\muzzle\init.sqf';";
			fired = "_this call BIS_Effects_EH_Fired; _this call BIS_CPP_Muzzle_ForceReload;";
		};
	};
	class StaticWeapon:LandVehicle {
		class Eventhandlers: DefaultEventhandlers
		{
			init = "if(isNil 'BIS_Effects_Init' || isNil 'Corepatch_Effects_Init') then {call compile preProcessFileLineNumbers '\CorePatch\CorePatch_FIS\data\scripts\init.sqf';}; _this call compile preprocessFileLineNumbers '\ca\communityconfigurationproject_e\ai_madetankgunnersuseatandheammo\muzzle\init.sqf';";
			fired = "_this call BIS_Effects_EH_Fired; _this call BIS_CPP_Muzzle_ForceReload;";
		};
	};
};