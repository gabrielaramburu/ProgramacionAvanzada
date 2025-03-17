//
// Created by gabriel on 17/03/25.
//

#include "Casa.h"

#include <iostream>
#include <ostream>
#include <string>

Casa::Casa() {

}
Casa::Casa(string calle, int nroPuerta, string ciudad) {
    this->calle = calle;
    this->nroPuerta = nroPuerta;
    this->ciudad = ciudad;

}
void Casa::mostrarDireccion() {
    cout << "calle:" << this->calle << endl;
    cout << "nroPuerta: " << this->nroPuerta << endl;
    cout << "cidudad: " << this->ciudad << endl;
}
