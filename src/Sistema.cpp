//
// Created by Lenovo on 19/03/2023.
//

#include "Sistema.h"

void Sistema::mostrarHuesped() {
    unordered_map<int, Huesped*>::iterator itMapH;
    cout << "Los huespedes inscritos en el sistema son:\n";

    for (itMapH = this->huespedes.begin(); itMapH != this->huespedes.end(); ++itMapH){
        cout << "El Huesped de id " << itMapH->first << ", se llama " << itMapH->second->getNombre() << endl;
    }
}

void Sistema::mostrarPropietarios() {
    unordered_map<int, Propietario*>::iterator itMapP;
    cout << "Los Propietarios inscritos en el sistema son:\n";

    for (itMapP = this->propietarios.begin(); itMapP != this->propietarios.end(); ++itMapP){
        cout << "El Propietario de id " << itMapP->first << ", se llama " << itMapP->second->getNombre() << endl;
    }
}

void Sistema::registrarHuesped(int id, string nombre, string sexo, string nacimiento, string hospital, string origen){

    Huesped* pHuesped = new Huesped(nombre, sexo, nacimiento, hospital, origen, id, 0);
    this->huespedes.insert(make_pair(id, pHuesped));
}

void Sistema::datosHuesped() {
    string nombre, genero, nacimiento, hospital, lugar;
    int id;

    cout << "Ingrese nombre del huesped " << endl;
    cin.ignore();
    getline(cin, nombre, '\n');
    cout << "Ingrese sexo del huesped " << endl;
    cin >> genero;
    cout << "Ingrese fecha de nacimeinto del huesped " << endl;
    cin >> nacimiento;
    cout << "Ingrese hospital relacionado con el huesped" << endl;
    cin.ignore();
    getline(cin, hospital, '\n');
    cout << "Ingrese lugar de origen del huesped " << endl;
    cin.ignore();
    getline(cin, lugar, '\n');
    cout << "Ingrese ID del huesped " << endl;
    cin >> id;

    registrarHuesped(id, nombre, genero, nacimiento, hospital, lugar);
}

void Sistema::registrarPropietario(int id, string nombre, string sexo, string nacimiento, hogar *pHogar){

    Propietario* pPropietario = new Propietario(nombre, sexo, nacimiento, id, false, 0,pHogar);
    this->propietarios.insert(make_pair(id, pPropietario));
}

void Sistema::datosPropietario() {
    string nombreTemp, sexoTemp, nacimientoTemp, dirrecionTemp, descripcionTemp;
    int idTemp, numCamasTemp;
    bool bebesTemp;
    hogar* pHogarP = new hogar();

    cout << "Ingrese su nombre" << endl;
    cin.ignore();
    getline(cin, nombreTemp, '\n');
    cout << "Ingrese su sexo " << endl;
    cin >> sexoTemp;
    cout << "Ingrese la fecha de su nacimeinto" << endl;
    cin >> nacimientoTemp;
    cout << "Ingrese su ID " << endl;
    cin >> idTemp;

    cout << "Ingrese la dirrecion de su hogar " << endl;
    cin.ignore();
    getline(cin, dirrecionTemp, '\n');
    cout << "Ingrese una breve descripcion sobre su hogar " << endl;
    cin.ignore();
    getline(cin, descripcionTemp, '\n');
    cout << "Ingrese el numero de camas con el que cuenta" << endl;
    cin >> numCamasTemp;
    cout << "Acepta bebes?" << endl;
    cin >> bebesTemp;

    pHogarP->setDireccion(dirrecionTemp);
    pHogarP->setDesc(descripcionTemp);
    pHogarP->setNumCamas(numCamasTemp);
    pHogarP->setBebes(bebesTemp);

    registrarPropietario(idTemp,nombreTemp, sexoTemp, nacimientoTemp,pHogarP);
}

int Sistema::existeIDhuesped(int id){
    unordered_map<int, Huesped*>::iterator itMapH;

    for (itMapH =this->huespedes.begin(); itMapH != this->huespedes.end(); ++itMapH){
        if(id == itMapH->first){
            return 1;
        }
    }
    return 0;
}

int Sistema::existeIDpropietario(int id){
    unordered_map<int, Propietario*>::iterator itMapP;

    for (itMapP =this->propietarios.begin(); itMapP != this->propietarios.end(); ++itMapP){
        if(id == itMapP->first){
            return 2;
        }
    }
    return 0;
}

bool Sistema::existeIDreserva(int id){
    vector<Reserva*>::iterator itVectorRe;

    for (itVectorRe = this->reservas.begin(); itVectorRe != this->reservas.end(); ++itVectorRe){
        Reserva* reservaTemp = *itVectorRe;
        if(id == reservaTemp->getIDhuesped()){
            return true;
        }
    }
    return false;
}

void Sistema::crearReserva(int idH){
    string fInicio, fFin;
    int idP;
    Propietario* Tpropietario;

    cout<< "Ingrese fecha inicio de la estadia" << endl;
    cin >> fInicio;

    cout<< "Ingrese fecha fin de la estadia" << endl;
    cin >> fFin;

    cout<< "Ingrese ID del propietario" << endl;
    cin >> idP;

    //Advertencia: se asume que idP esta en el mapa propietarios (ya registrado)
    Tpropietario = this->devolverPunteroP(idP);

    if(Tpropietario->getOcupado() == true){
        cout<< "Este usuario no tiene cupo par hospedar" << endl;
    }
    else{
        Reserva* pReserva = new Reserva(fInicio, fFin, idP, idH);

        this->reservas.push_back(pReserva);

        Tpropietario->setOcupado(true);
    }

}

/*
Huesped* Sistema::devolverPunteroH(int id){
    unordered_map<int, Huesped*>::iterator itMapH;

    for (itMapH = this->huespedes.begin(); itMapH != this->huespedes.end(); ++itMapH){
        Huesped* huespedTemp = itMapH->second;
        if(id == itMapH->first){
            return huespedTemp;
        }
    }
}
*/
Propietario* Sistema::devolverPunteroP(int id){
    unordered_map<int, Propietario*>::iterator itMapH;

    for (itMapH = this->propietarios.begin(); itMapH != this->propietarios.end(); ++itMapH){
        Propietario* propietarioTemp = itMapH->second;
        if(id == itMapH->first){
            return propietarioTemp;
        }
    }
}