//
// Created by gabriel on 24/03/26.
//

#include "Curso.h"
#include "Estudiante.h"
#include <iostream>

Curso::Curso(string descripcion) {
  this->descripcion = descripcion;
}

void Curso::agregarEstudiante(Estudiante* estudiante) {
  this->listaEstudiantes.push_front(estudiante);
}

void Curso::eliminarEstudiante(Estudiante* estudiante) {
  //itero por todos los estudiantes del curso
  auto it = this->listaEstudiantes.begin();
  while (it != this->listaEstudiantes.end()) {
    //observar que pregunto por el contenido del iterador
    //it apunta a la cajita
    //*it es el contenido de la cajita apuntada
    if (*it == estudiante) {
      this->listaEstudiantes.erase(it);
      cout  << "Encontré estudiante, lo saco del curso" << endl;
      break;
    }
    it++;
  }
}


void Curso::listarEstudiantes() {
  cout << "Listado de  estudiantes:" << endl;
  for (auto estudiante: this->listaEstudiantes) {
    cout << "nombre: " << estudiante->getNombre() << endl;
  }
}