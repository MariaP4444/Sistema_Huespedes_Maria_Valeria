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
    int personaDirigida;
    int personaEvaluacion;
    int calificar;

public:

    Evaluacion() = default;
    Evaluacion(string fechaEvaluacion, string comentario, int personaDirigida, int personaEvaluacion, int calificar);

    int getCalificar();
    void setCalificar(int calificar);

    string getComentario();
    void setComentario(string comentario);

    string getFechaEvaluacion();
    void setFechaEvaluacion(string fechaEvaluacion);

    int getPersonaDirigida();
    void setPersonaDirigida(int personaDirigida);

    int getPersonaEvaluacion();
    void setPersonaEvaluacion(int personaEvaluacion);
};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_EVALUACION_H
