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
    return 0;
}