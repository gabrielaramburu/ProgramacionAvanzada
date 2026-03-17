//
// Created by gabriel on 10/03/25.
//

#include "Automovil.h"

#include <iostream>
#include <ostream>



Automovil::~Automovil() {
    cout << "Invocando destructor" << "\n";
};



Automovil::Automovil(string mat, string color) {
    this->matricula = mat;
    this->color = color;
}

void Automovil::mostrarInformacion() {
    cout << "Matrícula: " << this->matricula << ", color:" << this->color << endl;
}
