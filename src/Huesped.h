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
    string nombre;
    string sexo;
    string fechaNacimiento;
    string hospital;
    string origen;
    int ID;
    float puntajeEvaluacion;

public:
    Huesped()= default;
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

};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_HUESPED_H
