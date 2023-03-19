//
// Created by Lenovo on 17/03/2023.
//

#ifndef SISTEMA_HUESPEDES_MARIA_VALERIA_HOGAR_H
#define SISTEMA_HUESPEDES_MARIA_VALERIA_HOGAR_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

class hogar {

private:
    string direccion;
    string desc;
    int numCamas;
    bool bebes;
public:

    hogar()=default;

    bool getBebes();

    void setBebes(bool bebes);

    int getNumCamas();

    void setNumCamas(int numCamas);

    string getDesc();

    void setDesc(string desc);

    string getDireccion();

    void setDireccion(string direccion);



};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_HOGAR_H
