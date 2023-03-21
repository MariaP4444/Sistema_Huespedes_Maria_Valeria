//
// Created by Lenovo on 17/03/2023.
//

#include "Evaluacion.h"

Evaluacion::Evaluacion(string fechaEvaluacion, string comentario, int personaDirigida, int personaEvaluacion, int calificar):fechaEvaluacion(fechaEvaluacion), comentario(comentario),personaDirigida(personaDirigida), personaEvaluacion(personaEvaluacion), calificar(calificar) {}

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

int Evaluacion::getPersonaDirigida(){
    return this->personaDirigida;
}

void Evaluacion::setPersonaDirigida(int personaDirigida) {
    Evaluacion::personaDirigida = personaDirigida;
}

int Evaluacion::getPersonaEvaluacion(){
    return this->personaEvaluacion;
}

void Evaluacion::setPersonaEvaluacion(int personaEvaluacion) {
    Evaluacion::personaEvaluacion = personaEvaluacion;
}


