//
// Created by Lenovo on 17/03/2023.
//

#include "Evaluacion.h"


string Evaluacion::getFechaEvaluacion(){
    return this->fechaEvaluacion;
}

void Evaluacion::setFechaEvaluacion(string fechaEvaluacion){
    Evaluacion::fechaEvaluacion = fechaEvaluacion;
}

string Evaluacion::getComentario(){
    return this->comentario;
}

void Evaluacion::setComentario(string comentario) {
    Evaluacion::comentario = comentario;
}

int Evaluacion::getCalificar(){
    return this->calificar;
}

void Evaluacion::setCalificar(int calificar) {
    Evaluacion::calificar = calificar;
}

string Evaluacion::getPersonaDirigida(){
    return this->personaDirigida;
}

void Evaluacion::setPersonaDirigida(string personaDirigida) {
    Evaluacion::personaDirigida = personaDirigida;
}

string Evaluacion::getPersonaEvaluacion(){
    return this->personaEvaluacion;
}

void Evaluacion::setPersonaEvaluacion(string personaEvaluacion) {
    Evaluacion::personaEvaluacion = personaEvaluacion;
}
