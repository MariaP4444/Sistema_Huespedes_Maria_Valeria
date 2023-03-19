//
// Created by Lenovo on 17/03/2023.
//

#ifndef SISTEMA_HUESPEDES_MARIA_VALERIA_RESERVA_H
#define SISTEMA_HUESPEDES_MARIA_VALERIA_RESERVA_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Huesped.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

class Reserva {
private:
    string fechaIn;
    string fechaFin;
    Propietario* pPropietario;
    Huesped* pHuesped;

public:
    Reserva()= default;
    string getFechaIn();
    void setFechaIn(string fechaIn);

    string getFechaFin();
    void setFechaFin(string fechaFin);

    Propietario* getPpropietario();
    void setPpropietario(Propietario* pPropietario);

    Huesped* getPhuesped();
    void setPhuesped(Huesped* pHuesped);


};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_RESERVA_H
