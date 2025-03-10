#include <iostream>
#include "01_EjemploBasicoObjeto/Persona.h"
#include "02_EjemploBasicoConstructor/Automovil.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the
    // <b>lang</b> variable name to see how CLion can help you rename it.
    std::cout << "Ejemplo básico de POO " << "!\n";

    Persona p1;
    p1.setNombre("Luis");
    p1.setEdad(30);
    p1.mostrarInformacion();

    std::cout << "Ejemplo básico constructor" << "\n";

    Automovil * a1 = new Automovil("BAA 1234","rojo");
    a1->mostrarInformacion();

    delete a1;

    cout << "Fin programa" << endl;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.