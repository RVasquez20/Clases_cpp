#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <string.h>
#include <strings.h>
#include <new>
#include <time.h>

using namespace std;

int main(){
    int TotalCompra = 0, OpcCompra = 0, OpcCantidadCompra = 0, Compras = 0, ContadorProductos = 0;
    float SumaCompras = 0.00, Descuento = 0.00, SumaComprasDesc = 0.00, Impuestos = 0.00;
    string OpcVolverComprar, NombreCliente, ApellidoCliente, TelefonoCliente;

    cout << "Nombre del Cliente: ";
    getline(cin,NombreCliente);

    cout << "Apellido del Cliente: ";
    getline(cin,ApellidoCliente);

    cout << "Telefono: ";
    getline(cin,TelefonoCliente);
    do{
        loop:
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


        cout <<"\nIngrese la opcion de lo que desea comprar: ";
        cin >> OpcCompra;
        if(OpcCompra == 1){
            ContadorProductos++;
            Compras = 2;
            cout <<"Ingrese la cantidad que dese comprar: ";
            cin >> OpcCantidadCompra;
            TotalCompra = Compras * OpcCantidadCompra;
            SumaCompras = SumaCompras + TotalCompra;
            cout <<"Este es el resultado: " << TotalCompra << endl;
        }else
            if(OpcCompra == 2){
                ContadorProductos++;
                Compras = 25;
                cout <<"Ingrese la cantidad que dese comprar: ";
                cin >> OpcCantidadCompra;
                TotalCompra = Compras * OpcCantidadCompra;
                SumaCompras = SumaCompras + TotalCompra;
                cout <<"Este es el resultado: " << TotalCompra << endl;
            }else
                if(OpcCompra == 3){
                    ContadorProductos++;
                    Compras = 3;
                    cout <<"Ingrese la cantidad que dese comprar: ";
                    cin >> OpcCantidadCompra;
                    TotalCompra = Compras * OpcCantidadCompra;
                    SumaCompras = SumaCompras + TotalCompra;
                    cout <<"Este es el resultado: " << TotalCompra << endl;
                }else
                    if(OpcCompra == 4){
                        ContadorProductos++;
                        Compras = 5;
                        cout <<"Ingrese la cantidad que dese comprar: ";
                        cin >> OpcCantidadCompra;
                        TotalCompra = Compras * OpcCantidadCompra;
                        SumaCompras = SumaCompras + TotalCompra;
                        cout <<"Este es el resultado: " << TotalCompra << endl;
                    }else
                        if(OpcCompra == 5){
                            ContadorProductos++;
                            Compras = 150;
                            cout <<"Ingrese la cantidad que dese comprar: ";
                            cin >> OpcCantidadCompra;
                            TotalCompra = Compras * OpcCantidadCompra;
                            SumaCompras = SumaCompras + TotalCompra;
                            cout <<"Este es el resultado: " << TotalCompra << endl;
                        }else
                            if(OpcCompra == 6){
                                ContadorProductos++;
                                Compras = 75;
                                cout <<"Ingrese la cantidad que dese comprar: ";
                                cin >> OpcCantidadCompra;
                                TotalCompra = Compras * OpcCantidadCompra;
                                SumaCompras = SumaCompras + TotalCompra;
                                cout <<"Este es el resultado: " << TotalCompra << endl;
                            }else
                                if(OpcCompra == 7){
                                    ContadorProductos++;
                                    Compras = 15;
                                    cout <<"Ingrese la cantidad que dese comprar: ";
                                    cin >> OpcCantidadCompra;
                                    TotalCompra = Compras * OpcCantidadCompra;
                                    SumaCompras = SumaCompras + TotalCompra;
                                    cout <<"Este es el resultado: " << TotalCompra << endl;
                                }else
                                    if(OpcCompra == 8){
                                        ContadorProductos++;
                                        Compras = 8;
                                        cout <<"Ingrese la cantidad que dese comprar: ";
                                        cin >> OpcCantidadCompra;
                                        TotalCompra = Compras * OpcCantidadCompra;
                                        SumaCompras = SumaCompras + TotalCompra;
                                        cout <<"Este es el resultado: " << TotalCompra << endl;
                                    }else
                                        if(OpcCompra == 9){
                                            ContadorProductos++;
                                            Compras = 10;
                                            cout <<"Ingrese la cantidad que dese comprar: ";
                                            cin >> OpcCantidadCompra;
                                            TotalCompra = Compras * OpcCantidadCompra;
                                            SumaCompras = SumaCompras + TotalCompra;
                                            cout <<"Este es el resultado: " << TotalCompra << endl;
                                        }else
                                            if(OpcCompra == 10){
                                                ContadorProductos++;
                                                Compras = 9;
                                                cout <<"Ingrese la cantidad que dese comprar: ";
                                                cin >> OpcCantidadCompra;
                                                TotalCompra = Compras * OpcCantidadCompra;
                                                SumaCompras = SumaCompras + TotalCompra;
                                                cout <<"Este es el resultado: " << TotalCompra << endl;
                                            }else{
                                                cout<<"\nOpcion incorrecta elija nuevamente: "<<endl;
                                                goto loop;
                                            }
        fflush(stdin);
        cout <<"\nDesea realizar otra compra? Si=s / No=n:";
        getline(cin,OpcVolverComprar);
    }while(OpcVolverComprar =="S" || OpcVolverComprar == "s");
    if (SumaCompras >= 500){
        Descuento = (SumaCompras * 10) / 100;
    }
    Impuestos = (SumaCompras * 12) /100;
    SumaComprasDesc = SumaCompras - Descuento + Impuestos;
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
    return 0;
}