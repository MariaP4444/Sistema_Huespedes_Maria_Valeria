//
// Created by Lenovo on 17/03/2023.
//

#include "Reserva.h"
#include "Propietario.h"
#include "Huesped.h"

#include "Reserva.h"

string Reserva::getFechaIn(){
    return fechaIn;
}

void Reserva::setFechaIn(string fechaIn) {
    Reserva::fechaIn = fechaIn;
}

string Reserva::getFechaFin(){
    return fechaFin;
}

void Reserva::setFechaFin(string fechaFin) {
    Reserva::fechaFin = fechaFin;
}

void Reserva::setPpropietario(Propietario* pPropietario){
    this->pPropietario = pPropietario;
}

Propietario *Reserva::getPpropietario(){
    return this->pPropietario;
}

void Reserva::setPhuesped(Huesped* pHuesped){
    this->pHuesped = pHuesped;
}

Huesped *Reserva::getPhuesped(){
    return this->pHuesped;
}
