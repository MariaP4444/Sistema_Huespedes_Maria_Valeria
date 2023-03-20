//
// Created by Lenovo on 17/03/2023.
//

#include "Reserva.h"
#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"

Reserva::Reserva(string fechaIn, string fechaFin, int idPropietario, int idHuesped): fechaIn(fechaIn), fechaFin(fechaFin), idPropietario(idPropietario), idHuesped(idHuesped){}

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

void Reserva::setIDpropietario(int idPropietario){
    this->idPropietario = idPropietario;
}

int Reserva::getIDpropietario(){
    return this->idPropietario;
}

void Reserva::setIDhuesped(int idHuesped){
    this->idHuesped = idHuesped;
}

int Reserva::getIDhuesped(){
    return this->idHuesped;
}

Reserva* Reserva::crearReserva(int idH){
    string fInicio, fFin;
    Reserva* pReserva = new Reserva();

    cout<< "Ingrese fecha inicio de la estadia" << endl;
    cin >> pReserva->fechaIn;

    cout<< "Ingrese fecha fin de la estadia" << endl;
    cin >> pReserva->fechaFin;

    cout<< "Ingrese ID del propietario" << endl;
    cin >> this->idPropietario;

    return pReserva;

}


