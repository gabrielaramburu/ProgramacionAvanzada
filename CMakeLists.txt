cmake_minimum_required(VERSION 3.30)
project(2025)

set(CMAKE_CXX_STANDARD 20)

add_executable(2025 main.cpp
        01_EjemploBasicoObjeto/Persona.cpp
        01_EjemploBasicoObjeto/Persona.h
        02_EjemploBasicoConstructor/Automovil.cpp
        02_EjemploBasicoConstructor/Automovil.h
        03_EjemploMiembroDeClase/Computador.cpp
        03_EjemploMiembroDeClase/Computador.h
        Ejemplo_04_AsociacionMultiplicadad_1/Person.cpp
        Ejemplo_04_AsociacionMultiplicadad_1/Person.h
        Ejemplo_04_AsociacionMultiplicadad_1/Casa.cpp
        Ejemplo_04_AsociacionMultiplicadad_1/Casa.h
        Ejemplo_05_AsociacionMultiplicidadN/Biblioteca.cpp
        Ejemplo_05_AsociacionMultiplicidadN/Biblioteca.h
        Ejemplo_05_AsociacionMultiplicidadN/Libro.cpp
        Ejemplo_05_AsociacionMultiplicidadN/Libro.h
)
