//
// Created by gabriel on 17/03/25.
//

#include "Person.h"
#include "Casa.h"

#include <iostream>
#include <ostream>

Person::Person(string nombre, int edad, Casa * casa) {
    this->nombre = nombre;
    this->edad = edad;
    this->casa = casa;
}

void Person::mostrar() {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Edad: " << this->edad << endl;
    this->casa->mostrarDireccion();
}

