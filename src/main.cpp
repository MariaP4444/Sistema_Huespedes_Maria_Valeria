//
// Created by Lenovo on 17/03/2023.
//

#include <iostream>

#include "Sistema.h"
using namespace std;

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





