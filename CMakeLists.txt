cmake_minimum_required(VERSION 3.24)
project(Sistema_Huespedes_Maria_Valeria)

include_directories(lib)
include_directories(src)
include_directories(test)

add_subdirectory(lib/googleTest)
add_subdirectory(src)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sistema_Huespedes_Maria_Valeria main.cpp src/Propietario.cpp src/Propietario.h src/Huesped.cpp src/Huesped.h src/hogar.cpp src/hogar.h src/Reserva.cpp src/Reserva.h src/Evaluacion.cpp src/Evaluacion.h src/main.cpp test/main.cpp src/Sistema.cpp src/Sistema.h)
