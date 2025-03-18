//
// Created by gabriel on 18/03/25.
//
#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal() {
}
Animal::~Animal() {

}
void Animal::mostrarTamanio(){
    cout << "Tamaño animal " << this->tamanio << endl;
}
void Animal::setTamanio(int tamanio) {
    this->tamanio = tamanio;
}