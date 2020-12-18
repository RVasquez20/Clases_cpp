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
    int i = 0, Suma = 0;

    for(i=0; i<101; i++){
        cout << i << endl;
        Suma += i;
    }
    cout << "La suma de los primeros 100 numeros es: " << Suma << endl;
    return 0;
}