//
// Created by gabriel on 10/03/25.
//

#include "Persona.h"

#include <iostream>
#include <ostream>
#include <string>
using namespace std;

void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}
void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrarInformacion() {
    cout << "Nombre: " << this->nombre << " edad, " << this-> edad << endl;
}
