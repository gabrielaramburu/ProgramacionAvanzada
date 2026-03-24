//
// Created by gabriel on 24/03/26.
//

#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <sstream>
#include <list>


using namespace std;

// Declaración en avanzada de la clase Estudiante
//(ver documento de referencias circulares)
class Estudiante;
class Curso {
private:
  string descripcion;
  list<Estudiante*> listaEstudiantes;
public:

  Curso(string descripcion);
  void agregarEstudiante(Estudiante* estudiante);
  void eliminarEstudiante(Estudiante* estudiante);
  void listarEstudiantes();
};


#endif //CURSO_H
