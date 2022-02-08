subdir('GenesisEngine')

main_src = ['main.cpp']

exec = executable(
    'Test', 
    sources : main_src,
    link_with : [GenesisLibrary],
    dependencies : deps,
    include_directories : inc_dir,
    install : true
)