/*
	This script hides and shows back missile proxy on ACR BMP-1 model

	by Sa-Matra
*/

_ammo		= _this select 4;
_projectile	= _this select 6;

if(
	// If projectile is local
	local _projectile &&

	// And it is really ammo that was shot (Projectile can be previous one when vehicle is remote)
	typeOf _projectile == _ammo &&

	// If projectile is missile so it shows up on maverickWeapon type proxy on model
	getText(configFile >> "CfgAmmo" >> _ammo >> "simulation") == "shotMissile"
) then {
	_vehicle	= _this select 0;
	_weapon		= _this select 1;

	// Hide proxy
	_vehicle animate ["ATGM_hide", 1];

	// Mid-magazine reload time
	_time = getNumber(configFile >> "CfgWeapons" >> _weapon >> "reloadTime");

	/*
	// Remaining ammo in magazine
	_ammo = _vehicle ammo _weapon;

	// If new magazine was loaded
	if(_ammo == getNumber(configFile >> "CfgMagazines" >> currentMagazine _vehicle >> "count")) then {
		// Then we need to account for magazine reload time
		_time = _time + getNumber(configFile >> "CfgWeapons" >> _weapon >> "magazineReloadTime");
	};
	*/

	// Terminate previous script just in case
	terminate (_vehicle getVariable ["ATGM_hide_thread", Corepatch_scriptNull]);

	// Show proxy back with delay
	_vehicle setVariable ["ATGM_hide_thread", [_vehicle, _time] spawn {
		// Wait
		sleep ((_this select 1) - 1e-2);

		// Show proxy
		(_this select 0) animate ["ATGM_hide", 0];
	}];
};
