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
/*
 * int=entero
 * double=decimal pequeño
 * float=decimal largo
 * char=caracter
 * string=cadena de texto(cadena de caracteres)
 * bool=booleno (verdadero,falso)
 * */
int main(){
/*
 * Ejercicio 1: Ingreso y salida de datos
 * int n1=0;
double n2=0.0;
float n3=0.0;
char n4;
string n5;
cout<<"Ingrese un numero entero: "<<endl;
cin>>n1;
    cout<<"Ingrese un numero con decimales: "<<endl;
    cin>>n2;
    cout<<"Ingrese un numero con decimales: "<<endl;
    cin>>n3;
    cout<<"Ingrese un caracter: "<<endl;
    cin>>n4;
    fflush(stdin);
    cout<<"Ingrese un texto: "<<endl;
    getline(cin,n5);
    cout<<"El numero entero es: "<<n1<<endl;
    cout<<"El numero decimal double es: "<<n2<<endl;
    cout<<"El numero decimal float es: "<<n3<<endl;
    cout<<"El caracter es: "<<n4<<endl;
    cout<<"la cadena  es: "<<n5<<endl;
*/
//Ejercicio 2 : Operadores Aritmeticos
// +,-,*,/,%  (Para obtener el modulo se necesita que los valores a dividir sean de tipo entero)
/*
 * double n1=0.0,n2=0.0;

    cout<<"Ingrese el primer numero a operar: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero a operar: ";
    cin>>n2;
    cout<<"La suma es: "<<n1+n2<<endl;
    cout<<"La resta es: "<<n1-n2<<endl;
    cout<<"La multiplicacion es: "<<n1*n2<<endl;
    cout<<"La division es: "<<n1/n2<<endl;
    int n=0,nn=0;
    n=n1;
    nn=n2;
    cout<<"El Residuo es: "<<n%nn<<endl;
    //+=,-=,*=,/=
    //Cuando se utilizan abreviaciones , se opera primero lo que va despues del simbolo =
    //posterior se realiza la operacion abreviada
    double R=5;
    cout<<"R: "<<R<<endl;
    R+=n1*2;
    cout<<endl;
    cout<<"R: "<<R<<endl;
    R*=n2;
    cout<<"R: "<<R<<endl;
    R-=4;
    cout<<"R: "<<R<<endl;
    R/=2;
    cout<<"R: "<<R<<endl;
    */
//Operadores Logicos
//And(&&),or(||),not(!),igual a(==),Diferente de(!=)
//Condicionales if,if else
//CamelCase
//Operadores Complementarios <,>,>=,<=
//Ejercicio 3: Condicionamiento
//Mostar un mensaje indicando si la persona es mayor de edad(18)
/*int Edad=0;
cout<<"Ingrese la edad de la persona: ";
cin>>Edad;
// if(Condicion){Secuencia de comandos}
    if(Edad>=18){
    cout<<"Es Mayor de edad"<<endl;
    }*/
/////////////////////////////////////////////////////////
//Mostar un mensaje indicando si la persona es mayor o igual a 18 y sino mostrar no es mayor de edad
    /*int Edad=0;
    string Nombre;
    cout<<"Ingrese el nombre de la persona: ";
    getline(cin,Nombre);
    cout<<"Ingrese la edad de la persona: ";
    cin>>Edad;
*/
// if(Condicion){Secuencia de comandos}else{Secuencia de comandos}
    /*if((Nombre!="Juan")&&(Edad>=18)){
        cout<<"Es Mayor de edad"<<endl;
        }else
            if((Nombre!="Juan")||(Edad>0)){
        cout<<"Es menor de edad :c"<<endl;
    }else{
        cout<<"Valor no valido"<<endl;
    }
    if(Nombre!=""){
        cout<<Nombre<<" Tiene "<<Edad<<" anios "<<endl;
    }else{
        cout<<"No Digito el nombre >:v"<<endl;
    }
//If anidados(un if dentro de otro if)
    if(Edad>=18){
       if(Nombre!="Maria") {
           cout << "Es Mayor De edad" << endl;
       }
    }else{
        if(Edad>0) {
            cout << "Es Menor de edad :c" << endl;
        }else{
            cout<<"Datos no validos"<<endl;
        }
    }

int Numero1=0,Numero2=0,Suma=0;
double Promedio=0.0;
cout<<"Ingrese la nota 1: ";
cin>>Numero1;
    cout<<"Ingrese  la nota 2: ";
    cin>>Numero2;
    Suma=Numero1+Numero2;
    Promedio=Suma/2;
    if((Numero1>0)&&(Numero2>0)){
        if(Promedio>61){
            cout<<"Aprobo"<<endl;
        }else{
            cout<<"Reprobo"<<endl;
        }
    }else{
        cout<<"Datos Invalidos :p"<<endl;
    }
     */
    //Ciclos: for,while,do while,loop=> Tambien Anidados
    return 0;
}
