//
// Created by gabriel on 18/03/25.
//

#ifndef MAMIFERO_H
#define MAMIFERO_H
#include "Animal.h"


class Mamifero : public Animal{
protected:
    int tiempoGestacion;
private:
public:
    Mamifero();
    void setTiempoGestacion(int tiempo);
    void mostrarTiempoGestacion();
    void virtual emitirSonido(); //observar la palabra reservada virtual


};



#endif //MAMIFERO_H
