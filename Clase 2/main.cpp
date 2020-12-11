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
//For , while, do while, loop-> anidados => Vectores: unidimensionales,bidimensionales,tridimencionales,4 dimensiones, linkend list, Punteros
int main() {
    // inicia,Termina,Paso,(Van con la misma varible),Iterador
    //Ejercicio 1 ciclo for; Ingresa la cantidad de notas a promediar y muestra el promedio calculado
  /*  int nota=0,suma=0,cantidad=0;
    double promedio=0.0;
    cout<<"Ingrese la cantidad de notas a promediar: ";
    cin>>cantidad;
   for(int i=0;i<cantidad;i++){
    cout<<"Ingrese la nota "<<i+1<<" :";
    cin>>nota;
    cout<<endl;
    suma+=nota;
   }
promedio=suma/cantidad;
   cout<<"El promedio del estudiante es: "<<promedio<<endl;*/
  //Ejemplo ciclo alrevez
  /*
  for(int i=5;i>=1;i--){
      cout<<i<<endl;
  }*/
/*
    for(int i=0;i<5;i++){
         for(int j=0;j<10;j++){
         cout<<"*";
          }
    cout<<endl;
    }
bool opc= false;
while(!opc){
    int nota=0,suma=0,cantidad=0;
    double promedio=0.0;
    char repeticion;
    cout<<"Ingrese la cantidad de notas a promediar: ";
    cin>>cantidad;
    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese la nota "<<i+1<<" :";
        cin>>nota;
        cout<<endl;
        suma+=nota;
    }
    promedio=suma/cantidad;
    cout<<"El promedio del estudiante es: "<<promedio<<endl;
    fflush(stdin);
    cout<<"Desea promediar a otro alumno? S/N"<<endl;
    cin>>repeticion;
    if(repeticion!='S'){
        opc=true;
    }
}
 //while como for
int i=0;
while(i<5){
    cout<<i<<endl;
    i++;
}

    int i=4;
    while(i>=0){
        cout<<i<<endl;
        i--;
    }
    */
    int nota=0,suma=0,cantidad=0,i=0;
    double promedio=0.0;
    cout<<"Ingrese la cantidad de notas a promediar: ";
    cin>>cantidad;
while(i<cantidad) {
    cout << "Ingrese la nota " << i + 1 << " :";
    cin >> nota;
    cout << endl;
    suma += nota;
    i++;
}
    promedio=suma/cantidad;
    cout<<"El promedio del estudiante es: "<<promedio<<endl;
    return 0;
}
