//
// Created by gabriel on 27/4/26.
//

#include "PantallaCasoDeUso1.h"
#include "../negocio/Sistema.h"

#include <iostream>
#include <ostream>

PantallaCasoDeUso1::PantallaCasoDeUso1() {
    //para poder interactuar con el Sistema, preciso obtener
    //una instancia del mismo (la única instancia que existe)
    this->sistema = Sistema::getInstancia();
}
void PantallaCasoDeUso1::mostrarPantalla() {
    string opcionIngresada;
    std::cout << "Pantalla Caso de Uso de Ejemplo" << std::endl;
    std::cout << "*** Informacion Disponible" << std::endl;
    list<DTInfo*> listaInfo = this->sistema->obtenerInformacion();
    for (auto dato: listaInfo) {
        std::cout << "Id:" << dato->getId()
            << ", desc." << dato->getDescripcion() << std::endl;
    }

    DTInfo* infoSeleccionado = seleccionarInfo(listaInfo);

    std::cout << "*** ¿Desea ejecuar eventoA o eventoB?:" << std::endl;
    std::cout << "*** Ingrese A o B:" << std::endl;

   cin >> opcionIngresada;
    if (opcionIngresada == "A") {
        int respuesta = this->sistema->lanzarEventoA(infoSeleccionado);
        cout << "se ejecutó evento, respuesta: " << respuesta << std::endl;
   } else if (opcionIngresada == "B") {
        string resp2 = this->sistema->lanzarEventoB(infoSeleccionado);
        cout << "se ejecutó evento, respuesta: " << resp2 << std::endl;
   } else {
        std::cout << "Error: opción incorrecta" << std::endl;
   }


}

DTInfo* PantallaCasoDeUso1::seleccionarInfo(list<DTInfo*> listaInfo) {
    //observar que en este caso, el hecho de seleccionar un elemento
    //no implica la ejecución de un evento del Sistema.
    //Es algo que ocurre en la capa de presentación
    std::cout << "*** Seleccione info:" << std::endl;
    std::cout << " Ingrese Id:" << std::endl;
    int idIngresado;
    cin >> idIngresado;
    for (auto dato: listaInfo) {
        if (dato->getId() == idIngresado) {
            std::cout << "Se selccionó el dato: " << dato->getDescripcion()
                << std::endl;
            return dato;
        }
    }
    //la lógica implementada es muy sencilla
    //se podría implementar un control para obligar al usuario
    //a que siempre devuelva algo que exista
    return nullptr;
}