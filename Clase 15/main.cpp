#include <iostream>
#include <new>
#include <windows.h>
#include <string>
#include <string.h>
#include <strings.h>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <stdio.h>

using namespace std;

string NArchivo = "Empleados.txt";
string NArchivo1 = "NotasAlumnos.txt";

void MenuP();
void Ejercicio1();
void Ejercicio1CrearEIngresar();
void Ejercicio1Leer();
void Ejercicio1Actualizar();
void Ejercicio1Eliminar();
void Ejercicio1Buscar();
void Ejercicio2();
void Ejercicio2CrearEIngresar();
void Ejercicio2Leer();

int main(){
    MenuP();
    return 0;
}
void MenuP(){
    int Opc = 0;

    loop:
    cout << "=====MENU PRINCIPAL=====" << endl;
    cout << "1. Ejercicio 1"           << endl;
    cout << "2. Ejercicio 2"           << endl;
    cout << "3. Salir"                 << endl;
    fflush(stdin);

    cout << "Seleccione el ejercicio a ejecutar: ";
    cin >> Opc;

    switch(Opc){
        case 1:{
            Ejercicio1();
            MenuP();
            break;
        }
        case 2:{
            Ejercicio2();
            MenuP();
            break;
        }
        case 3:{
            cout << "Gracias por utilizar el programa :D" << endl;
            exit(0);
            break;
        }
        default:{
            cout << "Opcion invalida, intente de nuevo..." << endl;
            goto loop;
            getch();
            break;
        }
    }
}
void Ejercicio1(){
    int Opc2 = 0;

    loop2:
    cout << "=====Menu=====" << endl;
    cout << "1. Crear e ingresar" << endl;
    cout << "2. Leer" << endl;
    cout << "3. Actualizar" << endl;
    cout << "4. Elminar" << endl;
    cout << "5. Buscar" << endl;
    cout << "6. Salir" << endl;
    fflush(stdin);

    cout << "Seleccione una accion: ";
    cin >> Opc2;

    switch(Opc2){
        case 1:{
            Ejercicio1CrearEIngresar();
            Ejercicio1();
            break;
        }
        case 2:{
            Ejercicio1Leer();
            Ejercicio1();
            break;
        }
        case 3:{
            Ejercicio1Actualizar();
            Ejercicio1();
            break;
        }
        case 4:{
            Ejercicio1Eliminar();
            Ejercicio1();
            break;
        }
        case 5:{
            Ejercicio1Buscar();
            Ejercicio1();
            break;
        }
        case 6:{
            exit(0);
            break;
        }
        default:{
            cout << "Opcion invalida, intente de nuevo..." << endl;
            goto loop2;
            getch();
            break;
        }
    }
}
void Ejercicio1CrearEIngresar(){
    fstream Archivo;
    string Nombre;
    string Apellido;

    Archivo.open(NArchivo,ios::app);
    if(Archivo.fail()){
        cout << "Error al crear... " << endl;
    }else{
        fflush(stdin);
        cout << "Ingrese el nombre del empleado: ";
        getline(cin,Nombre);
        fflush(stdin);
        cout << "Ingrese el Apellido del empleado: ";
        getline(cin,Apellido);
        fflush(stdin);
        Archivo <<  Nombre <<" "<< Apellido << endl;
        Archivo << "===================================" << endl;
    }
    Archivo.close();
}
void Ejercicio1Leer(){
    ifstream Archivo;
    string Leer;

    Archivo.open(NArchivo,ios::in);
    if(Archivo.fail()){
        cout << "Error al leer el archivo..." << endl;
    }else{
        while(!Archivo.eof()){
            getline(Archivo,Leer);
            cout << Leer << endl;
        }
    }
    Archivo.close();
}
void Ejercicio1Actualizar(){
    ifstream Archivo;
    fstream Temporal;
    string Actualizar, NombreCompledoAModificar, NombreNuevo,ApellidoNuevo;
    bool Encontrado = false;

    Archivo.open(NArchivo,ios::in);
    Temporal.open("Temporal.txt",ios::out);

    if(Archivo.fail() || Temporal.fail()){
        cout << "Error..." << endl;
    }else{
        fflush(stdin);
        cout << "Ingrese el Nombre y apellido del empleado que desea modificar: ";
        getline(cin,NombreCompledoAModificar);
        fflush(stdin);
        while(!Archivo.eof()){
            getline(Archivo,Actualizar);
            if(Actualizar.compare(NombreCompledoAModificar) ==0){
                Encontrado = true;
                cout << "Digite el nuevo Nombre del empleado: ";
                getline(cin,NombreNuevo);
                fflush(stdin);
                cout << "Digite el nuevo Apellido del empleado: ";
                getline(cin,ApellidoNuevo);
                fflush(stdin);
                Temporal <<  NombreNuevo <<" "<< ApellidoNuevo << endl;
            }else{
                Temporal << Actualizar << endl;
            }
        }
    }
    Archivo.close();
    Temporal.close();
    remove(NArchivo.c_str());
    rename("Temporal.txt",NArchivo.c_str());
    if(!Encontrado){
        cout  << "Lo sentimos no encontramos el dato ingresado" << endl;

    }
}
void Ejercicio1Eliminar(){
    ifstream Archivo;
    fstream Temporal;
    string Eliminar,NAModificar;
    bool Encontrado = false;

    Archivo.open(NArchivo,ios::in);
    Temporal.open("Temporal.txt",ios::out);

    if(Archivo.fail() || Temporal.fail()){
        cout << "Error..." << endl;
    }else{
        fflush(stdin);
        cout << "Porfavor Ingrese el Nombre Completo del empelado que desea eliminar";
        getline(cin,NAModificar);
        fflush(stdin);
        while(!Archivo.eof()){
            getline(Archivo,Eliminar);
            if(Eliminar.compare(NAModificar) == 0){
                Encontrado = true;
            }else {
                Temporal << Eliminar << endl;
            }
        }
    }
    Archivo.close();
    Temporal.close();
    remove(NArchivo.c_str());
    rename("Temporal.txt",NArchivo.c_str());
    if(!Encontrado){
        cout << "Lo sentimos no hay ningun dato..." << endl;
    }
}
void Ejercicio1Buscar(){
    ifstream Archivo;
    string Buscar,NombreABuscar;
    bool Encontrado=false;

    Archivo.open(NArchivo,ios::in);
    if(Archivo.fail()){
        cout << "Error..." << endl;
    }else{
        fflush(stdin);
        cout << "Porfavor Ingrese el Nombre Completo que sea busar";
        getline(cin,NombreABuscar);
        fflush(stdin);
        while(!Archivo.eof()){
            getline(Archivo,Buscar);
            if(Buscar.compare(NombreABuscar)==0){
                Encontrado=true;
                cout << "Esta Registrado : " << Buscar << " Como Empleado." << endl;
            }
        }
        Archivo.close();
        if(!Encontrado){
            cout<<"Lo sentimos dato no existe..."<<endl;
        }
    }
}
void Ejercicio2(){
    int Opc3 = 0;

    loop3:
    cout << "=====Menu=====" << endl;
    cout << "1. Crear e ingresar" << endl;
    cout << "2. Leer" << endl;
    cout << "3. Salir" << endl;
    fflush(stdin);

    cout << "Seleccione una accion: ";
    cin >> Opc3;
    fflush(stdin);

    switch(Opc3){
        case 1:{
            Ejercicio2CrearEIngresar();
            Ejercicio2();
            break;
        }
        case 2:{
            Ejercicio2Leer();
            Ejercicio2();
            break;
        }
        case 3:{
            exit(0);
            break;
        }
        default:{
            cout << "Opcion incorrecta, intente nuevamente..." << endl;
            goto loop3;
            getch;
            break;
        }
    }
}
void Ejercicio2CrearEIngresar(){
    fstream Archivo1;
    string NombreC;
    string Grado;
    string AprovReprov;
    double Notas=0.0;
    int NumeroDeNotas=0;
    double Suma = 0;
    double Promedio = 0.0;

    Archivo1.open(NArchivo1,ios::app);

    if(Archivo1.fail()){
        cout << "Error al crear archivo..." << endl;
    }else{
        fflush(stdin);
        cout << "Ingrese el nombre completo: ";
        getline(cin,NombreC);
        fflush(stdin);
        cout << "Ingrese el grado del alumno: ";
        getline(cin,Grado);
        fflush(stdin);
        Archivo1 << "Nombre completo: " << NombreC << endl;
        Archivo1 << "Grado: " << Grado << endl;
        cout<<"Cuantas notas desea ingresar? "<<endl;
        cin>>NumeroDeNotas;
        fflush(stdin);
        for(int i=0;i<NumeroDeNotas;i++){
            cout<<"Ingrese la nota "<<i+1<<endl;
            cin>>Notas;
            Suma+=Notas;
            Archivo1 << "Nota  " <<i+1<<":"<< Notas << endl;
        }
        fflush(stdin);

        Promedio = Suma / NumeroDeNotas;




        Archivo1 << "Promedio: " << Promedio << endl;

        if(Promedio >=60){
            Archivo1 << "El estudiante APROVO" << endl;
        }else{
            Archivo1 << "El estudiante REPROVO" << endl;
        }
    }
    Archivo1 << "========================================" << endl;
}
void Ejercicio2Leer(){
    ifstream Archivo1;
    string Leer;

    Archivo1.open(NArchivo1,ios::in);

    if(Archivo1.fail()){
        cout << "Error al leer el archivo..." << endl;
    }else{
        while(!Archivo1.eof()){
            getline(Archivo1,Leer);
            cout << Leer << endl;
        }
    }
    Archivo1.close();
}