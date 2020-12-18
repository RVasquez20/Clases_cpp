#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <sstream>
#include <conio.h>
#include <math.h>
using namespace std;
int main() {
    //Ejercicio 1
    /*int x=0,  sueldo = 0;
    cout<<"Ingrese las horas trabajadas: ";
    cin>> x;


    if (x <= 40)
    {
        sueldo = x * 20;
        cout<<"Su sueldo esta semana es de : "<<sueldo;
    }
    else
    {
        sueldo = x * 25;
        cout<<"Su sueldo esta semana es de : "<<sueldo ;
    }*/
    //Ejercicio 2
    /*float x=0.0;
    char tipo;
    cout<<"Ingrese el monto de compra: ";
    cin>> x;
    cout<<"Tipo de cliente: ";
    cin>> tipo;


    if (tipo == 'A')
    {
        cout<<"Tipo A"<<endl;
        cout<<"Total a pagar: "<<x - (x *    0.10);
    }
    else if (tipo == 'B')
    {
        cout<<"Tipo B"<<endl;
        cout<<"Total a pagar: "<<x - (x * 0.15);
    }
    else if (tipo == 'C')
    {
        cout<<"Tipo C"<<endl;
        cout<<"Total a pagar: "<<x - (x * 0.20);
    }
    else
    {
        cout<<"Total a pagar: "<<x;
    }*/
    //Ejercicio 3
    /* for (int i=1;i<=20;i++)
     {
         cout<<i;
         if (i%3==0) cout<<" Es multiplo de 3" <<endl;
         else cout<<" No es multiplo de 3"<<endl;
     }
     getch();*/
    //Ejercicio 4
/*
    int numero=0;
    cout << "Inserte num. de dos digitos pares: ";
    cin >> numero;
    int aux = numero;
    if (numero < 100 && numero > 9) {
            int d1 = numero % 10;
            numero = numero / 10;
            int d2 = numero % 10;
     if (d1 % 2 == 0 & d2 % 2 == 0) {
                cout << "El promedio d los digitos de " << aux << " Es de :" << (d1 + d2) / 2 << endl;
        }
        } else{
        cout << "\aERROR: el numero no tiene dos digitos" << endl;
}
    getch();*/
   //Ejercicio 5:
   /*
    int n=0, c=1, serie=5;
    printf("Cantidad de terminos: ");
    cin>>n;
    while(c<=n) {
        if (c != n) {
        cout << serie << ",";
    }else{
            cout <<serie;
        }
        serie+=5;
        c++;
    }
    getch();*/
   //Ejercicio 6
  /*  int i=0;
    printf("Introduzca número del 1 al 7:");
    cin>>i;

    switch(i){
        case 1:
            cout<<"Lunes\n";
            break;
        case 2:
            cout<<"Martes\n";
            break;
        case 3:
            cout<<"Miércoles\n";
            break;
        case 4:
            cout<<"Jueves\n";
            break;
        case 5:
            cout<<"Viernes\n";
            break;
        case 6:
            cout<<"Sábado\n";
            break;
        case 7:
            cout<<"Domingo\n";
            break;
        default:
            cout<<"Opción no válida\n";
            break;
    }

    system("PAUSE");
    */
    return 0;
}
