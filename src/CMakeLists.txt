cmake_minimum_required (VERSION 3.8)

add_executable (25.4.2
                main.cpp        cpu.cpp        disk.cpp        
                gpu.cpp         kbd.cpp        ram.cpp)
target_include_directories (25.4.2 PUBLIC ${MY_INCLUDE_PATH})