/*
 * Sistema.cpp
 *
 *  Created on: 8 may 2024
 *      Author: gabriel
 */

#include "LoginUsr.h"
#include <list>

LoginUsr::LoginUsr() {

	usuarios.insert(pair<string, Usuario*>("pepe", new Usuario("pepe","111")));
	usuarios.insert(pair<string, Usuario*>("luis", new Usuario("luis","222")));

	//otra manera de hacer lo mismo de lo anterior
	usuarios["jose"]=new Usuario("jose","333");
}

LoginUsr::~LoginUsr() {
	// TODO Auto-generated destructor stub
}

string LoginUsr::ingresar(string nick, string pass) {
	string mensajeRetorno = "*** Usuario o contrasenia incorrecto";
	auto iter = this->usuarios.find(nick); //me devuele un iterador
	if (iter != this->usuarios.end()) { //si existe
		//second significa el valor, first sería la clave
		Usuario * usuario = iter->second;
		if (usuario->getNick() == nick) {
			cout << "log:encontre usuario " << endl;
			if (usuario->validarContrasenia(pass)) {
				mensajeRetorno = "*** Bienvenido";

			}
		};
	} else {
		cout << "log: no existe usuario" << endl;
	}
	return mensajeRetorno;
}
/* cuando uso un hash no necesito recorrer para buscar, solo accedo por la clave
string LoginUsr::ingresar(string nick, string pass) {
	string mensajeRetorno = "*** Usuario o contrasenia incorrecto";
	list<Usuario*>::iterator it;
	for (it = this->usuarios.begin(); it != this->usuarios.end(); ++it) {
		if ((*it)->getNick() == nick) {
			cout << "encontre usuario " << endl;

				if ((*it)->validarContrasenia(pass)) {
					mensajeRetorno = "*** Bienvenido";
					break;
				}


		}

	}
	return mensajeRetorno;
}
*/
