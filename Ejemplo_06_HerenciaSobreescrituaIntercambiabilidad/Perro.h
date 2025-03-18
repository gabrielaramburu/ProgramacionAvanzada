//
// Created by gabriel on 18/03/25.
//

#ifndef PERRO_H
#define PERRO_H
#include "Mamifero.h"
#include <iostream>
using namespace std;

class Perro : public Mamifero{
private:
    string nombre;
public:
    Perro();
    Perro(string nombre);

    void emitirSonido() override;
protected:
};



#endif //PERRO_H
