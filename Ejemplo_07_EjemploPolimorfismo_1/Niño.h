//
// Created by gabriel on 18/03/25.
//

#ifndef NIÑO_H
#define NIÑO_H
#include "PersonaPoli.h"
#include "../01_EjemploBasicoObjeto/Persona.h"


class Niño :public PersonaPoli{
public:
    Niño();
    void formaDeAprender() override;
};



#endif //NIÑO_H
