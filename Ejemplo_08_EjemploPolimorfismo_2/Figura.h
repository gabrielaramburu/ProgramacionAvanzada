//
// Created by gabriel on 18/03/25.
//

#ifndef FIGURA_H
#define FIGURA_H
#include <string>

using namespace std;

class Figura {
protected:
    float base;
    float altura;

public:
    Figura();
    virtual ~Figura();
    virtual float calcularArea()=0; //este método es abstracto
    void setAltura(int altura);
    void setBase(int base);
    virtual string toString()=0;
};



#endif //FIGURA_H
