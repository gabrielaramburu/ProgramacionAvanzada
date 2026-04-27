//
// Created by gabriel on 27/4/26.
//

#include "DTInfo.h"

DTInfo::DTInfo(int id, string descripcion) {
    this->id = id;
    this->descripcion = descripcion;
}

string DTInfo::getDescripcion() {
    return this->descripcion;
}

int DTInfo::getId() {
    return this->id;
}
