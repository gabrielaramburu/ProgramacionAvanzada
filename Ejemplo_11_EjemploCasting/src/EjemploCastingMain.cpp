//============================================================================
// Name        : 08_EjemploCasting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include "Planta.h"
#include "Interior.h"
#include "Exterior.h"
using namespace std;

void ejemplodCastingEstatico();
void ejemplodCastingEstaticoConError();
void ejemplodCastingDinamico();
int main() {
	//ejemplodCastingEstatico();
	//ejemplodCastingEstaticoConError();
	ejemplodCastingDinamico();

	list<Planta*> listaDePlantas;
	listaDePlantas.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	listaDePlantas.push_back(new Exterior("Rosa", 120, "Alta"));
	listaDePlantas.push_back(new Interior("Orquídea", 30, "Alta", "Media"));
	listaDePlantas.push_back(new Exterior("Cactus", 40, "Media"));

	return 0;
}

void ejemplodCastingEstatico() {
	cout << "*** Ejemplo de casting estatico " << endl;
	list<Planta*> plantasInteriores;
	plantasInteriores.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	plantasInteriores.push_back(new Interior("Orquídea", 30, "Alta", "Media"));

	for (auto p : plantasInteriores) {
		//p->mostrarHumedad();
		//la linea anterior no compila ya que mostrarHumedad no es
		//un metodo de planta

		//solucion: hacer un casting (o downcasting) estatico
		Interior *aux = static_cast<Interior*>(p);
		aux->mostrarHumedad();

		//las dos sentencias anteriores se pueden reescribir como
		(static_cast<Interior*>(p))->mostrarHumedad();
	}

}

void ejemplodCastingEstaticoConError() {
	cout << "*** Ejemplo de casting estatico con error" << endl;
	list<Planta*> plantasInteriores;
	plantasInteriores.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	plantasInteriores.push_back(new Interior("Orquídea", 30, "Alta", "Media"));

	//agrego una plata de exterior
	plantasInteriores.push_back(new Exterior("Cactus", 40, "Media"));
	plantasInteriores.push_back(new Interior("Rosa", 40, "Alta", "Media"));

	for (auto p: plantasInteriores) {

		//el código compila pero se produce un error en tiempo de ejcución
		//como programadores pensamos una cosa (siempre voy a tener plantas interiores
		//en la lista, pero en tiempo de ejecución eso no se cumplió)
		Interior *aux = static_cast<Interior*>(p);
		aux->mostrarHumedad();
	}
}

void ejemplodCastingDinamico() {
	cout << "*** Ejemplo de casting dinamico" << endl;
	list<Planta*> plantasInteriores;
	plantasInteriores.push_back(new Interior("Helecho", 50, "Media", "Alta"));
	plantasInteriores.push_back(new Interior("Orquídea", 30, "Alta", "Media"));

	//agrego una plata de exterior
	plantasInteriores.push_back(new Exterior("Cactus", 40, "Media"));
	plantasInteriores.push_back(new Interior("Rosa", 40, "Alta", "Media"));

	for (auto p:plantasInteriores) {

		Interior *aux = dynamic_cast<Interior*>(p);
		//como programador no puedo asegurar el tipo de los objetos
		//que contendrá la lista, tengo que prevenir y controlar el tipo correcto
		if (aux != nullptr) {
			//el casting funcionó, estoy seguro de que aux apunta a un objeto
			//Planta interior.
			//Notar que esto me sirve también para determinar el tipo de un objeto
			aux->mostrarHumedad();
		}
		//nota 2: observar que sin el if, el casting dinamico no me sirve de nada
	}
}
