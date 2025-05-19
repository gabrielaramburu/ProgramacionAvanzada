//
// Created by gabriel on 19/05/25.
//

#include "Controlador.h"

#include <iostream>

#include "ClaseA.h"
#include <list>

using namespace std;

Controlador::Controlador() {
    ClaseB * b1 = new ClaseB(1);
    ClaseB * b2 = new ClaseB(2);
    ClaseB * b3 = new ClaseB(3);

    ClaseR *r1 = new ClaseR(10, b1);
    ClaseR *r2 = new ClaseR(20, b2);
    ClaseR *r3 = new ClaseR(30, b3);

    ClaseR *r4 = new ClaseR(25, b1);
    ClaseR *r5 = new ClaseR(27, b3);

    ClaseA *a1 = new ClaseA(1);
    a1->agregarRelacion(r1);
    a1->agregarRelacion(r2);
    a1->agregarRelacion(r3);

    ClaseA *a2 = new ClaseA(2);
    a2->agregarRelacion(r4);

    ClaseA *a3 = new ClaseA(3);
    a3->agregarRelacion(r5);

    this->instanciasClaseA.push_back(a1);
    this->instanciasClaseA.push_back(a2);
    this->instanciasClaseA.push_back(a3);
}

list<int> Controlador::obtenerInstanciasA(int valor) {
    bool incluir;
    list<int> instanciasIncluidas;
    for (ClaseA * claseA: this->instanciasClaseA) {

        incluir = claseA->incluir(valor);
        if (incluir) {
            instanciasIncluidas.push_back(claseA->getId());
        }
    }
    return instanciasIncluidas;
}