//
// Created by Lenovo on 17/03/2023.
//

#ifndef SISTEMA_HUESPEDES_MARIA_VALERIA_HUESPED_H
#define SISTEMA_HUESPEDES_MARIA_VALERIA_HUESPED_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

class Huesped {
private:
    string nombreH;
    string sexoH;
    string fechaNacimientoH;
    string hospitalH;
    string origenH;
    int IDh;
    float puntajeEvaluacionH;

public:
    Huesped()= default;
    Huesped(string nombreH, string sexoH, string fechaNacimientoH, string hospitalH, string origenH, int IDh, float puntajeEvaluacionH);
    string getNombre();
    void setNombre(string nombre);

    string getSexo();
    void setSexo(string sexo);

    string getFechaNacimiento();
    void setFechaNacimiento(string fechaNacimiento);

    string getHospital();
    void setHospital(string nombre);

    int getId();
    void setId(int id);

    float getPuntajeEvaluacion() ;
    void setPuntajeEvaluacion(float puntajeEvaluacion);

    void setOrigen(string origen);
    string getOrigen();

    void nuevoPuntaje(int calificacion);
};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_HUESPED_H
