//
// Created by gabriel on 17/03/25.
//

#ifndef CASA_H
#define CASA_H
#include <string>
using namespace std;

class Casa {
private:
    string calle;
    int nroPuerta;
    string ciudad;
public:
    Casa();
    Casa(string calle, int nroPuerta, string ciudad);
    void mostrarDireccion();
};



#endif //CASA_H
