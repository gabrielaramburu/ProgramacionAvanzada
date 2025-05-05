//
// Created by gabriel on 18/03/25.
//

#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo() {
}

Rectangulo::~Rectangulo() {
}

float Rectangulo::calcularArea() {
    float area = base * altura;
    cout << " Area del Rectángulo: " << to_string(area);
    return area;
}

string Rectangulo::toString() {
    return "soy un rectángulo";
}