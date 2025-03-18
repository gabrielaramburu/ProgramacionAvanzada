//
// Created by gabriel on 18/03/25.
//

#include "Perro.h"
#include <iostream>
using namespace std;

Perro::Perro() {
}

Perro::Perro(string nombre) {
    this->nombre = nombre;
}

void Perro::emitirSonido() {
    cout << "Sonido: Gua gua" << endl;
}
