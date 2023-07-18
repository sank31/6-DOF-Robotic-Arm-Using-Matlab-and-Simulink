% Copyright 2008-2019 The MathWorks, Inc.

%% Position Control Parameter

pName = [gcs '/Controller/Servomotor Position Controller/'];


PosControl.UA.Kp = 116 * h;
PosControl.UA.Ki = 966 * h;
PosControl.UA.Kd = 0.54 * h;
PosControl.UA.N = 190 * h;

setPosControlParams([pName 'PID Controller'],PosControl.UA);


PosControl.FA.Kp = 23.83 * h;
PosControl.FA.Ki = 183.6 * h;
PosControl.FA.Kd = 0.63 * h;
PosControl.FA.N = 230 * h;

setPosControlParams([pName 'PID Controller1'],PosControl.FA);


PosControl.WA.Kp = 93.6 * h;
PosControl.WA.Ki = 729.75 * h;
PosControl.WA.Kd = 0.62 * h;
PosControl.WA.N = 740.7 * h;

setPosControlParams([pName 'PID Controller2'],PosControl.WA);


PosControl.GA.Kp = 60.39 * h;
PosControl.GA.Ki = 41.75 * h;
PosControl.GA.Kd = 0.67 * h;
PosControl.GA.N = 735.4 * h;

setPosControlParams([pName 'PID Controller3'],PosControl.GA);


PosControl.RFA.Kp = 85 * h;
PosControl.RFA.Ki = 704 * h;
PosControl.RFA.Kd = 0.72 * h;
PosControl.RFA.N = 243.5 * h;

setPosControlParams([pName 'PID Controller4'],PosControl.RFA);


PosControl.LFA.Kp = 116 * h;
PosControl.LFA.Ki = 966 * h;
PosControl.LFA.Kd = 0.54 * h;
PosControl.LFA.N = 190 * h;

setPosControlParams([pName 'PID Controller5'],PosControl.LFA);



%% Velocity Control Parameters

sName = [gcs '/Controller/Servomotor Speed Controller/'];


VelControl.UA.Kp = 0.08 * k;
VelControl.UA.Ki = 1.75 * k;

setVelControlParams([sName 'PID Controller'],VelControl.UA);


VelControl.FA.Kp = 0.0076 * k;
VelControl.FA.Ki = 0.092 * k;

setVelControlParams([sName 'PID Controller1'],VelControl.FA);


VelControl.WA.Kp = 0.02 * k;
VelControl.WA.Ki = 0.07 * k;

setVelControlParams([sName 'PID Controller2'],VelControl.WA);


VelControl.GA.Kp = 0.002 * k;
VelControl.GA.Ki = 0.04 * k;

setVelControlParams([sName 'PID Controller3'],VelControl.GA);


VelControl.RFA.Kp = 0.0045 * k;
VelControl.RFA.Ki = 0.03 * k;

setVelControlParams([sName 'PID Controller4'],VelControl.RFA);


VelControl.LFA.Kp = 0.0045 * k;
VelControl.LFA.Ki = 0.03 * k;

setVelControlParams([sName 'PID Controller5'],VelControl.LFA);