
DisableSerialization;

_d = _this select 0;
while {!IsNull _d} do {
	while {player Ammo "Javelin" != 0 and !IsNull _d} do {Sleep 0.1;};
	if (!IsNull _d) then {(_d DisplayCtrl 2468) CtrlSetTextColor [0.8745, 0.2941, 0.2157, 1.0000];};
	while {player Ammo "Javelin" == 0 and !IsNull _d} do {Sleep 0.1;};
	if (!IsNull _d) then {(_d DisplayCtrl 2468) CtrlSetTextColor [0.0000, 0.0000, 0.0000, 0.0000];};
};
