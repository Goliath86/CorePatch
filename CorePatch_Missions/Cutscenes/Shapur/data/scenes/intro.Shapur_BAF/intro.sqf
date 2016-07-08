1 cuttext ["","black in",999];
0 fadesound 0;
0 setovercast (random 0.4);
_camera = "camera" camcreate [1285.73,1321.89,10.37];
_camera cameraeffect ["internal","back"];
showcinemaborder false;
BIS_WeatherParticles_logic setvariable ["center",_camera];

waituntil {preloadCamera [1285.73,1321.89,10.37] || time > 5};

"colorcorrections" ppeffectenable true;
"colorcorrections" ppeffectadjust [1, 1, -0.01, [0.0, 0.5, 1.0, -0.02], [1.0, 0.96, 0.66, 0.75], [0.9, 0.9, -0.0, 0.0]];
"colorcorrections" ppeffectcommit 0;

//createdialog "rscdisplaymain";

//--- Chimney smoke
_sizeCoef = 0.5;
{
	_object = _x;
	for "_i" from 0 to 10 do {
		_pos = _object selectionposition format ["AIChimney_large_%1",_i];

		if (_pos distance [0,0,0] == 0) exitwith {};

		_worldpos = (_object modeltoworld _pos);
		_PSx = "#particlesource" createVehicleLocal _worldpos;
		_PSx setParticleCircle [0, [0, 0, 0]];
		_PSx setParticleRandom [1, [0, 0, 0], [0.2, 0.2, 0.1], 2, 0.2, [0.05, 0.05, 0.05, 0.05], 0, 0];
		_PSx setParticleParams [["\Ca\Data\ParticleEffects\Universal\universal.p3d", 16, 8, 16], "", "Billboard", 1, (22 + random 12), [0,0,0], [0, 0, 0.2*2 + random 1.5], 1, 1.275, 1, 0.066, [2*_sizeCoef, 10*_sizeCoef, 20*_sizeCoef, 30*_sizeCoef], [[0.2, 0.2, 0.2*1.2, 0.1 + random 0.2], [0.5, 0.5, 0.5*1.2, 0.05], [0.7, 0.7, 0.7*1.2, 0]], [0], 1, 0, "", "", ""];
		_PSx setDropInterval .3;
	};
} foreach (position cameraon nearobjects ["house",300]);

while {true} do {
	setdate [2012,7,7,6 + random 6,0];
	0 setovercast random 0.4;
	1 cuttext ["","black in",3];
	playmusic "BAF_Track01"; // 124
	0 fademusic 0.0;
	1 fademusic 0.3;

	_camera camPrepareTarget [-62038.46,78245.29,-8447.71];
	_camera camPreparePos [1285.73,1321.89,10.37];
	_camera camPrepareFOV 0.268;
	_camera camCommitPrepared 0;
		_camera camPrepareTarget [-62143.54,78153.04,6241.61];
		_camera camPreparePos [1390.54,1181.84,6.84];
		_camera camPrepareFOV 0.268;
		_camera camCommitPrepared 124;

	waituntil {camcommitted _camera};
	1 cuttext ["","black out",3];
	sleep 4;
};
