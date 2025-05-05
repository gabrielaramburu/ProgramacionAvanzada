//
// Created by gabriel on 18/03/25.
//

#include "PersonaPoli.h"

#include <iostream>
#include <ostream>
using namespace std;
PersonaPoli::PersonaPoli() {
}
void PersonaPoli::formaDeAprender() {
    cout<< "PersonaPoli::PersonaPoli::formaDeAprender" << std::endl;
}
void PersonaPoli::mostrarFormaAprender(PersonaPoli *p) {
    p->formaDeAprender();
}