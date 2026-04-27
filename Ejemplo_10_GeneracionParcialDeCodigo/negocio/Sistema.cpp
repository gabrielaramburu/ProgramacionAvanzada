//
// Created by gabriel on 27/4/26.
//
#include <iostream>
#include "Sistema.h"
#include "DTInfo.h"

// DEFINICIÓN de los miembros estáticos (¡no olvidar!)
Sistema* Sistema::instancia = nullptr;

Sistema::~Sistema() {

}
Sistema::Sistema() {

}
list<DTInfo*> Sistema::obtenerInformacion() {
    //en esta instancia (análisis) no me interesa programar
    //como se obtienen los datos devueltos (lógica de negocio)
    list<DTInfo*> lista;
    lista.push_back(new DTInfo(1, "infoA"));
    lista.push_back(new DTInfo(2,"infoB"));
    lista.push_back(new DTInfo(3, "infoC"));

    return lista;
};
int Sistema::lanzarEventoA(DTInfo* info) {
    //En esta etapa (construcción del prototipo)
    //mo me interesa implementar lógica de negocio
    //el 10 representa cualquier valor valido posible
    return 10;
}
string Sistema::lanzarEventoB(DTInfo* info) {
    //en esta etapa no me interesa que devolver
    return "EventoB procesado" + info->getId();
}

Sistema* Sistema::getInstancia() {
    //siempre tengo una unica instancia del Sistema
    //esto se profundizará en la etapa de Disño/Implementación
    if (Sistema::instancia==nullptr){
        Sistema::instancia = new Sistema();
    }
    return Sistema::instancia;
}