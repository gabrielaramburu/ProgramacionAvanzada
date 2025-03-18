//
// Created by gabriel on 18/03/25.
//

#include "Gato.h"
Gato::Gato() {
}
Gato::Gato(string nombre) {
    this->nombre = nombre;
}
void Gato::emitirSonido() {
    cout << "miauuuu" << endl;
}