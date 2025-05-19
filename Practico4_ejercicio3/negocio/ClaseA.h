//
// Created by gabriel on 19/05/25.
//

#ifndef CLASEA_H
#define CLASEA_H
#include <list>

#include "ClaseR.h"
using namespace std;

class ClaseA {
private:
    int idA;
    list<ClaseR*> instanciasR;

public:
    ClaseA(int idA) : idA(idA) {} //una forma abreviada de constructor
    bool incluir(int valor);
    int getId();
    void agregarRelacion(ClaseR* relacion);

};



#endif //CLASEA_H
