/*
 * IUsuarioController.cpp
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#include "IUsuarioController.h"
#include "../dto/DTOEstudiante.h"
#include "../dto/DTOUsuario.h"
#include "../dto/DTOProfesor.h"
#include "../dominio/Estudiante.h"
#include "../dominio/Profesor.h"
#include "../dominio/Usuario.h"
#include <set>
#include "../libreria/interfaces/ICollectible.h"
#include "../libreria/interfaces/IIterator.h"
#include "../libreria/String.h"

IUsuarioController::IUsuarioController() {
	//obtendo la unica instancia del Sistema
	this->sistema = Sistema::getInstance();
}

bool IUsuarioController::verificarNick(string nick) {
	//recorro los usuarios del sistema
	bool result = false;

		//Esto metodo podría estar en la clase Sistema
	String *clave = new String(nick.c_str());
	ICollectible* usr = this->sistema->usuarios->find(clave);
	if (usr != nullptr) {
		result = true;
	}
	return result;
}

set<string> IUsuarioController::listIdiomas() {
	//recorro los idiomas del sistema y retorno una set de string
	set<string> result;

	IIterator* iter = this->sistema->idiomas->getIterator();
	while (iter->hasCurrent()) {

		string aux = dynamic_cast<Idioma*>(iter->getCurrent())->getNomIdioma();
		result.insert(aux);
		iter->next();
	}

	return result;
}

void IUsuarioController::agregarUsuario(DTOUsuario* usuario) {
	Usuario *nuevoUsuario;
	DTOEstudiante* dtoEst = dynamic_cast<DTOEstudiante*>(usuario);
	//hago un casting para determinar el tipo de instancia
	if (dtoEst != nullptr) {
		//es un estudiante
		nuevoUsuario = new Estudiante(dtoEst->nick, dtoEst->pass,
				dtoEst->nom, dtoEst->descrip, dtoEst->paisResidencia);
	} else {
		DTOProfesor* dtoProf = dynamic_cast<DTOProfesor*>(usuario);

		//si no es un estudiante asumo que es un profesor
		nuevoUsuario = new Profesor(dtoProf->nick, dtoProf->pass,
				dtoProf->nom, dtoProf->descrip, dtoProf->instituto);

		//recorro la lista de idiomas del DTO enviado
		set<string>::iterator it;
		for (it = dtoProf->idiomas.begin(); it != dtoProf->idiomas.end(); it++) {
			Idioma* idioma = this->sistema->buscarIdioma((*it));

			(dynamic_cast<Profesor*>(nuevoUsuario))->agregarIdioma((idioma));

		}
	}

	String *clave = new String(nuevoUsuario->getNick().c_str());
	this->sistema->usuarios->add(clave,nuevoUsuario);
}

