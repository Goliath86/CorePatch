class CfgPatches
{
	class CorePatch_Modules_Functions
	{
		requiredAddons[] = {"CorePatch_Modules"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Logic;
	class FunctionsManager : Logic
	{
		class Eventhandlers
		{
			init = "if (isnil 'BIS_functions_mainscope') then {BIS_functions_mainscope = _this select 0; if (isServer) then {_this execVM '\CorePatch\CorePatch_Modules\Functions\main.sqf'};} else {_this spawn {_mygrp = group (_this select 0); deleteVehicle (_this select 0); deleteGroup _mygrp;};}; if (isnil 'RE') then {[] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'};";
		};
	};
};
