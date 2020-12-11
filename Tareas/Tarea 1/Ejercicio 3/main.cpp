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

int main() {

int Numero = 0;

cout << "Ingrese un numero: ";
cin >> Numero;
//mal
if ((Numero % 1) != 0){
    cout << "El numero no es entero";
}
if ((Numero % 1) == 0){
        cout << "El numero es entero";
    }
}