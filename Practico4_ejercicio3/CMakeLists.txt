cmake_minimum_required(VERSION 3.30)
project(Practico4_ejercicio3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Practico4_ejercicio3 presentacion/main.cpp
        negocio/ClaseA.cpp
        negocio/ClaseA.h
        negocio/ClaseB.cpp
        negocio/ClaseB.h
        negocio/ClaseR.cpp
        negocio/ClaseR.h
        negocio/ISistema.h
        negocio/Controlador.cpp
        negocio/Controlador.h)
