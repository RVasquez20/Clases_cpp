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
    int i = 0;
    int Contador = 0;
    string Frases;
    string Respuesta;
    bool RespuestaCiclo = true;

    while(RespuestaCiclo){
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
    return 0;
}