scriptName "\CorePatch\CorePatch_GC\data\scripts\process_queue.sqf";
/*
	File: process_queue.sqf
	Related: garbagecollector.fsm
	Author: Joris-Jan van 't Land

	Description:
	Process the garbage queue for the Garbage Collector FSM.
*/

//TODO: dangerous and does not work on dedicated server. Allow registering important units to the GC through a function?
private ["_mainGrp", "_queue","_i"];
_mainGrp = group player;

waitUntil{!isNil "BIS_GC"};

//--- Execute Functions
if (isnil "bis_fnc_init") then {
	(group BIS_GC) createunit ["FunctionsManager",position player,[],0,"none"];
};
waituntil {!isnil "BIS_fnc_init"};

waitUntil{typeName (BIS_GC getVariable "queue") == "ARRAY"};

_queue = BIS_GC getVariable "queue";

_dist = BIS_GC getVariable "distanceObject";

if (isNil "_dist") then
{
	_dist = 500;
	BIS_GC setVariable ["distanceObject", 500, true];
};

_i = 0;
{
	private ["_entry", "_time"];
	_entry = _x;
	_time = _entry select 1;

	//Check the object was in the queue for at least the assigned time (expiry date).
	if (_time <= time) then
	{
		private ["_object"];
		_object = _entry select 0;

		switch (typeName _object) do
		{
			case (typeName objNull):
			{
				//Player and his squadmates cannot be too close.
				//ToDo: use 'cameraOn' as well?
				if (({(_x distance _object) <= _dist} count ([] call BIS_fnc_listPlayers)) == 0) then
				{
					deleteVehicle _object;
					_queue set [_i, -1];
				};
			};

			case (typeName grpNull):
			{
				//Make sure the group is empty.
				if (({alive _x} count (units _object)) == 0) then
				{			
					deleteGroup _object;
					_queue set [_i, -1];
				};
			};

			default {};
		};
	};
	_i = _i + 1;
} forEach _queue;

_queue = _queue - [-1];
BIS_GC setVariable ["queue", _queue, true];

true