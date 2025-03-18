//
// Created by gabriel on 18/03/25.
//

#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <string>

#include "Figura.h"

using namespace std;

class Rectangulo  : public Figura {
public:
    Rectangulo();
    virtual ~Rectangulo();
    float virtual calcularArea();
    virtual string toString();
};




#endif //RECTANGULO_H
