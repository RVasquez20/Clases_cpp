#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include <strings.h>
//Cadenas -> "hola mundo"
using namespace std;
int main() {
//strlen/.length()->> Ver la cantidad de caracteres en una cadena, por defecto nos devuelve la cantidad(int)
/*Ejemplo 1: encontrar la longitud de la cadena Prueba que contiene el mensaje Hola Jairo
string Prueba="Hola Jairo";
int Cantidad=0;
//strlen
Cantidad=strlen(Prueba.c_str());//.c_str()-> convierte la cadena de tipo string a tipo char
cout<<"Contiene "<<Cantidad<<" Caracteres"<<endl;
Cantidad=0;
//.length(); ->gallina tiene huevos= gth
Cantidad=Prueba.length();
cout<<"Contiene "<<Cantidad<<" Caracteres"<<endl;
 */
//compare/strcmp->> comparar 2 cadenas y ver si son exactamente iguales, strcmp devuelve un valor diferente a 0 si no coinciden
//y si es igual a 0 quiere decir que son iguales, aplica para compare tambien
/*Ejemplo 2 : pedir al usuario 2 cadenas y comparlas
string Cadena1,Cadena2;
cout<<"Ingrese la cadena 1"<<endl;
getline(cin,Cadena1);
cout<<"Ingrese la cadena 2"<<endl;
//compare
getline(cin,Cadena2);
if(Cadena1.compare(Cadena2)==0){
    cout<<"Son iguales"<<endl;
}else{
    cout<<"NO Son iguales"<<endl;
}
    if((strcmp(Cadena1.c_str(),Cadena2.c_str())==0)){
        cout<<"Son iguales"<<endl;
    }else{
        cout<<"NO Son iguales"<<endl;
    }
    */
//Manejo de string como arreglo de char
/*Ejemplo 3: Mostrar la cantidad de vocales en una frase introducida por el usuario
string Cadena;
int Cantidad=0;
cout<<"Ingrese la cadena"<<endl;
getline(cin,Cadena);
for(int i=0;i<Cadena.length();i++){
    if((Cadena[i]=='a')||(Cadena[i]=='e')||(Cadena[i]=='i')||(Cadena[i]=='o')||(Cadena[i]=='u')){
     Cantidad++;
    }
}
cout<<"La cantidad de vocales en : "<<Cadena<<" Es : "<<Cantidad<<endl;
 */
//
/*Ejemplo 4: Pedir al usuario una cadena y mostrarla en mayuscula y en minuscula
string Cadena;
cout<<"Ingrese una cadena: "<<endl;
getline(cin,Cadena);
    cout<<"La cadena en minuscula es: ";
    for(int i=0;i<Cadena.length();i++){
      Cadena[i]=tolower(Cadena[i]);
    }
cout<<Cadena<<endl;
    cout<<"La cadena en Mayusculas es: ";
    for(int i=0;i<Cadena.length();i++){
        Cadena[i]=toupper(Cadena[i]);
    }
    cout<<Cadena<<endl;
    */
/*Ejemplo 5: Menu con update*/
    int opc=0,n1=0,n2=0;
    char condicion;
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
        condicion=getch();
    }while(toupper(condicion)=='S');
    return 0;
}
