/*
 * Sistema.h
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#ifndef LOGICA_SISTEMA_H_
#define LOGICA_SISTEMA_H_
#include <list>
#include "Usuario.h"
#include <map>
using namespace std;


class LoginUsr {
private:
	//la clave es el nick, el valor es una instancia de usuario
	map<string, Usuario*> usuarios;


public:
	LoginUsr();
	virtual ~LoginUsr();
	string ingresar(string nick, string pass);
};

#endif /* LOGICA_SISTEMA_H_ */
