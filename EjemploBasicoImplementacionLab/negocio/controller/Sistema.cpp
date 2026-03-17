/*
 * Sistema.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "Sistema.h"
#include "../libreria/interfaces/ICollectible.h"
#include "../libreria/String.h"
#include "../dominio/Usuario.h"
#include "../dominio/Estudiante.h"
#include "../dominio/Idioma.h"

#include <string.h>
#include <iostream>

using namespace std;

Sistema* Sistema::miSistema=nullptr;

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}

Sistema* Sistema::getInstance() {
	if (Sistema::miSistema==nullptr){
		Sistema::miSistema = new Sistema();
		Sistema::miSistema->inicializarDatos();
	}
	return Sistema::miSistema;

}

Sistema::Sistema() {

}

void Sistema::inicializarDatos() {
	//inicializo los idiomas del sistema


	cout << "Comienza inicializacion Sistema " << endl;

	Idioma *idioma1 = new Idioma();
	Idioma *idioma2 = new Idioma("Espaniol");
	Idioma *idioma3 = new Idioma("Aleman");

	String *claveIdioma1 = new String(idioma1->getNomIdioma().c_str());
	String *claveIdioma2 = new String(idioma2->getNomIdioma().c_str());
	String *claveIdioma3 = new String(idioma3->getNomIdioma().c_str());

	this->idiomas->add(claveIdioma1, idioma1);
	this->idiomas->add(claveIdioma2, idioma2);
	this->idiomas->add(claveIdioma3, idioma3);


	Usuario *usr1 = new Estudiante("pp","pass1","nombre1","desc1","pais1");
	String *claveUsr1 = new String(usr1->getNick().c_str());
	this->usuarios->add(claveUsr1, usr1);

	cout << "Fin inicializacion Sistema " << endl;
}

Idioma* Sistema::buscarIdioma(string nomIdioma) {
	Idioma* idioma = nullptr;
	String *clave  = new String(nomIdioma.c_str());
	ICollectible *idiomaAux = this->idiomas->find(clave);
	if (idiomaAux != nullptr){
		idioma = dynamic_cast<Idioma*>(idiomaAux);
	}
	return idioma;

}

