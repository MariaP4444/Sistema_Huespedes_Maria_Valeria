//
// Created by Lenovo on 17/03/2023.
//

#ifndef SISTEMA_HUESPEDES_MARIA_VALERIA_EVALUACION_H
#define SISTEMA_HUESPEDES_MARIA_VALERIA_EVALUACION_H


#include <iostream>
#include <string>

using std::string;


class Evaluacion {
private:
    string fechaEvaluacion;
    string comentario;
    string personaDirigida;
    string personaEvaluacion;
    int calificar;

public:

    Evaluacion() = default;
    int getCalificar();
    void setCalificar(int calificar);

    string getComentario();
    void setComentario(string comentario);

    string getFechaEvaluacion();
    void setFechaEvaluacion(string fechaEvaluacion);

    string getPersonaDirigida();
    void setPersonaDirigida(string personaDirigida);

    string getPersonaEvaluacion();
    void setPersonaEvaluacion(string personaEvaluacion);
};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_EVALUACION_H
