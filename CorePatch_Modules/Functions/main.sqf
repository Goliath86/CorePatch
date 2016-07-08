scriptName "Functions\main.sqf";

private ["_logic", "_spawn"];
_logic = _this select 0;
_logic setpos [1000,10,0];

// --Persistent execution of init script
waituntil {!isnil "BIS_MPF_InitDone"};
_spawn = [nil, nil, "per", rEXECVM, "\CorePatch\CorePatch_Modules\Functions\init.sqf"] call RE;
