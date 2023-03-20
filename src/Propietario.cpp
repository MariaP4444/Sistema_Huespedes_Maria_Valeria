//
// Created by Lenovo on 17/03/2023.
//

#include "Propietario.h"

Propietario::Propietario(string nombre, string sexo, string fechaNacimiento, int ID, bool ocupado, float puntajeEvaluacion,hogar* pHogar):nombre(nombre), sexo(sexo), fechaNacimiento(fechaNacimiento), ID(ID), ocupado(ocupado), puntajeEvaluacion(puntajeEvaluacion), pHogar(pHogar){}

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
    Propietario::ID = id;
}

float Propietario::getPuntajeEvaluacion(){
    return this->puntajeEvaluacion;
}

void Propietario::setPuntajeEvaluacion(float puntajeEvaluacion) {
    Propietario::puntajeEvaluacion = puntajeEvaluacion;
}

bool Propietario::getOcupado() {
    return this->ocupado;
}

void Propietario::setOcupado(bool ocupado) {
    Propietario::ocupado = ocupado;
}

hogar *Propietario::getPHogar(){
    return this->pHogar;
}

void Propietario::setPHogar(hogar *pHogar) {
    Propietario::pHogar = pHogar;
}

void Propietario::nuevoPuntaje(int calificacion) {
    if(this->puntajeEvaluacion == 0){
        this->puntajeEvaluacion = calificacion;
    }
    else {
        this->puntajeEvaluacion = ((this->puntajeEvaluacion + calificacion) / 2);
    }
}

void Propietario::agregarCasa(string direccion, string desc, int numCamas, bool bebes) {
    this->pHogar = new hogar(direccion, desc, numCamas, bebes);
}


