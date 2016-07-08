scriptName "Silvie\data\scripts\spawnVehicle.sqf";
/*
	File: spawnVehicle.sqf
	Author: Karel Moricky

	Description:
	Spawning vehicle with params set in silvie.fsm file.

*/

private ["_eh","_marker","_objpos","_bbox","_b1","_b2","_bbx","_bby","_id","_twn","_class","_obj","_pos","_radius","_dir","_init","_debug","_logic","_car", "_tempPos"];
_id = _this select 0;
_twn = _this select 1;
_class = _this select 2;
_obj = _this select 3;
_pos = _this select 4;
_radius = _this select 5;
_dir = _this select 6;
_init = _this select 7;
_debug = _this select 8;
_logic = bis_silvie_mainscope;

if (_debug) then {textLogFormat ["Log: [SILVIE] #%1 at %2",_id, time];};

//--- Clear
waituntil {sleep 1; {_x distance _pos < 1000} count switchableunits == 0 || _init};
_car = createvehicle [_class, _pos, [], _radius, "none"];
_car setdir (_dir - 10 + random 10);
//_car setvelocity [0,0,-0.1]; // -0.2
_tempPos = getPosASL _car;
_car setPosATL [_tempPos select 0, _tempPos select 1, 0];	// converge to the terrain
_car setVectorUp (surfaceNormal _tempPos);
_car setvariable ["SILVIE_id",_id,true];
_car setvariable ["SILVIE_obj",if (typeof _obj == "") then {objnull} else {_obj},true];
_car addeventhandler ["killed",{
	_this spawn {
		private ["_twn","_car","_logic","_id"];
		_car = _this select 0;
		_logic = BIS_silvie_mainscope;
		waituntil {sleep 1; _logic getvariable "id" > 0};
		_id = _logic getvariable "id";
		_id = -_id;
		_twn = (_car getvariable "SILVIE_twn");
		if (typename _twn == "TEXT") then {_twn = str _twn; textLogFormat ["Log: [SILVIE]: Error in currentTown - %1",_twn]};
		_logic setvariable ["id",_id,true];
		_logic setvariable ["currentTown",_twn,true];
		[_logic,"carlist",[_car]] call bis_fnc_variablespaceremove;
	};
	[_this] call BIS_GC_trashItFunc;
}];
[_logic,"carlist",[_car]] call bis_fnc_variablespaceadd;
//_car setfuel (random 1);
//_car setdamage (random 0.5);
_car setvariable ["SILVIE_twn",_twn,true];
_car spawn (_logic getvariable "vehicleInit");

//--- Radio ;)
if (random 1 > 0.75) then {
	_eh = _car addeventhandler ["engine",{
		_car = _this select 0;
		if (!isnil {_car getvariable "SILVIE_radio"}) exitwith {};
		if (_this select 1) then {
			_car say3D "SILVIE_carradio";
			_car setvariable ["SILVIE_radio",true,true];
		};
	}];
};

//--- Diagnostic
if (_debug) then {
	_marker = createmarker [format ["car_%1",_id],position _car];
	_marker setmarkerdir (direction _car);
	_marker setmarkertypelocal "arrow";
	_marker setmarkersizelocal [.4,.4];
	_marker setmarkercolor (_this select 9);

	_objpos = _obj modeltoworld [0,0,0];
	//_objpos = position _obj;
	_bbox = boundingbox _obj;
	_b1 = _bbox select 0;
	_b2 = _bbox select 1;
	_bbx = abs(_b1 select 0) + abs(_b2 select 0);
	_bby = abs(_b1 select 1) + abs(_b2 select 1);
	_marker = createmarker [format ["car_%1_road",_id],_objpos];
	_marker setmarkerdir direction _obj;
	_marker setmarkershapelocal "rectangle";
	_marker setmarkersizelocal [_bbx/2,_bby/2];
	_marker setmarkercolor (_this select 9);

	if !(_init) then {textLogFormat ["Log: Vehicle #%2 created in %1",_twn getvariable "class",_id];};
};
