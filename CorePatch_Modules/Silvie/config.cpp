class CfgPatches
{
	class CorePatch_Modules_Silvie
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
	class SilvieManager : Logic
	{
		class Eventhandlers
		{
			init = "if (isnil 'BIS_silvie_mainscope') then {call (compile (preprocessFileLineNumbers '\CorePatch\CorePatch_Modules\Silvie\data\scripts\init-silvie.sqf')); BIS_silvie_mainscope = _this select 0; if (isServer) then {private '_ok'; _ok = _this execVM '\CorePatch\CorePatch_Modules\Silvie\data\scripts\main.sqf'};};";
		};
	};
};
