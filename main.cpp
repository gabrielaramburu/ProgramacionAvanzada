#include <iostream>
#include "01_EjemploBasicoObjeto/Persona.h"
#include "02_EjemploBasicoConstructor/Automovil.h"
#include "03_EjemploMiembroDeClase/Computador.h"
#include "Ejemplo_04_AsociacionMultiplicadad_1/Casa.h"
#include "Ejemplo_04_AsociacionMultiplicadad_1/Person.h"

void ejemploBasicoObjeto();
void ejemploBasicoConstructor();
void ejmploMiembroDeClase();
void ejemploAsociacionMultiplicadad_1();
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    //ejemploBasicoObjeto();
    //ejemploBasicoConstructor();
    //ejmploMiembroDeClase();
    ejemploAsociacionMultiplicadad_1();

    cout << "Fin programa" << endl;
    return 0;
}
void ejemploBasicoObjeto() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the
    // <b>lang</b> variable name to see how CLion can help you rename it.
    std::cout << "1 Ejemplo básico de POO " << "!\n";

    Persona p1;
    p1.setNombre("Luis");
    p1.setEdad(30);
    p1.mostrarInformacion();

    Persona p2;
    p2.setNombre("María");
    p2.setEdad(25);
    p2.mostrarInformacion();
}
void ejemploBasicoConstructor() {
    std::cout << "2 Ejemplo básico constructor" << "\n";

    Automovil * a1 = new Automovil("BAA 1234","rojo");
    a1->mostrarInformacion();

    Automovil * a2 = new Automovil("BAA 1111","amarillo");
    a2->mostrarInformacion();
    delete a1;
    delete a2;
}
void ejmploMiembroDeClase() {
    std::cout << "3 Ejemplo miembro de clase " << "\n";
    Computador * c1 = new Computador(1,"intel", 16);
    Computador * c2 = new Computador(2,"amd", 32);

    Computador::mostrarCantidadComputadoras();

    delete c1;

    Computador::mostrarCantidadComputadoras();
};
void ejemploAsociacionMultiplicadad_1() {
    std::cout << "4 Ejemplo miembro de clase " << "\n";
    Casa *c1 = new Casa("18 de Julio",1234, "Maldonado");
    Person *p1 = new Person("Jose",30, c1);

    p1->mostrar();
};
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.