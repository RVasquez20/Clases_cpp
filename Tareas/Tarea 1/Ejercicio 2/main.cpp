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

    string NombreCompleto;
    string Materia;
    string Grado;
    float Nota1 = 0.0;
    float Nota2 = 0.0;
    float Nota3 = 0.0;
    float Nota4 = 0.0;
    float Nota5 = 0.0;
    float Promedio = 0.0;

    cout << "Ingrese el nombre completo de alumno: ";
    getline(cin, NombreCompleto);cout<<endl;
    cout << "Ingrese la materia: ";
    getline(cin, Materia);cout<<endl;
    cout << "Ingrese el grado: ";
    getline(cin, Grado);cout<<endl;
    cout << "Ingrese la nota 1: ";
    cin >> Nota1;cout<<endl;
    cout << "Ingrese la nota 2: ";
    cin >> Nota2;
cout<<endl;
    cout << "Ingrese la nota 3: ";
    cin >> Nota3;cout<<endl;
    cout << "Ingrese la nota 4: ";
    cin >> Nota4;cout<<endl;
    cout << "Ingrese la nota 5: ";
    cin >> Nota5;cout<<endl;
    Promedio = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5) / 5;

    if ((Nota1 > 0) && (Nota2 > 0) && (Nota3 > 0) && (Nota4 > 0) && (Nota5 > 0)){
        if((Nota1 >100) || (Nota2 > 100) || (Nota3 > 100) || (Nota4 > 100) || (Nota5 > 100)){
            cout<<"Datos mal ingresados"<<endl;
        }else{
            if (Promedio >= 61){
                cout << "\nEl nombre del alumno es: " << NombreCompleto << endl;
                cout << "La materia es: " << Materia << endl;
                cout << "El grado que cursa es: " << Grado << endl;
                cout << "La nota 1 es: " << Nota1 << endl;
                cout << "La nota 2 es: " << Nota2 << endl;
                cout << "La nota 3 es: " << Nota3 << endl;
                cout << "La nota 4 es: " << Nota4 << endl;
                cout << "La nota 5 es: " << Nota5 << endl;
                cout << "El promedio de las 5 notas es: " << Promedio << endl;
                cout << "El estudiante aprobo el curso con " << " " << Promedio << " " << "Puntos." << endl;
            }else{
                cout << "\nEl nombre del alumno es: " << NombreCompleto << endl;
                cout << "La materia es: " << Materia << endl;
                cout << "El grado que cursa es: " << Grado << endl;
                cout << "La nota 1 es: " << Nota1 << endl;
                cout << "La nota 2 es: " << Nota2 << endl;
                cout << "La nota 3 es: " << Nota3 << endl;
                cout << "La nota 4 es: " << Nota4 << endl;
                cout << "La nota 5 es: " << Nota5 << endl;
                cout << "El promedio de las 5 notas es: " << Promedio << endl;
                cout << "El estudiante reprobo el curso con " << " " << Promedio << " " << "Puntos." << endl;
            }}

    }else{
        cout << "\nCorrobore que todas la notas sean mayores a 0" << endl;
    }
}