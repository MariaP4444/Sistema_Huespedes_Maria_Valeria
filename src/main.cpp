//
// Created by Lenovo on 17/03/2023.
//

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

void mostrarMenu() {
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
                primeraOpcion(refugio, id);
                id++;
                break;
            case 2:
                refugio->mostrarPerros();
                break;
            case 3:
                cout << "Ingrese la id del perro que quiere buscar: ";
                cin >> id;
                cout << "El perro con id " << id << endl;
                if(refugio->idVector(id)){
                    cout << "--Si se encontro" << endl;
                }
                else{
                    cout << " No se encontro" << endl;
                }
                break;
            case 4:
                cout << "Ingrese la edad minima de los perros que quieres listar: ";
                cin >> edad;
                refugio->listaPerros(edad);
                break;
            case 5:
                cout << "Ingrese la id del perro que quiere adoptar: ";
                cin >> adoptar;
                refugio->adopcion(adoptar);
                break;
            default:
                break;
        }
    } while (opc != 0);
}



int main(){

};





