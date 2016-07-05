scriptName "GarbageCollector\data\scripts\init.sqf";
/*
	File: init.sqf
	Author: Joris-Jan van 't Land

	Description:
	Initialize the Garbage Collector (GC).

	Parameter(s):
	_this: the Logic object representing the GC.
*/

if (isServer) then
{
	//Check to make sure no other GC is active.
	if (isNil "BIS_GC") then 
	{
		//Global variable used to make sure only one instance is active.
		BIS_GC = _this;		
		
		private ["_fsm"];
		_fsm = _this execFSM "\CorePatch\CorePatch_Modules\GarbageCollector\data\fsms\garbagecollector.fsm";
		
		//private ["_hello", "_hello2"];
		//_hello = _this setPos (position _this); if (isnil "_hello") then {_hello = false};
		//_hello2 = _this playMove ""; if (isnil "_hello2") then {_hello2 = false};
		//_hello = true;
		false call (compile (preprocessFileLineNumbers "ca\modules\functions\misc\fn_initCounter.sqf"));
	}
	else
	{
		deleteVehicle _this;
	};
};

true
