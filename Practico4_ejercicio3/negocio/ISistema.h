//
// Created by gabriel on 19/05/25.
//

#ifndef ISISTEMA_H
#define ISISTEMA_H
#include <list>
using namespace std;

class ISistema {
public:
    virtual list<int> obtenerInstanciasA(int valor)=0;
};



#endif //ISISTEMA_H
