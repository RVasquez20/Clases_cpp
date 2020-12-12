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
cout<<"6) suma del 1-1000"<<endl;
cout<<"7) Numeros pares del 1-360"<<endl;
cout<<"8) Promedio de n notas"<<endl;
cout<<"9) Numeros impares del 1-360"<<endl;
cout<<"10) Salir"<<endl;
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

        case 5:{
            cout<<"Gracias por utilizar el programa"<<endl;
            getch();
            exit(0);
            break;
        }

        case 6:{
            int suma=0;
            for(int i=1;i<=1000;i++){
                cout<<"No."<<i<<endl;
                suma+=i;
            }
            cout<<"La suma es "<<suma<<endl;
            break;
        }
        case 7:{
            for(int i=1;i<=360;i++){
                if(i%2==0){
                    cout<<i<<endl;
                }
            }
            break;
        }
        case 8:{
            int nota=0,suma=0,contador=0;
            double promedio=0;
            string opc;
            do {
             cout<<"Ingrese la nota:";
             cin>>nota;
             suma+=nota;
             contador++;
             fflush(stdin);
             cout<<"Desea ingresar otra nota? S/N"<<endl;
             getline(cin,opc);
            }while(opc=="s"||opc=="S");
            promedio=suma/contador;
            if(promedio>=61){
                cout<<"El promedio es :" <<promedio<<" esta Aprovado"<<endl;
            }else{
                cout<<"El promedio es :" <<promedio<<" esta Reprobado"<<endl;
            }

            break;
        }
        case 9:{
            for(int i=1;i<=360;i++){
                if(i%2==1){
                    cout<<i<<endl;
                }
            }
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
