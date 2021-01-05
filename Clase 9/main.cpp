#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<conio.h>

using namespace std;
//Estructuras->Estructuras Con Arreglos(Dentro de la estructura, y arreglos de tipo estructura)->Funciones
int main() {
//Sintaxys
/*Ejercicio 1: Estructura normal
struct Estudiantes{
    int Codigo;
    char Nombre[50];
    double Nota;
}Estudiante1;

Estudiante1.Codigo=2;
Estudiante1.Nombre="Juan";
Estudiante1.Nota=70.2;
cout<<"Ingrese el codigo del estudiante 1: ";
cin>>Estudiante1.Codigo;
fflush(stdin);
cout<<"Ingrese el nombre del estudiante 1: ";
cin.getline(Estudiante1.Nombre,50,'\n');
cout<<"Ingrese a nota de "<<Estudiante1.Nombre<<endl;
cin>>Estudiante1.Nota;
cout<<"El nombre del estudiante1 es: "<<Estudiante1.Nombre<<endl;
cout<<"El codigo estudiantil es: "<<Estudiante1.Codigo<<endl;
cout<<"La nota es : "<<Estudiante1.Nota<<endl;
*/
//Ejercicio 2: Estructura Fecha de nacimiento, Estudiante (Estructuras Anidadas)
/*1)Sintaxys,2)La estructura a anidar , tiene que estar siempre por ensima de la que la contrendra
    struct FechaDeNacimiento{
        int dia,mes,anio;
    };

    struct Estudiantes{
        int Codigo;
        char Nombre[50];
        double Nota;
        struct FechaDeNacimiento Fecha;
    }Estudiante1;
    struct Empleados{
        char Nombre[50],Puesto[50];
        struct FechaDeNacimiento Fecha;
    };
    //Creacion de variable de tipo estructura
    Empleados Empleado;

    cout<<"Ingrese el codigo del estudiante 1: ";
    cin>>Estudiante1.Codigo;
    fflush(stdin);
    cout<<"Ingrese el nombre del estudiante 1: ";
    cin.getline(Estudiante1.Nombre,50,'\n');
    cout<<"Ingrese a nota de "<<Estudiante1.Nombre<<endl;
    cin>>Estudiante1.Nota;
    cout<<"Ingrese el dia de nacimiento del estudiante :";
    cin>>Estudiante1.Fecha.dia;
    cout<<"Ingrese el mes de nacimiento del estudiante :";
    cin>>Estudiante1.Fecha.mes;
    cout<<"Ingrese el año de nacimiento del estudiante :";
    cin>>Estudiante1.Fecha.anio;
    cout<<"El nombre del estudiante1 es: "<<Estudiante1.Nombre<<endl;
    cout<<"El codigo estudiantil es: "<<Estudiante1.Codigo<<endl;
    cout<<"La nota es : "<<Estudiante1.Nota<<endl;
    cout<<"El dia de nacimiento del estudiante es:"<<Estudiante1.Fecha.dia<<endl;
    cout<<"El mes de nacimiento del estudiante es:"<<Estudiante1.Fecha.mes<<endl;
    cout<<"El año de nacimiento del estudiante es:"<<Estudiante1.Fecha.anio<<endl;
    cout<<"La edad de "<<Estudiante1.Nombre<<" es :"<<2021-Estudiante1.Fecha.anio<<endl;
    fflush(stdin);
    cout<<"Ingrese el nombre del Empleado : ";
    cin.getline(Empleado.Nombre,50,'\n');
    cout<<"Ingrese el Puesto del Empleado : ";
    cin.getline(Empleado.Puesto,50,'\n');
    cout<<"Ingrese el dia de nacimiento del Empleado :";
    cin>>Empleado.Fecha.dia;
    cout<<"Ingrese el mes de nacimiento del Empleado :";
    cin>>Empleado.Fecha.mes;
    cout<<"Ingrese el año de nacimiento del Empleado :";
    cin>>Empleado.Fecha.anio;
    cout<<"El nombre del Empleado es: "<<Empleado.Nombre<<endl;
    cout<<"El Puesto  es: "<<Empleado.Puesto<<endl;
    cout<<"La fecha de nacimiento del empleado es: "<<Empleado.Fecha.dia<<"/"<<Empleado.Fecha.mes<<"/"<<Empleado.Fecha.anio<<endl;
    cout<<"La edad de "<<Empleado.Nombre<<" es :"<<2021-Empleado.Fecha.anio<<endl;
    */
/*Ejericio 3: Estructuras Anidadas, Calculo de edad, calculo de promedio
    struct FechaDeNacimiento{
        int dia,mes,anio;
    };

    struct Estudiantes{
        int Codigo;
        char Nombre[50];
        double ArrayNota[100];
        struct FechaDeNacimiento Fecha;
        double Promedio;
    }Estudiante1;

    int Suma=0,CantidadDeNotas=0;


    cout<<"Ingrese el codigo del estudiante 1: ";
    cin>>Estudiante1.Codigo;
    fflush(stdin);
    cout<<"Ingrese el nombre del estudiante 1: ";
    cin.getline(Estudiante1.Nombre,50,'\n');
    cout<<"Ingrese la cantidad de notas a promediar: ";
    cin>>CantidadDeNotas;
    for(int i=0;i<CantidadDeNotas;i++) {
        cout << "Ingrese la nota "<<i+1<<" de " << Estudiante1.Nombre << endl;
        cin >> Estudiante1.ArrayNota[i];
        Suma+=Estudiante1.ArrayNota[i];
    }
    Estudiante1.Promedio=Suma/CantidadDeNotas;
    cout<<"Ingrese el dia de nacimiento del estudiante :";
    cin>>Estudiante1.Fecha.dia;
    cout<<"Ingrese el mes de nacimiento del estudiante :";
    cin>>Estudiante1.Fecha.mes;
    cout<<"Ingrese el año de nacimiento del estudiante :";
    cin>>Estudiante1.Fecha.anio;
    cout<<"El nombre del estudiante1 es: "<<Estudiante1.Nombre<<endl;
    cout<<"El codigo estudiantil es: "<<Estudiante1.Codigo<<endl;
    for(int i=0;i<CantidadDeNotas;i++) {
        cout << "La nota "<<i+1<<" de " << Estudiante1.Nombre << "Es :"<<Estudiante1.ArrayNota[i]<<endl;

    }
    cout<<"El dia de nacimiento del estudiante es:"<<Estudiante1.Fecha.dia<<endl;
    cout<<"El mes de nacimiento del estudiante es:"<<Estudiante1.Fecha.mes<<endl;
    cout<<"El año de nacimiento del estudiante es:"<<Estudiante1.Fecha.anio<<endl;
    cout<<"La edad de "<<Estudiante1.Nombre<<" es :"<<2021-Estudiante1.Fecha.anio<<endl;
    cout<<"El promedio es: "<<Estudiante1.Promedio<<endl;
    fflush(stdin);
*/
   // Ejericio 4: Estructuras Anidadas, Calculo de edad, calculo de promedio,Si es mayor a 61 Aprobado de lo contrario Reprobado,
   //El usuario indica cuantos estudiantes desea ingresar
    struct FechaDeNacimiento{
        int dia,mes,anio;
    };

    struct Estudiantes{
        int Codigo;
        char Nombre[50];
        double ArrayNota[100];
        struct FechaDeNacimiento Fecha;
        double Promedio;
    }Estudiante1;

    int CantidadDeEstudiantes=0;
cout<<"Ingrese la cantidad de estudiantes a promediar :";
cin>>CantidadDeEstudiantes;
for(int i=0;i<CantidadDeEstudiantes;i++) {
    int Suma=0,CantidadDeNotas=0;
    cout << "Ingrese el codigo del estudiante "<<i+1<<":";
    cin >> Estudiante1.Codigo;
    fflush(stdin);
    cout << "Ingrese el nombre del estudiante : "<<i+1;
    cin.getline(Estudiante1.Nombre, 50, '\n');
    cout << "Ingrese la cantidad de notas a promediar: ";
    cin >> CantidadDeNotas;
    for (int i = 0; i < CantidadDeNotas; i++) {
        cout << "Ingrese la nota " << i + 1 << " de " << Estudiante1.Nombre << endl;
        cin >> Estudiante1.ArrayNota[i];
        Suma += Estudiante1.ArrayNota[i];
    }
    Estudiante1.Promedio = Suma / CantidadDeNotas;
    cout << "Ingrese el dia de nacimiento del estudiante "<<i+1<<":";
    cin >> Estudiante1.Fecha.dia;
    cout << "Ingrese el mes de nacimiento del estudiante "<<i+1<<":";
    cin >> Estudiante1.Fecha.mes;
    cout << "Ingrese el año de nacimiento del estudiante "<<i+1<<":";
    cin >> Estudiante1.Fecha.anio;
    cout << "El nombre del estudiante"<<i+1<<" es: " << Estudiante1.Nombre << endl;
    cout << "El codigo estudiantil es: " << Estudiante1.Codigo << endl;
    for (int i = 0; i < CantidadDeNotas; i++) {
        cout << "La nota " << i + 1 << " de " << Estudiante1.Nombre << "Es :" << Estudiante1.ArrayNota[i] << endl;

    }
    cout << "El dia de nacimiento del estudiante es:" << Estudiante1.Fecha.dia << endl;
    cout << "El mes de nacimiento del estudiante es:" << Estudiante1.Fecha.mes << endl;
    cout << "El año de nacimiento del estudiante es:" << Estudiante1.Fecha.anio << endl;
    cout << "La edad de " << Estudiante1.Nombre << " es :" << 2021 - Estudiante1.Fecha.anio << endl;
    cout << "El promedio es: " << Estudiante1.Promedio << endl;
    if(Estudiante1.Promedio>61){
        cout<<"APROBADO"<<endl;
    }else{
        cout<<"REPROBADO"<<endl;
    }
    fflush(stdin);
}
    return 0;
}
