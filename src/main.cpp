//
// Created by Lenovo on 17/03/2023.
//

#include <iostream>

#include "Sistema.h"

using namespace std;

void primeraOpcion(int id, Sistema* pSistema){

    bool hospedado = false;
    int esHuesped = 0;
    int esPropietario = 0;
    // 1-Huesped
    // 2-Propietario

    esHuesped = pSistema->existeIDhuesped(id);
    esPropietario = pSistema->existeIDpropietario(id);

    if(esHuesped == 1 && esPropietario == 0){
        //algo anda mal
        hospedado = pSistema->existeIDreserva(id);

        if(hospedado == true){
            int op;
            cout<< "1.Evaluar" << endl;
            cout<< "0.Salir" << endl;

            cin >> op;
            if(op == 1){

            }
        }
        else{
            cout<< "Crea tu reserva" << endl;
            pSistema->crearReserva(id);
        }
    }
    else{
        int op;
        cout<< "1.Terminar estadia" << endl;
        cout<< "2.Evaluar" << endl;
        cout<< "0.Salir" << endl;

        cin >> op;
        if(op == 1){

        }

    }
}

void segundaOpcion(Sistema* pSistema){
    int op;
    cout<< "Seleccione una opcion" << endl;
    cout<< "1. Registrar como huesped" << endl;
    cout<< "2. Registrar como propietario" << endl;

    cin >> op;
    if(op == 1){
        pSistema->datosHuesped();
    }
    else{
        pSistema->datosPropietario();
    }
}


void mostrarMenu(Sistema* pSistema) {
    int id;
    int opc = 0;

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
                cout <<"Ingrese id\n" << endl;
                cin >> id;
                primeraOpcion(id, pSistema);
                break;
            case 2:
                segundaOpcion(pSistema);
                break;
            case 3:
                pSistema->mostrarPropietarios();
                cout <<"--------------\n" << endl;
                pSistema->mostrarHuesped();
                break;
            case 4:
                pSistema->mostrarReservas();
                break;
            case 5:

                break;
            default:
                break;
        }
    } while (opc != 0);
}

int main(){
    Sistema* pSistema = new Sistema();
    mostrarMenu(pSistema);

    delete pSistema;
    return 0;
};





