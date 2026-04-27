//
// Created by gabriel on 27/4/26.
//

#ifndef INC_2025_ISISTEMA_H
#define INC_2025_ISISTEMA_H
#include <list>
#include "DTInfo.h"

//Esta es la interface del Sistema
//La manera de implentar un interface en c++ es haciendo
//una clase abstracta.
class ISistema {
public:
    virtual list<DTInfo*> obtenerInformacion()=0;
    virtual int lanzarEventoA(DTInfo* info)=0;
    virtual string lanzarEventoB(DTInfo* info)=0;
};


#endif //INC_2025_ISISTEMA_H
