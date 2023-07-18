% Copyright 2008-2019 The MathWorks, Inc.

p = slproject.getCurrentProject;
projectRoot = p.RootFolder;

% Set the location of slprj to be the "Work" folder of the current project:
myCacheFolder = fullfile(projectRoot, 'work');
if ~exist(myCacheFolder, 'dir')
    mkdir(myCacheFolder)
end

Simulink.fileGenControl('set', 'CacheFolder', myCacheFolder,'CodeGenFolder', myCacheFolder);