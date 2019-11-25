add_executable(shell-app main.cpp PID_Controller.cpp PID_Interface.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
