//
// Created by Lenovo on 17/03/2023.
//

#include "Propietario.h"

string Propietario::getNombre()  {
    return this->nombre;
}

void Propietario::setNombre(string nombre) {
    Propietario::nombre = nombre;
}

string Propietario::getSexo() {
    return this->sexo;
}

void Propietario::setSexo(string sexo) {
    Propietario::sexo = sexo;
}
string Propietario::getFechaNacimiento() {
    return this->fechaNacimiento;
}

void Propietario::setFechaNacimiento(string fechaNacimiento) {
    Propietario::fechaNacimiento = fechaNacimiento;
}

int Propietario::getId() {
    return this->ID;
}

void Propietario::setId(int id) {
    ID = id;
}

float Propietario::getPuntajeEvaluacion(){
    return this->puntajeEvaluacion;
}

void Propietario::setPuntajeEvaluacion(float puntajeEvaluacion) {
    Propietario::puntajeEvaluacion = puntajeEvaluacion;
}
