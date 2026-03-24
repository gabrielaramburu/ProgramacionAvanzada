//
// Created by gabriel on 24/03/26.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <list>
#include "Curso.h"

using namespace std;

class Estudiante {
    private:
      string nombre;
      list<Curso*> cursos;
    public:
     ~Estudiante();
     Estudiante(string nombre);
     string getNombre();
     void inscribirACurso(Curso* curso);

};



#endif //ESTUDIANTE_H
