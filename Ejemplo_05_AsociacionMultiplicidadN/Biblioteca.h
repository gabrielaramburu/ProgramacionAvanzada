//
// Created by gabriel on 17/03/25.
//

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <string>
#include "Libro.h"
#include <list>
#include <vector>
using namespace std;

class Biblioteca {
private:
    string nombre;
    string  direccion;
    string horario;
    list<Libro*> libros;
public:
    Biblioteca();
    Biblioteca(string nom, string dir, string hor);

    void addLIbro(Libro* libro);
    void mostrarLibros();

};



#endif //BIBLIOTECA_H
