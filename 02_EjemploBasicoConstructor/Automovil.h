//
// Created by gabriel on 10/03/25.
//

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <string>

using namespace std;

class Automovil {
private:
    string matricula;
    string color;
public:
    Automovil(string matricula, string color);

    ~Automovil(); //desctructor
    void mostrarInformacion();
};



#endif //AUTOMOVIL_H
