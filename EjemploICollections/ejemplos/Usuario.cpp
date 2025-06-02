//
// Created by gabriel on 02/06/25.
//

#include "Usuario.h"
Usuario::Usuario() {
    // TODO Auto-generated constructor stub

}

Usuario::Usuario(string nick, string nom, string pass, int sueldo) {
    this->nick = nick;
    this->nom = nom;
    this->pass = pass;
    this->sueldo = sueldo;

}

Usuario::~Usuario() {
    // TODO Auto-generated destructor stub
}

string Usuario::getNombre() {
    return this->nom;
}

string Usuario::getNick() {
    return this->nick;
}

int Usuario::getSueldo() {
    return this->sueldo;
}