//
// Created by Lenovo on 17/03/2023.
//

#ifndef SISTEMA_HUESPEDES_MARIA_VALERIA_PROPIETARIO_H
#define SISTEMA_HUESPEDES_MARIA_VALERIA_PROPIETARIO_H

#include <string>
#include <iostream>
#include "hogar.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;


class Propietario {
private:
    string nombre;
    string sexo;
    string  fechaNacimiento;
    int ID;
    bool ocupado;
    float puntajeEvaluacion;
    hogar* pHogar;

public:
    Propietario()=default;
    Propietario(string nombre, string sexo, string fechaNacimiento, int ID, bool ocupado, float puntajeEvaluacion, hogar* pHogar);
    string getNombre();
    void setNombre(string nombre);

    string getSexo();
    void setSexo(string sexo);

    string getFechaNacimiento();
    void setFechaNacimiento(string fechaNacimiento);

    int getId();
    void setId(int id);

    float getPuntajeEvaluacion() ;
    void setPuntajeEvaluacion(float puntajeEvaluacion);

    bool getOcupado();
    void setOcupado(bool ocupado);

    hogar *getPHogar();
    void setPHogar(hogar *pHogar);

    void nuevoPuntaje(int calificacion);

    void agregarCasa(string direccion, string desc, int numCamas, bool bebes);

};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_PROPIETARIO_H
