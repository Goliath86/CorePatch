//setdate [2012,ceil random 12,4,7 + random 4,0];
//0 setovercast 0.4;
//sleep 0.01;

0 fadesound 0;
titletext ["","black in",999999];

_center = position player;//[3600,3555,0];
_camera = "camera" camcreate [6110.79,3738.93,49.82];
_camera cameraeffect ["internal","back"];
_camera campreparetarget _center;

showcinemaborder false;
bis_camera = _camera;

setacctime 0;
waituntil {preloadcamera [3598.97,4612.78,0.97]};
waituntil {!isnil "BIS_WeatherPostprocess_init"};
setacctime 1;

playmusic "EP1_Track07";
0 fademusic 0.2;
titletext ["","black in",3];


_camera camPrepareTarget [84692.27,-53665.18,-5407.03];
_camera camPreparePos [3598.97,4612.78,0.97];
_camera camPrepareFOV 0.252;
_camera camCommitPrepared 0;

_camera camPrepareTarget [32091.24,-90695.67,10056.88];
_camera camPreparePos [3611.42,4628.26,1.36];
_camera camPrepareFOV 0.241;
_camera camCommitPrepared 30;



sleep (25);
{
	_x action ["scudlaunch",_x];
	sleep (0.1 + random 0.3);
} foreach [scud_1,scud_2,scud_3];

//--- Scuds prepared
waituntil {scudstate scud_1 >= 2};
sleep 4;

//--- Ignition
{
	_x action ["scudstart",_x];
	//_x execvm "scud.sqf";
	sleep (0.3 + random 0.2);
} foreach [scud_1,scud_2,scud_3];
waituntil {scudstate scud_1 >= 3.4};

_tx = 32091.24;
_ty = -90695.67;
_tz = 10056.88;
_steps = 42;
for "_i" from 1 to _steps do {
	_d = 0.24 / _i;
	_camera camPrepareTarget [
		_tx+(1 - _d + random (2 * _d))*_tx,
		_ty+(1 - _d + random (2 * _d))*_ty,
		_tz+(1 - _d + random (2 * _d))*_tz
	];
	_camera camCommitPrepared 0.01;
	sleep 0.01;
};

sleep 10;
_camera camPrepareTarget [60822.64,-77046.91,5155.81];
_camera camPreparePos [3546.61,4750.73,16.83];
_camera camPrepareFOV 0.324;
_camera camCommitPrepared 120;
