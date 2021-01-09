#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <conio.h>
//Funciones,Recursividad
using namespace std;
//Prototipos
void Menu();
int Suma();
void Resta(int,int);
int Multiplicacion(int,int);
double Division(double,double);
string Mayusculas(string);
bool Encontrado();
bool Negacion(bool);
 int  main() {
    Menu();
    return 0;
}

void Menu(){
    int opc=0;
    cout << "Menu Principal" << endl;
    cout << "1)Sumar" << endl;
    cout << "2)Restar" << endl;
    cout << "3)Multiplicar" << endl;
    cout << "4)Dividir" << endl;
    cout << "5)Convertidor a Mayuscula" << endl;
    cout << "6)Encontrar un numero en un array" << endl;
    cout << "7)Negacion" << endl;
    cout << "8)Salir" << endl;
    cin >> opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            cout<<"La suma de los numeros es: "<<Suma()<<endl;
            Menu();
            break;
        }
        case 2:{
            //Resta();
            Resta(10,5);
            Menu();
            break;
        }
        case 3:{
            int Numero1=0,Numero2=0;
            cout<<"Ingrese el primer numero a multiplicar"<<endl;
            cin>>Numero1;
            cout<<"Ingrese el segundo numero a multiplicar"<<endl;
            cin>>Numero2;
            cout<<Multiplicacion(Numero1,Numero2)<<endl;
            cout<<Multiplicacion(5,2)<<endl;
            Menu();
            break;
        }
        case 4:{
            double Numero1=0.0,Numero2=0.0;
            cout<<"Ingrese el primer numero a dividir"<<endl;
            cin>>Numero1;
            cout<<"Ingrese el segundo numero a dividir"<<endl;
            cin>>Numero2;
            cout<<Division(Numero1,Numero2)<<endl;
            Menu();
            break;
        }
        case 5:{
            string x;
            cout<<"Digite la cadena a convertir a mayuscula"<<endl;
            getline(cin,x);
            cout<<Mayusculas(x)<<endl;
            Menu();
            break;
        }
        case 6:{
           if(Encontrado()){
               cout<<"Encontrado"<<endl;
           }else{
               cout<<"No Encontrado"<<endl;
           }

            Menu();
            break;
        }
        case 7:{
            cout<<Negacion(false)<<endl;
            Menu();
            break;
        }
        case 8:{
            exit(0);
            break;
        }
        default: {
            cout << "opcion incorrecta" << endl;
            break;
        }
    }

}
int Suma(){
    int n1=0,n2=0,S=0;
    cout<<"Ingrese el primer numero a sumar"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero a sumar"<<endl;
    cin>>n2;
    S=n1+n2;
    return S;
}
/*void Resta(){
    int n1=0,n2=0,r=0;
    cout<<"Ingrese el primer numero a restar"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero a restar"<<endl;
    cin>>n2;
    r=n1-n2;
    cout<<"La Resta es: "<<r<<endl;
 }*/
void Resta(int n1,int n2){
    cout<<"La Resta Es "<<n1-n2<<endl;
}
int Multiplicacion(int n1,int n2){
     return n1*n2;
 }
 double Division(double n1,double n2){
    return n1/n2;
}
string Mayusculas(string Cadena){
    for(int i=0;i<Cadena.length();i++){
        Cadena[i]=toupper(Cadena[i]);
    }
    return Cadena;
}
bool Encontrado(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n1=0;
    cout<<"Ingrese el numero a buscar"<<endl;
    cin>>n1;
    for(int i:arr){
        if(i==n1){
            return true;
        }
    }
    return false;
}
bool Negacion(bool x){
    return !x;
}