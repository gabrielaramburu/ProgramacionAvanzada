//
// Created by gabriel on 19/05/25.
//

#ifndef CLASER_H
#define CLASER_H
#include "ClaseB.h"


class ClaseR {
private:
    int valor;
    ClaseB* claseB;

public:
    ClaseR(int valor, ClaseB* claseB);
    int getValor();
};



#endif //CLASER_H
