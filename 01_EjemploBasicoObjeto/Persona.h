//
// Created by gabriel on 10/03/25.
//

#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    void setNombre(string nombre);
    string getNombre();
    void setEdad(int edad);
    int getEdad();

    void mostrarInformacion();
};



#endif //PERSONA_H
