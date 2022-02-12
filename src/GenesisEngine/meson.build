lib_src = [
    'GenApp.cpp', 
    'GenApp_OnInit.cpp', 
    'GenApp_OnEvent.cpp', 
    'GenApp_OnLoop.cpp', 
    'GenApp_OnRender.cpp', 
    'GenApp_OnCleanup.cpp', 
    'GenesisSurface/GenSurface.cpp',
    'Core/Primitives/GenPoint.cpp',
    'Core/Primitives/GenLine.cpp',
    'Core/Scene/GenLayer.cpp',
    'Core/Scene/GenScene.cpp',
    'Core/GameObject/GenGameObject.cpp']

GenesisLibrary = shared_library(
    'GenesisEngine',
    sources : lib_src,
    dependencies : deps,
    include_directories : inc_dir
)