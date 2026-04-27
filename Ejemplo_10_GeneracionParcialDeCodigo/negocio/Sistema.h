//
// Created by gabriel on 27/4/26.
//

#ifndef INC_2025_SISTEMA_H
#define INC_2025_SISTEMA_H
#include "ISistema.h"

//Esta clase es un Singleton, este patrón se verá más adelante
//cuando estemos en la etapa de Diseño

//Lo importante en esta etapa es ver que Sistema implementa
//la interface ISistema
class Sistema : public ISistema{
private:
    Sistema();
    static Sistema* instancia;
public:
    virtual ~Sistema();
    static Sistema* getInstancia();

    list<DTInfo*> obtenerInformacion();
    int lanzarEventoA(DTInfo* info);
    string lanzarEventoB(DTInfo* info);
};


#endif //INC_2025_SISTEMA_H
