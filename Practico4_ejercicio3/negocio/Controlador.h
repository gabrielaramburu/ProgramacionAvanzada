//
// Created by gabriel on 19/05/25.
//

#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "ClaseA.h"
#include "ISistema.h"


class Controlador: public ISistema {
private:
    list<ClaseA*> instanciasClaseA;
public:
    Controlador();

    list<int> obtenerInstanciasA(int valor);
};



#endif //CONTROLADOR_H
