//
// Created by Lenovo on 17/03/2023.
//

#include "Reserva.h"
#include "Propietario.h"
#include "Huesped.h"

const string &Reserva::getFInicio() const {
    return fInicio;
}

void Reserva::setFInicio(const string &fInicio) {
    Reserva::fInicio = fInicio;
}
