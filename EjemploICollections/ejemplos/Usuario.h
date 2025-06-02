//
// Created by gabriel on 02/06/25.
//

#ifndef USUARIO_H
#define USUARIO_H
#include <string>

#include "../interfaces/ICollectible.h"
using namespace std;

class Usuario :public ICollectible{
private:
    std::string nick;
    string pass;
    string nom;
    string descrip;
    int sueldo;

public:
    Usuario();
    Usuario(string nick, string nombre, string pass, int sueldo);
    virtual ~Usuario();
    string getNombre();
    string getNick();
    int getSueldo();
};



#endif //USUARIO_H
