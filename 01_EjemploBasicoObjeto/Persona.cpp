//
// Created by gabriel on 10/03/25.
//

#include "Persona.h"

#include <iostream>
#include <ostream>
#include <string>
using namespace std;

void Persona::setNombre(string nom) {
    this->nombre = nom;
}
void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrarInformacion() {
    cout << "Soy " << this->nombre << ", mi edad es " << this-> edad << endl;
}
