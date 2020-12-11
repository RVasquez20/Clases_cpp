#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <string.h>
#include <strings.h>
#include <fstream>
#include <new>
#include <sstream>
#include <time.h>
using namespace std;

int main() {

    string Nombre;
    string Apellido;
    string EstadoCivil;
    string Direccion;
    int Edad = 0;

    cout << "Ingresar nombre: ";
    getline(cin, Nombre);
    cout << "Ingresar apellido: ";
    getline(cin, Apellido);
    cout << "Ingrese el estado civil: ";
    getline(cin, EstadoCivil);
    cout << "Ingrese la direccion: ";
    getline(cin, Direccion);
    cout << "Ingrese la edad: ";
    cin >> Edad;

    if (Edad >= 18) {
        cout << "\nNombre: " << Nombre << endl;
        cout << "Apellido: " << Apellido << endl;
        cout << "Estado Civil: " << EstadoCivil << endl;
        cout << "Direccion: " << Direccion << endl;
        cout << "Edad: " << Edad << endl;
        cout << "La persona es mayor de edad" << endl;
    } else if (Edad > 0) {
        cout << "\nNombre: " << Nombre << endl;
        cout << "Apellido: " << Apellido << endl;
        cout << "Estado Civil: " << EstadoCivil << endl;
        cout << "Direccion: " << Direccion << endl;
        cout << "Edad: " << Edad << endl;
        cout << "La persona es menor de edad" << endl;
    } else {
        cout << "\nLa edad ingresada no es valida, por favor ingrese un dato correcto." << endl;
    }
    return 0;
}