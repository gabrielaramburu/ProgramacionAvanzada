//
// Created by gabriel on 17/03/25.
//

#include "Biblioteca.h"
Biblioteca::Biblioteca() {

}

Biblioteca::Biblioteca(string nombre, string dir, string hor) {
    this->nombre = nombre;
    this->direccion = dir;
    this->horario = hor;
}

void Biblioteca::addLIbro(Libro *libro) {
    this->libros.push_back(libro);
}

void Biblioteca::mostrarLibros() {
    list<Libro*>::iterator it;
    for (it = libros.begin(); it != libros.end(); it++) {
        //Libro *libro = *it;
        //libro->mostrar();
        //si les gusta más las dos líneas de arriba pueden ser
        (*it)->mostrar();
        //
    }
}

