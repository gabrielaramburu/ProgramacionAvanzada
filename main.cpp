#include <iostream>
#include "01_EjemploBasicoObjeto/Persona.h"
#include "02_EjemploBasicoConstructor/Automovil.h"
#include "03_EjemploMiembroDeClase/Computador.h"
#include "Ejemplo_04_AsociacionMultiplicadad_1/Casa.h"
#include "Ejemplo_04_AsociacionMultiplicadad_1/Person.h"
#include "Ejemplo_05_AsociacionMultiplicidadN/Biblioteca.h"
#include "Ejemplo_05_AsociacionMultiplicidadN/Libro.h"
#include "Ejemplo_06_HerenciaSobreescrituaIntercambiabilidad/Animal.h"
#include "Ejemplo_06_HerenciaSobreescrituaIntercambiabilidad/Gato.h"
#include "Ejemplo_06_HerenciaSobreescrituaIntercambiabilidad/Perro.h"
#include "Ejemplo_07_EjemploPolimorfismo_1/Adulto.h"
#include "Ejemplo_07_EjemploPolimorfismo_1/Niño.h"
#include "Ejemplo_07_EjemploPolimorfismo_1/PersonaPoli.h"
#include "Ejemplo_08_EjemploPolimorfismo_2/Figura.h"
#include "Ejemplo_08_EjemploPolimorfismo_2/Rectangulo.h"
#include "Ejemplo_08_EjemploPolimorfismo_2/Triangulo.h"


void ejemploBasicoObjeto();
void ejemploBasicoConstructor();
void ejmploMiembroDeClase();
void ejemploAsociacionMultiplicadad_1();
void ejemploAsociacionMultiplicadad_N();
void ejemploHerenciaSobreescritura();
void ejemploIntercambiabilidad();
void ejemploPolimorfismo_1_formaDeAprender();
void ejemploPolimorfismo_2_figuras();
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    //ejemploBasicoObjeto();
    //ejemploBasicoConstructor();
    //ejmploMiembroDeClase();
    //ejemploAsociacionMultiplicadad_1();
    //ejemploAsociacionMultiplicadad_N();
    //ejemploHerenciaSobreescritura();
    //ejemploIntercambiabilidad();
    //ejemploPolimorfismo_1_formaDeAprender();
    ejemploPolimorfismo_2_figuras();

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
    std::cout << "4 Ejemplo multiplicidad 1 " << "\n";
    Casa *c1 = new Casa("18 de Julio",1234, "Maldonado");
    Person *p1 = new Person("Jose",30, c1);

    p1->mostrar();
};

void ejemploAsociacionMultiplicadad_N() {
    std::cout << "6 Ejemplo multiplicidad N " << "\n";
    Libro *l1= new Libro("ABC11234","Mi primer libro");
    Libro *l2= new Libro("ABC3333","Mi segundo libro");
    Libro *l3= new Libro("BBB4444","Mi tercer libro");


    Biblioteca * biblio =
        new Biblioteca("Bibloteca municipal",
            "Rafael Perez del Puerso",
            "de 8:00 a 19:00");

    biblio->addLIbro(l1);
    biblio->addLIbro(l2);
    biblio->addLIbro(l3);

    biblio->mostrarLibros();
}

void ejemploHerenciaSobreescritura() {
    std::cout << "6 Ejemplo herencia " << "\n";

    Perro *miPerrito = new Perro("sultan");
    miPerrito->setTamanio(100); //comportamiento heredado de animal
    miPerrito->mostrarTamanio();

    miPerrito->setTiempoGestacion(4); //comportamiento heredado de mamifero
    miPerrito->mostrarTiempoGestacion();
    miPerrito->emitirSonido(); //comportamiento heredado y sobreescrito

    Gato *miGatito = new Gato("silvestre");
    miGatito->setTamanio(50); //comportamiento heredado de animal
    miGatito->mostrarTamanio();
    miGatito->setTiempoGestacion(3); //comportamiento heredado de mamifero
    miGatito->mostrarTiempoGestacion();
    miGatito->emitirSonido(); //comportamiento heredado y sobreescrito
}

void ejemploIntercambiabilidad() {
    //observar como esto compila ya que todo Perro es un Animal
    //Establecimos esa realción en el código (usando herencia)
    Animal *miPerrito = new Perro("sultan");
    miPerrito->setTamanio(100);
    miPerrito->mostrarTamanio();

    //detalle importante, estas líneas de código no compilan
    //ya que Animal no tiene el comportamiento invocado (solo lo tiene Mamifero)
    //miPerrito->mostrarTiempoGestacion();
    //miPerrito->emitirSonido();

    //Para que funcione tenemos que hacer un casting, versión estilo C (no segura)
    //dynamic_cast sería la forma segura de hacerlo
    ((Perro*)miPerrito)->emitirSonido();
    ((Perro*)miPerrito)->mostrarTiempoGestacion();


    //note que para que esto funcione tiene que haber en la clase base al menos una
    //funcion virtual (complicaciones del lenguaje)
    Perro * p1 = dynamic_cast<Perro*>(miPerrito);
    if (p1 == nullptr) {
        p1->emitirSonido();
    } else {
        cout <<"error grave, esto no debería de pasar. ";
    }

}

void ejemploPolimorfismo_1_formaDeAprender() {
    PersonaPoli *p1 = new Niño();
    PersonaPoli *p2 = new Adulto();
    Niño *p3 = new Niño();
    Adulto *p4 = new Adulto();
    PersonaPoli *p5 = new PersonaPoli();

    PersonaPoli::mostrarFormaAprender(p1);
    PersonaPoli::mostrarFormaAprender(p2);
    PersonaPoli::mostrarFormaAprender(p3);
    PersonaPoli::mostrarFormaAprender(p4);
    PersonaPoli::mostrarFormaAprender(p5);
}
void mostrarInfoFiguras(list<Figura*> figuras);

void ejemploPolimorfismo_2_figuras() {
    Figura *f = new Rectangulo();
    f->setAltura(10);
    f->setBase(5);
    f->calcularArea();

    Figura *f2 = new Triangulo();
    f2->setAltura(10);
    f2->setBase(5);
    cout << endl;
    f2->calcularArea();

    cout << endl << "Recorro figuras" << endl;;
    list<Figura*> figuras;
    figuras.push_back(f);
    figuras.push_back(f2);
    figuras.push_back(f2);

    mostrarInfoFiguras(figuras);
}
void mostrarInfoFiguras(list<Figura*> figuras) {
    list<Figura*>::iterator it;
    for (it = figuras.begin(); it != figuras.end(); ++it) {
        (*it)->calcularArea(); //despacho dinámico
        cout << endl;
        cout << ((*it)->toString()) << endl; //despacho dinámico
    }
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.