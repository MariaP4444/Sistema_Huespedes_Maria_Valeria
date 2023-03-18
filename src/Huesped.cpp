//
// Created by Lenovo on 17/03/2023.
//

#include "Huesped.h"


string Huesped::getNombre()  {
    return this->nombre;
}

void Huesped::setNombre(string nombre) {
    Huesped::nombre = nombre;
}

string Huesped::getSexo() {
    return this->sexo;
}

void Huesped::setSexo(string sexo) {
    Huesped::sexo = sexo;
}
string Huesped::getFechaNacimiento() {
    return this->fechaNacimiento;
}

void Huesped::setFechaNacimiento(string fechaNacimiento) {
    Huesped::fechaNacimiento = fechaNacimiento;
}

string Huesped::getHospital()  {
    return this->hospital;
}

void Huesped::setHospital(string hospital) {
    Huesped::hospital = hospital;
}

string Huesped::getOrigen()  {
    return this->origen;
}

void Huesped::setOrigen(string origen) {
    Huesped::origen = origen;
}

int Huesped::getId() {
    return this->ID;
}

void Huesped::setId(int id) {
    ID = id;
}

float Huesped::getPuntajeEvaluacion(){
    return this->puntajeEvaluacion;
}

void Huesped::setPuntajeEvaluacion(float puntajeEvaluacion) {
    Huesped::puntajeEvaluacion = puntajeEvaluacion;
}