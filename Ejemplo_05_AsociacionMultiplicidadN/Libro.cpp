//
// Created by gabriel on 17/03/25.
//

#include "Libro.h"

#include <iostream>
#include <ostream>

Libro::Libro(string isbn, string titulo) {
    this->isbn = isbn;
    this->titulo = titulo;
}

void Libro::mostrar() {
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Isbn: "<<isbn<<endl;
}
