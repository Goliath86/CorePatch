scriptName "Silvie\data\scripts\main.sqf";
/*
	File: main.sqf
	Author: Karel Moricky

	Description:
	Init script - System for Including Land Vehicles Into Environment

	Parameter(s):
	_this: the Zora logic unit which triggered this script.
*/

private ["_logicFnc","_twnlist","_locationParams","_create","_twnlistTemp","_i","_rarityNumber","_rarity","_classlist","_vehicleclass","_actual","_fsm","_logic","_defaultBlacklist","_debug","_vehicleCountFormula","_roaddis","_attemptsTotal","_blacklist","_vehiclerarity","_vehicleinit","_totobj"];
_logic = _this select 0;

//--- Is Garbage collector running?
if (isnil "BIS_GC_trashItFunc") then {(group _logic) createUnit ["GarbageCollector", position _logic, [], 0, "NONE"]};

//--- Execute Functions
if (isnil "bis_fnc_init") then {
	_logicFnc = (group _logic) createunit ["FunctionsManager",position player,[],0,"none"];
};
waituntil {!isnil "BIS_fnc_init"};

_logic setvariable ["id",0];
_logic setvariable ["currentTown",""];
_logic setvariable ["carlist",[]];

_defaultBlacklist = [
	"Land_sloup_vn_dratZ",
	"Land_sloup_vn",
	"Land_Farm_WTower",
	"land_nav_pier_c",
	"land_nav_pier_c2",
	"land_nav_pier_c2_end",
	"land_nav_pier_c_270",
	"land_nav_pier_c_90",
	"land_nav_pier_c_big",
	"land_nav_pier_C_L",
	"land_nav_pier_C_L10",
	"land_nav_pier_C_L30",
	"land_nav_pier_C_R",
	"land_nav_pier_C_R10",
	"land_nav_pier_C_R30",
	"land_nav_pier_c_t15",
	"land_nav_pier_c_t20",
	"land_nav_pier_F_17",
	"land_nav_pier_F_23",
	"land_nav_pier_m",
	"land_nav_pier_m_1",
	"land_nav_pier_m_end",
	"land_nav_pier_M_fuel",
	"land_nav_pier_pneu",
	"land_nav_pier_uvaz",

	"WarfareBDepot",
	"WarfareBAirport",
	"USMC_WarfareBBarracks",
	"RU_WarfareBBarracks",
	"CDF_WarfareBBarracks",
	"Ins_WarfareBBarracks",
	"Gue_WarfareBBarracks",
	"USMC_WarfareBLightFactory",
	"RU_WarfareBLightFactory",
	"CDF_WarfareBLightFactory",
	"Ins_WarfareBLightFactory",
	"Gue_WarfareBLightFactory",
	"USMC_WarfareBHeavyFactory",
	"RU_WarfareBHeavyFactory",
	"CDF_WarfareBHeavyFactory",
	"Ins_WarfareBHeavyFactory",
	"Gue_WarfareBHeavyFactory",
	"USMC_WarfareBAircraftFactory",
	"RU_WarfareBAircraftFactory",
	"CDF_WarfareBAircraftFactory",
	"WarfareBAircraftFactory_CDF",
	"INS_WarfareBAircraftFactory",
	"WarfareBAircraftFactory_Ins",
	"GUE_WarfareBAircraftFactory",
	"WarfareBAircraftFactory_Gue",
	"USMC_WarfareBAntiAirRadar",
	"RU_WarfareBAntiAirRadar",
	"CDF_WarfareBAntiAirRadar",
	"INS_WarfareBAntiAirRadar",
	"GUE_WarfareBAntiAirRadar",
	"USMC_WarfareBArtilleryRadar",
	"RU_WarfareBArtilleryRadar",
	"CDF_WarfareBArtilleryRadar",
	"Ins_WarfareBArtilleryRadar",
	"Gue_WarfareBArtilleryRadar",
	"USMC_WarfareBUAVterminal",
	"RU_WarfareBUAVterminal",
	"CDF_WarfareBUAVterminal",
	"INS_WarfareBUAVterminal",
	"GUE_WarfareBUAVterminal",
	"USMC_WarfareBVehicleServicePoint",
	"RU_WarfareBVehicleServicePoint",
	"CDF_WarfareBVehicleServicePoint",
	"INS_WarfareBVehicleServicePoint",
	"GUE_WarfareBVehicleServicePoint",
	"Base_WarfareBBarrier5x",
	"Base_WarfareBBarrier10x",
	"Base_WarfareBBarrier10xTall",
	"BRDM2_HQ_Gue_unfolded",
	"BTR90_HQ_unfolded",
	"LAV25_HQ_unfolded",
	"BMP2_HQ_INS_unfolded",
	"BMP2_HQ_CDF_unfolded"
];

//--- Get custom params ---------------------------
//--- Debug
_debug = if (format ["%1",_logic getvariable "debug"] == "<null>") then {false} else {true};

/*
//--- Town list
_twnlist = [];
 if (format ["%1",_logic getvariable "townlist"] == "<null>") then {
	_twnlist = nearestLocations [position _logic, ["CityCenter"], 20000];
	_logic setvariable ["townlist",_twnlist];
} else {
	_twnlist = _logic getvariable "townlist";
};
*/


//--- Town list
_twnlist = [];
 if (isnil {_logic getvariable "townlist"}) then {
	_locationParams = if (_debug) then {[["CityCenter"],[],true]} else {[["CityCenter"]]};
	_create = _locationParams call bis_fnc_locations;
	waituntil {sleep 1;count _create > 0};
	{
		if ((_x getvariable "type") == "CityCenter") then {_twnlist = _twnlist + [_x]};
	} foreach (bis_functions_mainscope getvariable "locations");

	_logic setvariable ["townlist",_twnlist,true];
} else {
	_twnlistTemp = _logic getvariable "townlist";
	{
		//--- Array
		if (typename _x == "ARRAY") then {
			//_center = _x select 0;
			//_maxdis = _x select 1;
			_locationParams = if (_debug) then {[["CityCenter"],_x,true]} else {[["CityCenter"],_x]};
			_create = _locationParams call bis_fnc_locations;
			{if !(_x in _twnlist) then {_twnlist = _twnlist + [_x]}} foreach _create;
		} else {
			if (typename _x == "OBJECT") then {
				if (typeof _x != "EmptyDetector") then {
					//--- City logic
					if (isnil {_x getvariable "class"}) then {[[_x]] call bis_fnc_locations};
					_twnlist = _twnlist + [_x];
				} else {
					//--- Trigger
					_locationParams = if (_debug) then {[["CityCenter"],_x,true]} else {[["CityCenter"],_x]};
					_create = _locationParams call bis_fnc_locations;
					{if !(_x in _twnlist) then {_twnlist = _twnlist + [_x]}} foreach _create;
				};
			};
		};
	} foreach _twnlistTemp;
};



//---Vehicle count
_vehicleCountFormula = if (isnil {_logic getvariable "vehicleCount"}) then {"round ((sqrt %1) * 1.5)"} else {_logic getvariable "vehicleCount";};
_logic setvariable ["vehicleCount",_vehicleCountFormula];

//--- Road distance
_roaddis = if (isnil {_logic getvariable "roadDistance"}) then {20} else {_logic getvariable "roadDistance";};
_logic setvariable ["roadDistance",_roaddis];

//--- Attempts to create car
_attemptsTotal = if (isnil {_logic getvariable "attempts"}) then {10} else {_logic getvariable "attempts";};
_logic setvariable ["attempts",_attemptsTotal];

//--- Object blacklist
_blacklist = if (isnil {_logic getvariable "blacklist"}) then {_defaultBlacklist} else {_logic getvariable "blacklist";};
_logic setvariable ["blacklist",_blacklist];

//--- Vehicle rarity
_vehiclerarity = if (isnil {_logic getvariable "vehicleRarity"}) then {[]} else {_logic getvariable "vehicleRarity";};
_logic setvariable ["vehicleRarity",_vehiclerarity];

//--- Vehicle init
_vehicleinit = if (isnil {_logic getvariable "vehicleinit"}) then {{}} else {_logic getvariable "vehicleinit";};
_logic setvariable ["vehicleInit",_vehicleInit];



//--- Get vehicle classes
_classlist = [];
_totobj = count (configfile >> "cfgVehicles");
for [{_i = 0}, {_i < _totobj}, {_i = _i + 1}] do {
	_actual = (configfile >> "cfgVehicles") select _i;
	if (isclass _actual) then {
		private ["_class","_scope","_side"];
		_class = configname _actual;
		_vehicleclass = gettext (configfile >> "cfgvehicles" >> _class >> "vehicleClass");
		if !(_vehicleclass in ["Sounds","Mines"]) then {
			_scope = getnumber (_actual >> "scope");
			_side = getnumber (_actual >> "side");
			if (_class iskindof "LandVehicle" && _scope == 2 && _side == 3) then {
				_rarity = if (_class in _vehiclerarity) then {
					_vehiclerarity select ((_vehiclerarity find _class)+1);
				} else {
					_rarityNumber = getnumber (_actual >> "rarityUrban");
					//--- Exclude if rarity number is not defined
					if (str _rarityNumber == "") then {-1} else {_rarityNumber};
				};
				_classlist = _classlist + [[_class,_rarity]];
			};
		};
	};
};


//--- EXECUTE ---------------------------
{
	_fsm = [_x,_classlist] execFSM "\CorePatch\CorePatch_Modules\Silvie\data\fsms\silvie.fsm";
	//if (_twnlist find _x == 0) then {diag_debugfsm _fsm};

} foreach _twnlist;


//[_logic] join grpnull;
