#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main() {
//do while, loop,Switch
int opc=0,n1=0,n2=0;
string condicion;
do{
    loop:
    //system("CLS"); Limpieza de pantalla
cout<<"Menu principal"<<endl;
cout<<"---------------"<<endl;
cout<<"1) sumar"<<endl;
cout<<"2) Restar"<<endl;
cout<<"3) Multiplicar"<<endl;
cout<<"4) Dividir"<<endl;
cout<<"5) Modulo"<<endl;
cout<<"6) Salir"<<endl;
cout<<"Ingrese la opcion que desea: ";
cin>>opc;

    switch (opc) {//solamente tenemos 2 opciones para Switch ya sea una varible de tipo int o una variable de tipo char(un caracter solamente)
        case 1:{
            cout<<"Ingrese el primer numero a sumar"<<endl;
            cin>>n1;
            cout<<"Ingrese el segundo numero a sumar"<<endl;
            cin>>n2;
            cout<<"La suma es "<<n1+n2<<endl;
            break;
        }
        case 2:{
            cout<<"Ingrese el primer numero a restar"<<endl;
            cin>>n1;
            cout<<"Ingrese el segundo numero a restar"<<endl;
            cin>>n2;
            cout<<"La resta es "<<n1-n2<<endl;
            break;
        }
        case 3:{
            cout<<"Ingrese el primero numero a multiplicar"<<endl;
            cin>>n1;
            cout<<"Ingrese el segundo numero a multiplicar"<<endl;
            cin>>n2;
            cout<<"La multiplicacion es"<<n1*n2<<endl;
            break;
        }
        case 4:{
            cout<<"Ingrese el primer numero a dividir"<<endl;
            cin>>n1;
            cout<<"Ingrese el segundo numero a dividir"<<endl;
            cin>>n2;
            cout<<"La division es"<<n1/n2<<endl;
            break;
        }
        case 5:{
            cout<<"Ingrese el primer numero a dividir"<<endl;
            cin>>n1;
            cout<<"Ingrese el segundo numero a dividir"<<endl;
            cin>>n2;
            cout<<"El modulo es"<<n1%n2<<endl;
            break;
        }
        case 6:{
            cout<<"Gracias por utilizar el programa"<<endl;
            getch();
            exit(0);
            break;
        }
        default:{
            cout<<"Opcion invalida elija nuevamente "<<endl;
            getch();
            goto loop;
            break;
        }
    }
    fflush(stdin);
    cout<<"Desea Regresar al menu principal? Si=s/No=n"<<endl;
    getline(cin,condicion);
}while(condicion=="S"|| condicion=="s");
    return 0;
}
