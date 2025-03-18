//
// Created by gabriel on 18/03/25.
//

#ifndef ANIMAL_H
#define ANIMAL_H



class Animal {
private:
protected: //visible para toda la jerarquía
    int tamanio;
public:
    Animal();
    virtual ~Animal();
    void mostrarTamanio();
    void setTamanio(int tamanio);
};



#endif //ANIMAL_H
