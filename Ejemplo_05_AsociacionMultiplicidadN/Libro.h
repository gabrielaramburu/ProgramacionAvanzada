//
// Created by gabriel on 17/03/25.
//

#ifndef LIBRO_H
#define LIBRO_H
#include <string>
using namespace std;
class Libro {
private:
    string isbn;
    string titulo;
public:
    Libro(string isbn, string titulo);
    void mostrar();
};



#endif //LIBRO_H
