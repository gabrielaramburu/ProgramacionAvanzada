//
// Created by gabriel on 11/03/25.
//

#include "Computador.h"

#include <iostream>
#include <ostream>

int Computador::cantidadComputadores = 0; //inicilizo miembro estático

Computador::Computador(int id, string procesador, int memoriaRam) {
    this->id = id;
    this->procesador = procesador;
    this->memoriaRam = memoriaRam;
    cantidadComputadores++;
}

void Computador::apagar() {
    cout << "ON Computadora: " << this->id << " se apagará" <<endl;
}
void Computador::encender() {
    cout << "OFF Computadora: " << this->id << " encendida" <<endl;
}

void Computador::mostrarCantidadComputadoras() {
    cout << "Cantidad de computadores creados: " << cantidadComputadores << endl;
}