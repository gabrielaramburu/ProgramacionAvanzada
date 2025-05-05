//
// Created by gabriel on 18/03/25.
//

#include "Triangulo.h"

#include <iostream>
using namespace std;

Triangulo::Triangulo() {
}

Triangulo::~Triangulo() {
}

//implementado método anstracto
float Triangulo::calcularArea() {
    float area = (this->base * this->altura) / 2;
    cout << " Area del Triángulo: " << to_string(area);
    return area;
}

string Triangulo::toString(){
    return "soy un triangulo";
}