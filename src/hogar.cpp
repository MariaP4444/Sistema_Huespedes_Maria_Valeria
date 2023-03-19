//
// Created by Lenovo on 17/03/2023.
//

#include "hogar.h"

hogar::hogar(string direccion, string desc, int numCamas, bool bebes):direccion(direccion), desc(desc), numCamas(numCamas), bebes(bebes){}

 string hogar::getDireccion() {
    return direccion;
}

void hogar::setDireccion(string direccion) {
    hogar::direccion = direccion;
}

string hogar::getDesc() {
    return desc;
}

void hogar::setDesc( string desc) {
    hogar::desc = desc;
}

int hogar::getNumCamas()  {
    return numCamas;
}

void hogar::setNumCamas(int numCamas) {
    hogar::numCamas = numCamas;
}

bool hogar::getBebes()  {
    return bebes;
}

void hogar::setBebes(bool bebes) {
    hogar::bebes = bebes;
}

