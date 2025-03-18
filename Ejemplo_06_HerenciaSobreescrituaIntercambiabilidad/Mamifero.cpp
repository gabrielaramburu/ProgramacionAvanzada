//
// Created by gabriel on 18/03/25.
//

#include "Mamifero.h"

#include <iostream>
#include <ostream>
using namespace std;

Mamifero::Mamifero() {
}

void Mamifero::setTiempoGestacion(int tiempoGestacion) {
    this->tiempoGestacion = tiempoGestacion;
}

void Mamifero::mostrarTiempoGestacion() {
    cout << "Tiempo gestación: " << tiempoGestacion << endl;
}

void Mamifero::emitirSonido() {
    cout << "algun tipo de sonido sin especificar: " << endl;
}