//
// Created by gabriel on 17/03/25.
//

#include "Biblioteca.h"
Biblioteca::Biblioteca() {

}

Biblioteca::Biblioteca(string nom, string dir, string hor) {
    this->nombre = nom;
    this->direccion = dir;
    this->horario = hor;
}

void Biblioteca::addLIbro(Libro *libro) {
    libros.push_back(libro);
}

void Biblioteca::mostrarLibros() {
    list<Libro*>::iterator it;
    for (it = libros.begin(); it != libros.end(); it++) {
        Libro *libro = *it;
        libro->mostrar();
        //si les gusta más las dos líneas de arriba pueden ser
        //((Libro*)(*it))->mostrar();
    }
}

