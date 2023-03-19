//
// Created by Lenovo on 17/03/2023.
//

#include "Huesped.h"


string Huesped::getNombre()  {
    return this->nombreH;
}

void Huesped::setNombre(string nombre) {
    Huesped::nombreH = nombre;
}

string Huesped::getSexo() {
    return this->sexoH;
}

void Huesped::setSexo(string sexo) {
    Huesped::sexoH = sexo;
}
string Huesped::getFechaNacimiento() {
    return this->fechaNacimientoH;
}

void Huesped::setFechaNacimiento(string fechaNacimiento) {
    Huesped::fechaNacimientoH = fechaNacimiento;
}

string Huesped::getHospital()  {
    return this->hospitalH;
}

void Huesped::setHospital(string hospital) {
    Huesped::hospitalH = hospital;
}

string Huesped::getOrigen()  {
    return this->origenH;
}

void Huesped::setOrigen(string origen) {
    Huesped::origenH = origen;
}

int Huesped::getId() {
    return this->IDh;
}

void Huesped::setId(int id) {
    Huesped::IDh = id;
}

float Huesped::getPuntajeEvaluacion(){
    return this->puntajeEvaluacionH;
}

void Huesped::setPuntajeEvaluacion(float puntajeEvaluacion) {
    Huesped::puntajeEvaluacionH = puntajeEvaluacion;
}


void Huesped::nuevoPuntaje(int calificacion) {
    if(this->puntajeEvaluacionH == 0){
        this->puntajeEvaluacionH = calificacion;
    }
    else {
        this->puntajeEvaluacionH = ((this->puntajeEvaluacionH + calificacion) / 2);
    }
}