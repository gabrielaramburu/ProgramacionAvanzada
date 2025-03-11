//
// Created by gabriel on 11/03/25.
//

#ifndef COMPUTADOR_H
#define COMPUTADOR_H
#include <string>
using namespace std;

class Computador {
private:
    int id;
    string procesador;
    int memoriaRam;

    static int cantidadComputadores; //atributo de clase
public:
Computador(int id, string procesador, int memoriaRam);
    void encender();
    void apagar();

    static void mostrarCantidadComputadoras();
};



#endif //COMPUTADOR_H
