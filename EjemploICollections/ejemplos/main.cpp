#include <iostream>
#include "Usuario.h"
#include "../collections/OrderedDictionary.h"
#include "../String.h"

class IDictionary;

using namespace std;
void cargoDatos();
void ejemploFind();
void ejemploIteracion();

IDictionary* usuarios = new OrderedDictionary();

int main() {
    cargoDatos();
    ejemploFind();
    ejemploIteracion();
    return 0;
}

void cargoDatos() {
    //Creo instancias
    Usuario* usr1 = new Usuario("pepeNick", "pepe", "hola123",10);
    Usuario* usr2 = new Usuario("luisNick", "luis", "luisPass",20);
    Usuario* usr3 = new Usuario("mariaNick", "maria", "mariaPass",30);

    //decido que la clave de los usuarios sean los nick
    //pero podría haber elegido cualquier otra clave (mientras que lo identifique inequívocamente)
    usuarios->add(new String("pepeNick"),usr1);
    usuarios->add(new String("luisNick"),usr2);
    usuarios->add(new String("mariaNick"),usr3);
}

void ejemploFind() {
    std::cout << "Ejecutando IDictionary \n";
    cout << "Busco un elemento del diccionario " << endl;
    //en esta implementación del dictionario el find me devuelve un tipo
    //de la clase padre ICollectible.
    ICollectible* usuario = usuarios->find(new String("pepeNick"));

    if (usuario != nullptr) {
        string res;
        //para poder utilizar las operaciones del Usuario tengo que hacer un cast
        //res = dynamic_cast<Usuario*>(usuario)->getNombre(); es lo mismo que lo de abajo
        res = ((Usuario*)usuario)->getNombre();
        cout << "Encontre usuario " << res;
    }
}

void ejemploIteracion() {
    IIterator *iter = usuarios->getIterator();
    int total = 0;
    while (iter->hasCurrent()) {
        total = total + ((Usuario*)iter->getCurrent())->getSueldo();
        //con casting dynamico seria
        //dynamic_cast<Usuario*>(iter->getCurrent())->getSueldo();
        iter->next();
    }
    cout << "Total de sueldos: " << total;
}