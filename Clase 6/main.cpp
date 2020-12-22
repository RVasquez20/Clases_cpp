#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Arreglos Bidimensionales

using  namespace std;
int main() {
/*Ejemplo 1:Matriz que contiene 1,2,3,4,5,6,7,8,9 de 3x3
int Numeros[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"El valor en la posicion ["<<i<<"]["<<j<<"] Es :"<<Numeros[i][j]<<endl;
    }
}
 */
/*Ejemplo 2: definir la siguiente matriz y mostrarla
 * 1|2|3|
 * 4|5|6|
 * 7|8|9|
 *
    int Numeros[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<Numeros[i][j]<<"|";
        }
        cout<<endl;
    }
     */
/*Ejemplo 3: definir la siguiente matriz y mostrarla y mostrar los elementos de la diagonal principal
 * 1|2|3|
 * 4|5|6|
 * 7|8|9|
    int Numeros[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int contador=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<Numeros[i][j]<<"|";
            if(i==j){
                contador++;
            }
        }
        cout<<endl;
    }
    int Diagonal[contador];
    contador =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                Diagonal[contador]=Numeros[i][j];
                contador++;
            }
        }
    }
    cout<<"La diganal principal es:"<<endl;
    for(int i=0;i<contador;i++){
    cout<<Diagonal[i]<<"|";
    }
    */
/*Ejemplo 4: definir la siguiente matriz y mostrarla y mostrar la suma de las filas y de las columnas
 * 1|2|3|=6
 * 4|5|6|=15
 * 7|8|9|=24
 * -------
 * 12 15 18
 *
    int Numeros[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int SumaFilas[3],SumaColumas[3],suma=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<Numeros[i][j]<<"|";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        suma=0;
        for(int j=0;j<3;j++){
          suma+=Numeros[i][j];
        }
        SumaFilas[i]=suma;
    }
    for(int i=0;i<3;i++){
        cout<<"La suma de la fila "<<i<<" Es "<<SumaFilas[i]<<endl;
    }


    for(int columnas=0;columnas<3;columnas++){
        suma=0;
        for(int Filas=0;Filas<3;Filas++){
            suma+=Numeros[Filas][columnas];
        }
        SumaColumas[columnas]=suma;
    }
    for(int i=0;i<3;i++){
        cout<<"La suma de la columna "<<i<<" Es "<<SumaColumas[i]<<endl;
    }
    */
/*Ejemplo 5: Rellenar automaticamente la siguiente matriz y mostrarla
 * 1|2|3|
 * 4|5|6|
 * 7|8|9|

    int Numeros[3][3];
    int numero=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            Numeros[i][j]=numero;
            numero++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<Numeros[i][j]<<"|";
        }
        cout<<endl;
    }
    **/
/*Ejemplo 6: Rellenar automaticamente una matriz de 4x4 , pedir al usuario un numero y decir si se encontro o no

    int Numeros[4][4];
    int numero=1,us=0;
    bool encontrado=false;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            Numeros[i][j]=numero;
            numero++;
        }
    }
    cout<<"Porfavor ingrese el numero a buscar: ";
    cin>>us;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           if(Numeros[i][j]==us){
               cout<<"Se encontro el numero en la posicion i="<<i<<" j="<<j<<endl;
               encontrado=true;
           }
        }
    }
    if(!encontrado){
        cout<<"Lo sentimos el numero no fue encontrado :c"<<endl;
    }
     * */
/*Ejemplo 6: Pedir al usuario que ingrese nombres en una matriz de 4x4 , y pedir al usuario un nombre y decir si se encontro o no

    string Nombres[2][2],NombreABuscar;
    bool encontrado=false;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
          cout<<"Ingrese un nombre: "<<endl;
          getline(cin,Nombres[i][j]);
        }
    }
    cout<<"Porfavor ingrese el nombre a buscar: ";
    getline(cin,NombreABuscar);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           if(Nombres[i][j]==NombreABuscar){
               cout<<"Se encontro el Nombre en la posicion i="<<i<<" j="<<j<<endl;
               encontrado=true;
           }
        }
    }
    if(!encontrado){
        cout<<"Lo sentimos el Nombre no fue encontrado :c"<<endl;
    }
*/
/*Ejemplo 7: Solicitar al usuario la cantidad de filas y la cantidad de columnas , posteriomente rellenar la matriz automaticamente
 * con numeros enteros, y mostrarla
int Filas=0,Columnas=0;
cout<<"Ingrese el numero de filas que desea : ";
cin>>Filas;
cout<<"Ingrese el numero de columnas que desea : ";
cin>>Columnas;
    int Matriz[Filas][Columnas],numero=1;
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            Matriz[i][j]=numero;
            numero++;
        }
    }
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
         cout<<Matriz[i][j]<<"|";
        }
        cout<<endl;
    }
    */
/*Ejemplo 8: Solicitar al usuario la cantidad de filas y la cantidad de columnas , posteriomente rellenar la matriz automaticamente
 * con numeros enteros, y mostrar los numeros pares
    int Filas=0,Columnas=0;
    cout<<"Ingrese el numero de filas que desea : ";
    cin>>Filas;
    cout<<"Ingrese el numero de columnas que desea : ";
    cin>>Columnas;
    int Matriz[Filas][Columnas],numero=1;
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            Matriz[i][j]=numero;
            numero++;
        }
    }
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            if(Matriz[i][j]%2==0) {
                cout << Matriz[i][j] << "|";
            }
        }
        cout<<endl;
    }
    */

/*Ejemplo 9: Solicitar al usuario 2 matrices de 2x2 y sumarlas , mostrar la matriz resultante
    int Filas=2,Columnas=2;
    int Matriz1[Filas][Columnas],Matriz2[Filas][Columnas],MatrizResultante[Filas][Columnas];
    cout<<"Matriz 1: "<<endl;
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            cout<<"Ingrese el numero que ira en la posicion ["<<i<<"]["<<j<<"] :"<<endl;
            cin>>Matriz1[i][j];
        }
    }
    cout<<"Matriz 2: "<<endl;
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            cout<<"Ingrese el numero que ira en la posicion ["<<i<<"]["<<j<<"] :"<<endl;
            cin>>Matriz2[i][j];
        }
    }
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            MatrizResultante[i][j]=Matriz1[i][j]+Matriz2[i][j];
        }
    }
    cout<<"Matriz 1: "<<endl;
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            cout<<Matriz1[i][j]<<"|";
        }
        cout<<endl;
    }
    cout<<"----------------------------------"<<endl;
    cout<<"Matriz 2: "<<endl;
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            cout<<Matriz2[i][j]<<"|";
        }
        cout<<endl;
    }
    cout<<"Sumadas dan: "<<endl;
    for(int i=0;i<Filas;i++){
        for(int j=0;j<Columnas;j++){
            cout<<MatrizResultante[i][j]<<"|";
        }
        cout<<endl;
    }
*/
    return 0;
}
