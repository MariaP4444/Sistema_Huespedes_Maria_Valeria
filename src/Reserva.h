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
    int idPropietario;
    int idHuesped;

public:
    Reserva()= default;
    Reserva(string fechaIn, string fechaFin, int idPropietario, int idHuesped);

    string getFechaIn();
    void setFechaIn(string fechaIn);

    string getFechaFin();
    void setFechaFin(string fechaFin);

    int getIDpropietario();
    void setIDpropietario(int idPropietario);

    int getIDhuesped();
    void setIDhuesped(int idHuesped);

    Reserva* crearReserva(int idH);


};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_RESERVA_H
