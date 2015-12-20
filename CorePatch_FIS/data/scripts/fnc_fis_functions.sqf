
/////////////////Dwarden fixing fire in the sky bug

BIS_Effects_globalEvent = 
{
	BIS_effects_gepv = _this;
	publicVariable "BIS_effects_gepv";
     _this call BIS_Effects_startEvent;
};

BIS_Effects_startEvent = 
{
	switch (_this select 0) do 
	{
     		case "AirDestruction": 
		{
           	[_this select 1] spawn BIS_Effects_AirDestruction;
		};
           case "AirDestructionStage2": 
		{
           	[_this select 1, _this select 2, _this select 3] spawn BIS_Effects_AirDestructionStage2;
		};
           case "Burn": 
		{
           	[_this select 1, _this select 2, _this select 3, false, true] spawn BIS_Effects_Burn;
		};
	};
};

"BIS_effects_gepv" addPublicVariableEventHandler {(_this select 1) call BIS_Effects_startEvent;};

