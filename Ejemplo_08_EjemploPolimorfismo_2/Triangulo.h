//
// Created by gabriel on 18/03/25.
//

#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>

#include "Figura.h"
using namespace std;

class Triangulo : public Figura{
public:
    Triangulo();
    virtual ~Triangulo();
    float virtual calcularArea();
    virtual string toString();
};


#endif //TRIANGULO_H
