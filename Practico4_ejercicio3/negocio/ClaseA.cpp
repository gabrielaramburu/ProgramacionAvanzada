//
// Created by gabriel on 19/05/25.
//

#include "ClaseA.h"

#include <iostream>
#include <ostream>

bool ClaseA::incluir(int valor) {
    bool incluir = false;
    for (auto instRelacion: this->instanciasR) {
        int v = instRelacion->getValor();
        if (v > valor) {
            incluir = true;
            break;
        }
    }
    return incluir;
}

int ClaseA::getId() {
    return this->idA;
}

void ClaseA::agregarRelacion(ClaseR* relacion) {
    this->instanciasR.push_back(relacion);
}