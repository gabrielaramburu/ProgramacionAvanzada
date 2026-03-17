/*
 * Idioma.h
 *
 *  Created on: 10 jun 2024
 *      Author: gabriel
 */

#ifndef NEGOCIO_DOMINIO_IDIOMA_H_
#define NEGOCIO_DOMINIO_IDIOMA_H_
#include <iostream>
#include <string>
#include "../libreria/interfaces/ICollectible.h"
using namespace std;

class Idioma:  public ICollectible{
private:
	string nomIdioma;
public:
	Idioma();
	Idioma(string idioma);
	virtual ~Idioma();
	string getNomIdioma();
	void setNomIdioma(string idioma);
};

#endif /* NEGOCIO_DOMINIO_IDIOMA_H_ */
