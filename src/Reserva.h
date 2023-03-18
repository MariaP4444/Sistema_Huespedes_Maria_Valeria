//
// Created by Lenovo on 17/03/2023.
//

#ifndef SISTEMA_HUESPEDES_MARIA_VALERIA_RESERVA_H
#define SISTEMA_HUESPEDES_MARIA_VALERIA_RESERVA_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

class Reserva {
private:
    string fInicio;
public:
    const string &getFInicio() const;

    void setFInicio(const string &fInicio);

private:
    string fFin;
    Propietario* = pPropietario;
    Huesped* = pHuesped;
public:
    Reserva()= default;


};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_RESERVA_H
