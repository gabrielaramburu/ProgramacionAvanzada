//
// Created by gabriel on 19/05/25.
//

#include "ClaseR.h"
#include "ClaseB.h"

ClaseR::ClaseR(int valor, ClaseB *claseB) {
    this->valor = valor;
    this->claseB = claseB;
}

int ClaseR::getValor() {
    return this->valor;
}