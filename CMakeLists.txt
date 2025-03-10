cmake_minimum_required(VERSION 3.30)
project(2025)

set(CMAKE_CXX_STANDARD 20)

add_executable(2025 main.cpp
        01_EjemploBasicoObjeto/Persona.cpp
        01_EjemploBasicoObjeto/Persona.h
        02_EjemploBasicoConstructor/Automovil.cpp
        02_EjemploBasicoConstructor/Automovil.h)
