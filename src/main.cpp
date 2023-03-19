//
// Created by Lenovo on 17/03/2023.
//

#include <iostream>
#include <unordered_map>
#include <vector>

#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"

using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;


void registrarHuesped(unordered_map <int, Huesped*> huespedes, int id, string nombre, string sexo, string nacimiento, string hospital, string origen){

    Huesped* pHuespedTemp = new Huesped(nombre, sexo, nacimiento, hospital, origen, id, 0); // Creado en el heap
    huespedes.insert(make_pair(id, pHuespedTemp));
}

void registrarPropietario(unordered_map <int, Huesped*> propietarios, int id, string nombre, string sexo, string nacimiento){
    bool ocupado = false;
    Propietario* pPropietarioTemp = new Propietario(nombre, sexo, nacimiento, id, ocupado, 0); // Creado en el heap
    propietarios.insert(make_pair(id, pPropietarioTemp));
}

void datosHuesped(unordered_map <int, Huesped*> huespedes) {
    string nombreTemp, sexoTemp, nacimientoTemp, hospitalTemp, origenTemp;
    int idTemp;
    float puntajeEvaluacion;

    cout << "Ingrese nombre del huesped " << endl;
    cin.ignore();
    getline(cin, nombreTemp, '\n');
    cout << "Ingrese sexo del huesped " << endl;
    cin >> sexoTemp;
    cout << "Ingrese fecha de nacimeinto del huesped " << endl;
    cin >> nacimientoTemp;
    cout << "Ingrese hospital relacionado con el huesped" << endl;
    cin.ignore();
    getline(cin, hospitalTemp, '\n');
    cout << "Ingrese lugar de origen del huesped " << endl;
    cin.ignore();
    getline(cin, origenTemp, '\n');
    cout << "Ingrese ID del huesped " << endl;
    cin >> idTemp;

    registrarHuesped(huespedes, idTemp, nombreTemp, sexoTemp, nacimientoTemp, hospitalTemp, origenTemp);
}

void datosPropietario(unordered_map <int, Propietario*> propietarios) {
    string nombreTemp, sexoTemp, nacimientoTemp;
    int idTemp;

    float puntajeEvaluacion;

    cout << "Ingrese nombre del huesped " << endl;
    cin.ignore();
    getline(cin, nombreTemp, '\n');
    cout << "Ingrese sexo del huesped " << endl;
    cin >> sexoTemp;
    cout << "Ingrese fecha de nacimeinto del huesped " << endl;
    cin >> nacimientoTemp;
    cout << "Ingrese ID del huesped " << endl;
    cin >> idTemp;

    //refugio->recibirPerro(idTemp, nombreTemp, sexoTemp, nacimientoTemp, hospitalTemp, origenTemp);
}

void segundaOpcion(unordered_map <int, Huesped*> huespedes, unordered_map <int, Propietario*> propietarios){
    int op;
    cout<< "Seleccione una opcion" << endl;
    cout<< "1. Registrar como huesped" << endl;
    cout<< "2. Registrar como propietario" << endl;

    cin >> op;
    if(op == 1){
        datosHuesped(huespedes);
    }
    else{
        datosPropietario(propietarios);
    }
}


void mostrarMenu() {
    int id;
    int opc = 0;
    unordered_map <int, Huesped*> huespedes;
    unordered_map <int, Propietario*> propietarios;
    vector<Reserva*> reservas;

    do
    {
        cout << "\n** Bienvenidos al sistema \n";
        cout << "1. Iniciar sesion\n";
        cout << "2. Crear nuevo usuario \n";
        cout << "3. Ver lista de personas asociadas\n";
        cout << "4. Ver lista de reservas\n";
        cout << "5. Ver lista de evaluaciones \n";
        cout << "0. Salir\n" << endl;

        cin >> opc;

        switch (opc)
        {
            case 1:
                cout << "Ingresar ID persona" << endl;
                cin >> id;
                primeraOpcion(huespedes, propietarios, id);
                break;
            case 2:
                segundaOpcion(huespedes, propietarios);
                refugio->mostrarPerros();
                break;
            case 3:

                break;
            case 4:


                break;
            case 5:


                break;
            default:
                break;
        }
    } while (opc != 0);
}

int main(){
    mostrarMenu();
    return 0;
};





