/*
	This script hides and shows back missile proxy on ACR BMP-1 model.

	Call only on server Fired event handler.

	by Sa-Matra
*/

// Check if fired shot is missile
if(getText(configFile >> "CfgAmmo" >> (_this select 4) >> "simulation") == "shotMissile") then {
	// Vehicle
	_vehicle = _this select 0;

	// Hide proxy
	_vehicle animate ["ATGM_hide", 1];

	// Terminate previous script just in case
	terminate (_vehicle getVariable ["ATGM_hide_thread", Corepatch_scriptNull]);

	// Show proxy back with delay
	_vehicle setVariable ["ATGM_hide_thread", [_vehicle, getNumber(configFile >> "CfgWeapons" >> (_this select 1) >> "reloadTime")] spawn {
		// Wait
		sleep ((_this select 1) - 1e-2);

		// Show proxy
		(_this select 0) animate ["ATGM_hide", 0];
	}];
};
