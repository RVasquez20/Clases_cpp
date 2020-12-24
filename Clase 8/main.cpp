#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//Ordenamiento de vectores-> Metodo burbuja
int main() {
int Numeros[]={4,5,1,2,7,3,9,10,6,12};
int Auxiliar=0,x=0;
    for (int i=0;i<sizeof(Numeros)/sizeof(int);i++){//sizeof(array)/sizeof(tipo de dato) = sirve para encontrar la cantidad de elementos en un arreglo
      for(int j=0;j<sizeof(Numeros)/sizeof(int);j++){
        if(Numeros[j]>Numeros[j+1]){
          Auxiliar=Numeros[j];
          Numeros[j]=Numeros[j+1];
          Numeros[j+1]=Auxiliar;
        }
      }
    }
    cout<<"Forma Acendente: "<<endl;
    //for(Tipo de dato del arreglo varible a tomar valores: Nombre del arreglo){}
    for(int x:Numeros){
        cout<<x<<endl;
    }
    return 0;
}
