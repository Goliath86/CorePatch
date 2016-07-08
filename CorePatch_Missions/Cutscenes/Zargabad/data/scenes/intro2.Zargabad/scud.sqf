_veh = _this;
_pos = [0, 0, 0];

sleep 2;

_SCUDS = "#particlesource" createVehicleLocal _pos;
_SCUDS setParticleRandom [2, [3, 3, 0], [3, 3, 0], 40, 0.3, [0, 0, 0, 0.1], 0, 0];
_SCUDS setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 7, 48 , 1], "", "Billboard", 1, 10, [0, 0, 0],
				[0, 0, 0], 0, 10.2, 7.9, 0.5, [2,12,15,18,20], 
				[[0.9, 0.8, 0.7, 0.35],[0.9, 0.8, 0.7, 0]], 
				[0.8,0.3,0.25], 0.1, 0.15, "", "", "", 360];
_SCUDS attachto [_veh,[0,0,0],"SCUD"];
_SCUDS setDropInterval 0.005;

sleep 1;

_SCUDF = "#particlesource" createVehicleLocal _pos;
_SCUDF setParticleRandom [0.05, [0, 0, 0], [0, 0, 0], 100, 0.1, [0, 0, 0, 0], 0, 0];
_SCUDF setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 3, 48 , 0], "", "Billboard", 1, 0.15, [0, 0, 0],
				[0, 0, 0], 0, 10.5, 7.9, 0.2, [1,0], 
				[[1, 1, 1, -8],[1, 1, 1, 0]], 
				[1], 0.1, 0.4, "", "", _pos, 360];
_SCUDF attachto [_veh,[0,0,0],"SCUD"];
_SCUDF setDropInterval 0.0025;

_SCUDS2 = "#particlesource" createVehicleLocal _pos;
_SCUDS2 setParticleRandom [2, [0.5, 0.5, 0], [0.5, 0.5, 0], 35, 0.3, [0, 0, 0, 0.1], 0, 0];
_SCUDS2 setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 8 , 0], "", "Billboard", 1, 10, [0, 0, 0],
				[0, 0, 0], 0, 10.2, 7.9, 0.5, [2,10], 
				[[0.65, 0.65, 0.65, 0.5],[1, 1, 1, 0]], 
				[0.8,0.3,0.25], 0.1, 0.15, "", "", "", 360];
_SCUDS2 attachto [scud,[0,0,0],"SCUD"];
_SCUDS2 setDropInterval 0.005;

sleep 1.05;
deleteVehicle _SCUDS;

// ZMIZENI
sleep 7;
deleteVehicle _SCUDF;
deleteVehicle _SCUDS2;
