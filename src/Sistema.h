//
// Created by Lenovo on 19/03/2023.
//

#ifndef SISTEMA_HUESPEDES_MARIA_VALERIA_SISTEMA_H
#define SISTEMA_HUESPEDES_MARIA_VALERIA_SISTEMA_H

#include <iostream>
#include <unordered_map>
#include <vector>

#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"

using namespace std;

class Sistema {
private:
    unordered_map <int, Huesped*> huespedes;
    unordered_map <int, Propietario*> propietarios;
public:
    Sistema() = default;
    void mostrarHuesped();
    void mostrarPropietarios();
    void registrarHuesped(int id, string nombre, string sexo, string nacimiento, string hospital, string origen);
    void datosHuesped();
    void registrarPropietario(int id, string nombre, string sexo, string nacimiento, hogar *pHogar);
    void datosPropietario();
};


#endif //SISTEMA_HUESPEDES_MARIA_VALERIA_SISTEMA_H
