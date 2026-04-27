//
// Created by gabriel on 27/4/26.
//

#ifndef INC_2025_PANTALLACASODEUSO1_H
#define INC_2025_PANTALLACASODEUSO1_H
//observar como se incluye el camino relativo
#include "../negocio/ISistema.h"

class PantallaCasoDeUso1 {
private:
    ISistema* sistema;
    DTInfo* seleccionarInfo(list<DTInfo*> listaInfo);
public:
    PantallaCasoDeUso1();
    void mostrarPantalla();
};


#endif //INC_2025_PANTALLACASODEUSO1_H
