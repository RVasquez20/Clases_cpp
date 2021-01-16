#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <conio.h>
#include <string>
#include <string.h>
using namespace std;
//Archivo->Escribir,Añandir
//Programa de Registro de Empleados
string NombreArchivo="Empleados.txt";
void Leer();
void Crear();
void Escribir();
void Buscar();
void Modificar();
void Eliminar();
void Aniadir();
void Menu();
int main() {
    Menu();
    return 0;
}
void Menu(){
    int opc=0;
    cout<<"Menu Principal"<<endl;
    cout<<"1)Crear Arhivo"<<endl;
    cout<<"2)Leer Empleados"<<endl;
    //cout<<"3)Escribir"<<endl;
    //cout<<"4)Añadir"<<endl;
    //cout<<"5)Salir"<<endl;
    cout<<"3)Añadir Empleados"<<endl;
    cout<<"4)Buscar Empleado"<<endl;
    cout<<"5)Modificar Empleado"<<endl;
    cout<<"6)Eliminar Empleado"<<endl;
    cout<<"7)Salir"<<endl;
    cout<<"Ingrese la opcion que desea:";
    cin>>opc;
    fflush(stdin);
    cout<<endl;
    switch (opc) {
        case 1:{
            Crear();
            Menu();
            break;
        }
        case  2:{
            Leer();
            Menu();
            break;
        }
       /* case 3:{
            Escribir();
            Menu();
            break;
        }
        case 4:{
            Aniadir();
            Menu();
            break;
        }
        case 5:{
            exit(0);
            break;
        }*/
        case 3:{
            Aniadir();
            Menu();
            break;
        }
        case 4:{
            Buscar();
            Menu();
            break;
        }
        case 5:{
            Modificar();
            Menu();
            break;
        }
        case 6:{
            Eliminar();
            Menu();
            break;
        }
        case 7:{
            exit(0);
            break;
        }
        default:{
            cout<<"Opcion incorrecta elija nuevamente"<<endl;
            getch();
            Menu();
            break;
        }
    }
}
void Crear(){
    ofstream Archivo;
    Archivo.open(NombreArchivo,ios::out);
    if(Archivo.fail()){
        cout<<"Error al crear"<<endl;
    }else{
        cout<<"Creado Correctamente"<<endl;
    }
    Archivo.close();
}
void Leer(){
    ifstream Archivo;
    string Contenido;
    Archivo.open(NombreArchivo,ios::in);
    if(Archivo.fail()){
        cout<<"Error!"<<endl;
    }else{
        while(!Archivo.eof()){
            getline(Archivo,Contenido);
            cout<<Contenido<<endl;
        }
    }
    Archivo.close();
}
/*
void Escribir(){
    ofstream Archivo;
    string Contenido;
    Archivo.open(NombreArchivo,ios::out);
    if(Archivo.fail()){
        cout<<"Error al crear"<<endl;
    }else{
    cout<<"Digite la frase a Escribrir"<<endl;
    getline(cin,Contenido);
    fflush(stdin);
    Archivo<<"Frase: "<<Contenido;
    }
    Archivo.close();
}
void Aniadir(){
    fstream Archivo;
    string Contenido;
    Archivo.open(NombreArchivo,ios::app);
    if(Archivo.fail()){
        cout<<"Error al crear"<<endl;
    }else{
        cout<<"Digite la frase a Añadir"<<endl;
        getline(cin,Contenido);
        fflush(stdin);
        Archivo<<endl<<"Frase: "<<Contenido;
    }
    Archivo.close();
}
 */
void Aniadir(){
    fstream Archivo;
    string Contenido;
    Archivo.open(NombreArchivo,ios::app);
    if(Archivo.fail()){
        cout<<"Error al crear"<<endl;
    }else{
        cout<<"Digite El Nombre del Empleado a Añadir "<<endl;
        getline(cin,Contenido);
        fflush(stdin);
        Archivo<<Contenido<<endl;
    }
    Archivo.close();
}
void Buscar(){
    ifstream Archivo;
    string Contenido,NombreABuscar;
    bool Encontrado=false;
    Archivo.open(NombreArchivo,ios::in);
    if(Archivo.fail()){
        cout<<"Error!"<<endl;
    }else{
        cout<<"Porfavor Ingrese el Nombre Del Empleado Que Busca"<<endl;
        getline(cin,NombreABuscar);
        fflush(stdin);
        while(!Archivo.eof()){
            getline(Archivo,Contenido);
            if(Contenido.compare(NombreABuscar)==0){
                Encontrado=true;
            cout<<"Esta Registrado : "<<Contenido<<" Como Empleado :D"<<endl;
            }
    }
    Archivo.close();
        if(!Encontrado){
            cout<<"Lo sentimos No Esta Registrado Como Empleado"<<endl;
        }
}
}
void Modificar(){
    ifstream Archivo;//Variable ifstream para lectura del archivo Empleados
    fstream Temporal;//varibale fstream para lectura y escritura del archivo Temporal
    string Contenido,NombreAModificar,NuevoNombre;//Variables a utilizar
    bool Encontrado=false;//Variable para comprobar si se encontro el empleado
    Archivo.open(NombreArchivo,ios::in);//Abriendo el archivo Empleados.txt con metodo ios=Lectura
    Temporal.open("Temporal.txt",ios::out);//Abriendo El Archivo Temporal.txt con el metodo out=Escritura
    //Si no existe Temporal.txt lo crea y lo escribe


    if(Archivo.fail()||Temporal.fail()){//Comprobacion para saber si alguno de los 2 archivos abiertos fallo
        cout<<"Error!"<<endl;
    }else{//Si no fallaron se procede con el siguiente codigo
        cout<<"Porfavor Ingrese el Nombre Del Empleado Que desea Modificar"<<endl;
        getline(cin,NombreAModificar);//Almacenamiento de El Nombre a Buscar Para Ser Modificado
        fflush(stdin);
        while(!Archivo.eof()){//Mientras No( ! Not) Sea El Final de Archivo (eof=End Of File), Hacer:
            getline(Archivo,Contenido);//Leer Una Linea Del Archivo y Almacenar esa linea en Contenido
            if(Contenido.compare(NombreAModificar)==0){//Comparamos La varible Contenido que es la linea que acabamos
                //De leer del archivo, con el nombre que el usuario ingreso que deseaba modificar(==0 quiere decir que coinciden)
                //De ser Asi Hacer:
                Encontrado=true;//Cambiar la variable Encontrado de false a true
                cout<<"Digite el nuevo nombre para el empleado"<<endl;
                getline(cin,NuevoNombre);//Almacenar el Nuevo Nombre en la variable NuevoNombre
                fflush(stdin);
                Temporal<<NuevoNombre<<endl;//Escribir En el Archivo Temporal EL Nuevo Nombre que ingreso el usuario, NO LA LINEA QUE LEIMOS
                //Escribimos El Nuevo Nombre digitado por el usuario asi como un Enter(endl)
            }else {//Si La Linea Que Leimos No Coincide Con el Nombre Digitado para Modificar se hace:
                Temporal << Contenido << endl;//Escribir en el archivo Temporal La Linea Que Leimos
            }
        }
    }
    Archivo.close();//Cerramos Archivo(Empleados.txt)
    Temporal.close();//Cerramos Temporal(Temporal.txt)
    remove(NombreArchivo.c_str());//Eliminamos del Sistema El Archivo Con Nombre (Empleados.txt)
    rename("Temporal.txt",NombreArchivo.c_str());//Renombramos El Archivo llamado Temporal.txt Con el Nombre Empleados.txt
if(!Encontrado){//Si No (!   Not) Fue Encontrado hacer:
    cout<<"Lo Sentimos No hay ningun Empleado Con Ese Nombre :("<<endl;//Mostrar Mensaje
}
}
void Eliminar(){
    ifstream Archivo;
    fstream Temporal;
    string Contenido,NombreAModificar;
    bool Encontrado=false;
    Archivo.open(NombreArchivo,ios::in);
    Temporal.open("Temporal.txt",ios::out);
    if(Archivo.fail()||Temporal.fail()){
        cout<<"Error!"<<endl;
    }else{
        cout<<"Porfavor Ingrese el Nombre Del Empleado Que desea Eliminar"<<endl;
        getline(cin,NombreAModificar);
        fflush(stdin);
        while(!Archivo.eof()){
            getline(Archivo,Contenido);
            if(Contenido.compare(NombreAModificar)==0){
                Encontrado=true;
            }else {
                Temporal << Contenido << endl;
            }
        }
    }
    Archivo.close();
    Temporal.close();
    remove(NombreArchivo.c_str());
    rename("Temporal.txt",NombreArchivo.c_str());
    if(!Encontrado){
        cout<<"Lo Sentimos No hay ningun Empleado Con Ese Nombre :("<<endl;
    }
}