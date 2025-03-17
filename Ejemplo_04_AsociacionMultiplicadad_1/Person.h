//
// Created by gabriel on 17/03/25.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "Casa.h"

using namespace std;

class Person {
private:
    string nombre;
    int edad;
    Casa* casa;
public:
    Person(string nombre, int edad, Casa * casa);
    void mostrar();
};



#endif //PERSONA_H
