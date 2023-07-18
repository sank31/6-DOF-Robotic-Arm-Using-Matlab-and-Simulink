% Copyright 2008-2019 The MathWorks, Inc.

%{
Given a timeseries object representing position (piecewise-linear signal),
% this function returns a timseries object representing the corresponding
% velocity (piecewise-constant signal)
%}

function tsVelocity = velTimeSeriesGeneration(tsPosition)

time = tsPosition.Time;
position = tsPosition.Data;
velocity = diff(position)./diff(time);

vel = zeros(length(velocity)*2,1);
t = zeros(length(vel),1);

vel(1:2:end) = velocity;
vel(2:2:end) = velocity;
t(2:2:end-1) = time(2:end-1);
t(3:2:end-1) = time(2:end-1);
t(end) = time(end);

tsVelocity = timeseries(vel, t, 'Name', [tsPosition.Name 'vel']);

end