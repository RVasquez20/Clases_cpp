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

int main(){
    int Opcion = 0;
    string Regresar;


    do{
        loopMenu:
        cout << "------MENU PRINCIPAL------" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Ejercicio 4" << endl;
        cout << "5. Ejercicio 5" << endl;
        cout << "6. Ejercicio 6" << endl;
        cout << "7. Ejercicio 7" << endl;
        cout << "8. Salir" << endl;

        cout << "Ingrese la opcion que desea consultar: ";
        cin >> Opcion;

        switch(Opcion){
            case 1:{
                int i = 0;

                for(i=0; i<100; i++){
                    cout << i + 1 << endl;
                }
                break;
            }
            case 2:{
                int i = 0;

                for(i=100; i>=0; i--){
                    cout << i << endl;
                }
                break;
            }
            case 3:{
                int i = 0;

                for (i=0; i<=100; i+=2){
                    cout << i << endl;
                }
                break;
            }
            case 4:{
                int i = 0, Suma = 0;

                for(i=0; i<101; i++){
                    cout << i << endl;
                    Suma += i;
                }
                cout << "La suma de los primeros 100 numeros es: " << Suma << endl;
                break;
            }
            case 5:{
                int i = 0;
                int Contador = 0;
                string Frases;
                string Respuesta;
                bool RespuestaCiclo = true;

                while(RespuestaCiclo){
                    fflush(stdin);
                    cout << "Ingrese una frase: ";
                    getline(cin,Frases);
                    Contador ++;
                    fflush(stdin);
                    cout << "Desea ingresar otra frase? (Si = S / No = N):";
                    getline(cin, Respuesta);
                    cout << endl;
                    if(Respuesta == "S" || Respuesta ==  "s" ){
                        RespuestaCiclo = true;
                    }else{
                        RespuestaCiclo = false;
                    }
                }
                cout << "La cantidad de frases ingresadas es: " << Contador << endl;
                break;
            }
            case 6:{
                int TotalCompra = 0, OpcCompra = 0, OpcCantidadCompra = 0, Compras = 0, ContadorProductos = 0;
                float SumaCompras = 0.00, Descuento = 0.00, SumaComprasDesc = 0.00, Impuestos = 0.00;
                string OpcVolverComprar, NombreCliente, ApellidoCliente, TelefonoCliente;

                fflush(stdin);

                cout << "Nombre del Cliente: ";
                getline(cin,NombreCliente);

                cout << "Apellido del Cliente: ";
                getline(cin,ApellidoCliente);

                cout << "Telefono: ";
                getline(cin,TelefonoCliente);

                cout <<"\n----MENU----" << endl;
                cout <<"1. Diclofenaco      Q. 2.00" << endl;
                cout <<"2. Acetaminofen     Q. 25.00" << endl;
                cout <<"3. Panadol          Q. 3.00" << endl;
                cout <<"4. Parecetamol      Q. 5.00" << endl;
                cout <<"5. Dayamineral      Q. 150.00" << endl;
                cout <<"6. Tusitos          Q. 75.00" << endl;
                cout <<"7. Lidocaina        Q. 15.00" << endl;
                cout <<"8. Azitromincina    Q. 8.00" << endl;
                cout <<"9. Sertal Compuesto Q. 10.00" << endl;
                cout <<"10. Ibuprofeno      Q. 9.00" << endl;

                do{
                    loopEjercicio6:
                    cout <<"\nIngrese la opcion de lo que desea comprar: ";
                    cin >> OpcCompra;
                    if(OpcCompra == 1){
                        ContadorProductos++;
                        Compras = 2;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 2){
                        ContadorProductos++;
                        Compras = 25;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 3){
                        ContadorProductos++;
                        Compras = 3;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 4){
                        ContadorProductos++;
                        Compras = 5;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 5){
                        ContadorProductos++;
                        Compras = 150;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 6){
                        ContadorProductos++;
                        Compras = 75;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 7){
                        ContadorProductos++;
                        Compras = 15;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 8){
                        ContadorProductos++;
                        Compras = 8;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 9){
                        ContadorProductos++;
                        Compras = 10;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else
                    if(OpcCompra == 10){
                        ContadorProductos++;
                        Compras = 9;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                    }else{
                        cout<<"\nOpcion incorrecta elija nuevamente: "<<endl;
                        goto loopEjercicio6;
                    }
                    fflush(stdin);
                    cout <<"\nDesea realizar otra compra? Si=s / No=n:";
                    getline(cin,OpcVolverComprar);
                }while(OpcVolverComprar =="S" || OpcVolverComprar == "s");
                if (SumaCompras >= 500){
                    Descuento = (SumaCompras * 10) / 100;
                }
                Impuestos = (SumaCompras * 12) /100;
                SumaComprasDesc = SumaCompras - Descuento - Impuestos;
                cout << "\nNombre del cliente: " << NombreCliente << endl;
                cout << "Apellido del cliente: " << ApellidoCliente << endl;
                cout << "Telefono del cliente: " << TelefonoCliente << endl;
                cout << "Productos comprados: " << ContadorProductos << endl;
                cout << "El subtotal a pagar es: " << SumaCompras << endl;
                cout << "El impuesto a pagar es: " << Impuestos << endl;
                cout << "El descuento aplicado es: " << Descuento << endl;
                cout << "El total a pagar es: " << SumaComprasDesc << endl;

                cout << "----------------------------------------------" << endl;
                cout << "Gracias por la compra :D" << endl;
                break;
            }
            case 7:{
                int IngresoNumero = 0;

                cout << "Ingrese un numero: ";
                cin >> IngresoNumero;

                for (int i=0; i<IngresoNumero; i++){
                    cout << endl;
                    for (int i=0; i<2; i++){
                        cout << " ";
                        for (int i=0; i<IngresoNumero; i++){
                            cout << i+1;
                        }
                    }
                }
                break;
            }
            case 8:{
                cout << "Gracias por ultilizar este programa... :D" << endl;
                getch();
                exit(0);
                break;
            }
            default:{
                cout << "Opcion invalida, intente de nuevo..." <<  endl;
                getch();
                goto loopMenu;
                break;
            }
        }
        fflush(stdin);
        cout << "\nDesea regresar al menu principal? Si=s / No=n: ";
        getline(cin,Regresar);

    }while(Regresar == "S" || Regresar == "s");
    return 0;
}