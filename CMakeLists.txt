cmake_minimum_required(VERSION 3.14)

project(PASSWORD_MANAGER)


#export configuration to source code
configure_file(cmake/Password_ManagerConfig.h.in Password_ManagerConfig.h)

# specify the C++ standard
# use the CMAKE_CXX_STANDARD variable
set(CMAKE_CXX_STANDARD  11)
set(CMAKE_CXX_STANDARD_REQUIERED TRUE)

#======================= INCLUSION OF Qt =======================#
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH $ENV{QTDIR})

find_package(Qt6 CONFIG REQUIRED COMPONENTS Widgets)
find_package(Qt6Core REQUIRED)
find_package(Qt6Widgets REQUIRED)


#about libraries
add_subdirectory(src)

add_executable(PASSWORD_MANAGER
    mainwindow.ui
    mainwindow.cpp
    mains/main.cpp
)

#add_executable(PASSWORD_MANAGER
#    main.cpp
#)

target_link_libraries(PASSWORD_MANAGER PUBLIC pass_mana Qt6::Widgets)