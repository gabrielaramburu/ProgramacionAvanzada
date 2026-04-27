//
// Created by gabriel on 27/4/26.
//

#ifndef INC_2025_DTINFO_H
#define INC_2025_DTINFO_H
#include <string>

using namespace std;

//a la capa de presentación siempre devuelvo un tipo primitivo
//o un DataType
class DTInfo {
private:
    int id;
    string descripcion;
public:
    DTInfo(int id, string descripcion);
    int getId();
    string getDescripcion();
};


#endif //INC_2025_DTINFO_H
