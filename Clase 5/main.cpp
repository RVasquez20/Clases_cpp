#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <string.h>
#include <windows.h>
using namespace std;
//Vectores ó Arrays-> unidimensionales, Bidimensionales
int main() {
    //Ejemplo 1:
    /*Mostrar el array que contiene desde un inicio los siguientes valores: 1,5,2,22,33
    int Numeros[]={1,5,2,22,33};
    for(int i=0;i<5;i++){
        cout<<"El valor en la posicion "<<i<<" es :"<<Numeros[i]<<endl;
    }*/
    /*Ejemplo 2 : Realizar un programa en el cual el usuario introduzca 5 numeros y posteriormente los muestre
    int Numeros[5];
    for(int i=0;i<5;i++){
        cout<<"Ingrese el numero que estara en la posicion "<<i+1<<endl;
        cin>>Numeros[i];
    }
    for(int i=0;i<5;i++){
        cout<<"El valor en la posicion "<<i<<" es :"<<Numeros[i]<<endl;
    }
     */
    /*Ejemplo 3: Cree un Array de 5 elementos de tipo entero donde el usuario los digite y al finaliza se muestre la suma de
     * los elementos de array, posteriomente se limpie el espacio en memoria
    int *Numeros=new int[5];//int Numeros[5];
    int Suma=0;
    for(int i=0;i<5;i++){
        cout<<"Ingrese el numero que estara en la posicion "<<i<<endl;
        cin>>Numeros[i];
    }
    for(int i=0;i<5;i++){
        cout<<"El valor en la posicion "<<i<<" es :"<<Numeros[i]<<endl;
        Suma+=Numeros[i];
    }
    cout<<"La suma del array es: "<<Suma<<endl;
    //delete[Numeros];
    delete[]Numeros;*/
    /*Ejemplo 4:Realice un programa en donde el usuario ingrese n notas y n Nombres de Estudiantes y al finalizar muestre
     * El promedio obtenido de la clase
    int Cantidad=0,Suma=0;
    double Promedio=0.0;
    cout<<"Ingrese la cantidad de estudiantes de la clase a promediar: ";
    cin>>Cantidad;
    fflush(stdin);
    int Notas[Cantidad];
    string Nombres[Cantidad];
    for(int i=0;i<Cantidad;i++){
        cout<<"Ingrese el Nombre del estudiante "<<i+1<<endl;
        getline(cin,Nombres[i]);
        cout<<"Ingrese la nota de "<<Nombres[i]<<endl;
        cin>>Notas[i];
        fflush(stdin);
    }
    for(int i=0;i<Cantidad;i++){
        cout<<"El Nombre del estudiante es : "<<Nombres[i]<<" Con una nota de :"<<Notas[i]<<endl;
        Suma+=Notas[i];
    }
    Promedio=Suma/Cantidad;
    cout<<"El Promedio obtenido por el grupo de estudiantes es :"<<Promedio<<endl;
     */
    //Ejemplo 5: Mostrar los valores del arreglo : juan,pedro,maria,patricia,jimena,sofia,mario,maria,juan,alejandro
   /* string Nombres[]={"juan","pedro","maria","patricia","juan","pedro","maria","patricia","jimena","sofia","mario","maria","juan","alejandro"
            ,"maria","patricia","jimena","sofia","mario","maria","juan","alejandro","maria","patricia","jimena","sofia","mario","maria","juan","alejandro"
            ,"maria","patricia","jimena","sofia","mario","maria","juan","alejandro"
            ,"maria","patricia","jimena","sofia","mario","maria","juan","alejandro"
            ,"maria","patricia","jimena","sofia","mario","maria","juan","alejandro"};
    /*for(int i=0;i<10;i++){
        cout<<Nombres[i]<<endl;
    }*/
    //Foreach == for mejorado
    //for(Tipo de dato Variable a utilizar : Nombre del array){}
   /* for(string i:Nombres){
        cout<<i<<endl;
    }*/
    return 0;
}
