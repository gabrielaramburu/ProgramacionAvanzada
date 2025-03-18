//
// Created by gabriel on 18/03/25.
//

#ifndef GATO_H
#define GATO_H
#include "Mamifero.h"
#include <iostream>
using namespace std;

class Gato : public Mamifero{
private:
    string nombre;
public:
    Gato();
    Gato(string nombre);
    void emitirSonido() override;
protected:
};



#endif //GATO_H
