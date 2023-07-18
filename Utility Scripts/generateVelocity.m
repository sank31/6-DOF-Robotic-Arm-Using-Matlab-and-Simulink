% Copyright 2008-2019 The MathWorks, Inc.

%{
Starting from desired joint position, this scripts evaluates the
corresponding desired joint velocity
%}

load jointMotion;

tsVelocity = velTimeSeriesGeneration(faMotion{1});
faMotion = addElement(faMotion,tsVelocity);

tsVelocity = velTimeSeriesGeneration(gaMotion{1});
gaMotion = addElement(gaMotion,tsVelocity);

tsVelocity = velTimeSeriesGeneration(lfMotion{1});
lfMotion = addElement(lfMotion,tsVelocity);

tsVelocity = velTimeSeriesGeneration(rfMotion{1});
rfMotion = addElement(rfMotion,tsVelocity);

tsVelocity = velTimeSeriesGeneration(uaMotion{1});
uaMotion = addElement(uaMotion,tsVelocity);

tsVelocity = velTimeSeriesGeneration(waMotion{1});
waMotion = addElement(waMotion,tsVelocity);

clear tsVelocity;
save jointMotionAndVel;