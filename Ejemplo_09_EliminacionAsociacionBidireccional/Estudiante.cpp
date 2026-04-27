//
// Created by gabriel on 24/03/26.
//

#include "Estudiante.h"
#include <iostream>

Estudiante::Estudiante(string nombre){
  this->nombre = nombre;
}

Estudiante::~Estudiante() {
  //cout << "Elimino estudiante " << this->nombre << endl;
  //recorro la lista de cursos del estudiante
  //y a cada curso le pido que de de baja el mismo
  //(lo borre de su lista)
  for (auto curso: this->cursos) {
    curso->eliminarEstudiante(this);
  }
}

string Estudiante::getNombre(){
  return this->nombre;
}

void Estudiante::inscribirACurso(Curso* curso){
  this->cursos.push_front(curso);
}

