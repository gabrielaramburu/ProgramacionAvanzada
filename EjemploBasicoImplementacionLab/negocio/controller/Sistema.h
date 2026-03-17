/*
 * Sistema.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_CONTROLLER_SISTEMA_CPP_
#define NEGOCIO_CONTROLLER_SISTEMA_CPP_

#include <set>
#include <string>
#include <iostream>

#include "../dominio/Idioma.h"
#include "../libreria/interfaces/IDictionary.h"



using namespace std;

//Esto es un singleton (ver patron de diseño)

class Sistema {
private:
	Sistema(); //declaro el constructor como privado
	static Sistema* miSistema;	//puntero a la unica intancia de Sistema
	void inicializarDatos();
public:
	//Esta es una clase utilitaria por lo que no tiene sentido encapsular su estado
	//(no utilizo getters y setters)

	IDictionary *usuarios;
	IDictionary *idiomas;

	Idioma* buscarIdioma(string nomIdioma);
	static Sistema* getInstance(); //metodo de clase que devuele siempre la misma instancia
	virtual ~Sistema();
};

#endif /* NEGOCIO_CONTROLLER_SISTEMA_CPP_ */
