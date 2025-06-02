#include <iostream>

#include "../negocio/ISistema.h"
#include "../negocio/Controlador.h"
int main() {
    cout << "Comienza ejecucion" << endl;
    ISistema* sistema = new Controlador(); //se mojoara con una Factory
    int valor = 20;
    list<int> instancias = sistema->obtenerInstanciasA(valor);
    for (auto instancia: instancias) {
        cout << "Instancia de A con valor mayor a " << valor
        << " idA " << instancia << endl;
    }

    return 0;
}

