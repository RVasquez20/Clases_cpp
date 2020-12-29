#include <iostream>
#include <new>
#include <string>
#include <string.h>
#include <strings.h>
#include <time.h>
#include <sstream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
    int Opcion = 0;
    char Regresar;

    do{
        loop:
        cout << "========== MENU PRINCIPAL ==========" << endl;
        cout << "====================================" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Ejercicio 4" << endl;
        cout << "5. Ejercicio 5" << endl;
        cout << "6. Ejercicio 6" << endl;
        cout << "7. Ejercicio 7" << endl;
        cout << "8. Ejercicio 8" << endl;
        cout << "9. Ejercicio 9" << endl;
        cout << "10. Ejercicio 10" << endl;
        cout << "11. Ejercicio 11" << endl;
        cout << "12. Ejercicio 12" << endl;
        cout << "13. Ejercicio 13" << endl;
        cout << "14. Ejercicio 14" << endl;
        cout << "15. Ejercicio 15" << endl;
        cout << "16. Ejercicio 16" << endl;
        cout << "17. Ejercicio 17" << endl;
        cout << "18. Ejercicio 18" << endl;
        cout << "19. Ejercicio 19" << endl;
        cout << "20. Ejercicio 20" << endl;
        cout << "21. Ejercicio 21" << endl;
        cout << "22. Ejercicio 22" << endl;
        cout << "23. Ejercicio 23" << endl;
        cout << "24. Ejercicio 24" << endl;
        cout << "25. Ejercicio 25" << endl;
        cout << "26. Ejercicio 26" << endl;
        cout << "27. Ejercicio 27" << endl;
        cout << "28. Ejercicio 28" << endl;
        cout << "29. Ejercicio 29" << endl;
        cout << "30. Salir" << endl;

        cout << "Seleccione un ejercicio: ";
        cin >> Opcion;

        switch(Opcion){
            case 1:{
                for(int i=1; i<=100; i+=3){
                    cout << i << endl;
                }
                break;
            }
            case 2:{
                for(int i=100; i>=0; i--){
                    if(i%2 == 0){
                        cout << i << endl;
                    }
                }
                break;
            }
            case 3:{
                int Numero = 0, SumaP = 0, SumaI = 0;

                cout << "Ingrese hasta que numero desea sumar: ";
                cin >> Numero;

                for(int i=0; i<=Numero; i++){
                    if(i%2 == 0){
                        SumaP += i;
                    }else
                        if(i%2 == 1){
                            SumaI += i;
                        }
                }
                cout << "La suma de los pares es: " << SumaP << endl;
                cout << "La suma de los impares es: " << SumaI << endl;
                break;
            }
            case 4:{
                int OpcionOperaciones = 0;
                char OpcionRegresar2;

                do{
                    loopoperaciones:
                    cout << "------Que desea realizar?------ " << endl;
                    cout << "1. Comprobar si es primo" << endl;
                    cout << "2. Hallar su factorial" << endl;
                    cout << "3. Imprimir su tabla de multiplicar" << endl;
                    cout << "4. Salir" << endl;

                    cout << "Ingrese la opcion: ";
                    cin >> OpcionOperaciones;

                    switch(OpcionOperaciones){
                        case 1:{
                            /* int Primo = 0;
                            bool VarPrimo = true;

                            cout << "Ingrese un numero: ";
                            cin >> Primo;

                            for(int i=2; i<Primo; i++){
                                if(Primo % i == 0){
                                    VarPrimo = false;
                                }
                            }
                            if(VarPrimo == true){
                                cout << "El numero es primo" << endl;
                            }else{
                                cout << "El numero no es primo" << endl;
                            }*/
                            break;
                        }
                        case 2:{
                            int Factorial = 0;
                            double Mult = 1;

                            cout << "Ingrese un numero: ";
                            cin >> Factorial;

                            for(int i=Factorial; i>0; i--){
                                cout << i << " ";
                                Mult *= i;
                            }
                            cout << " " << "=" << " " << Mult;
                            cout << endl;
                            break;
                        }
                        case 3:{
                            int TablaMultiplicar = 0, Multiplicacion = 0;

                            cout << "Ingrese un numero: " << endl;
                            cin >> TablaMultiplicar;

                            for(int i=1; i<=10; i++){
                                Multiplicacion = i * TablaMultiplicar;
                                cout << i << " " << "*" << " " << TablaMultiplicar << " " << "=" << " " << Multiplicacion << endl;
                            }
                            break;
                        }
                        case 4:{
                            break;
                        }
                        default:{
                            cout << "Opcion invalida, ingrese una opcion de la lista..." << endl;
                            getch();
                            goto loopoperaciones;
                            break;
                        }
                    }
                    fflush(stdin);
                    cout << "Desea regresar al menu? Si=s / No=n: ";
                    OpcionRegresar2 = getch();
                }while(toupper(OpcionRegresar2) == 'S');
                break;
            }
            case 5:{
                int Opc = 0;
                char Regresar2;

                do{
                    loopoperacionesbasicas:
                    cout << "---Menu---" << endl;
                    cout << "1. Suma" << endl;
                    cout << "2. Resta" << endl;
                    cout << "3. Multiplicacion" << endl;
                    cout << "4. Divison" << endl;
                    cout << "5. Potencia" << endl;
                    cout << "6. Raiz" << endl;
                    cout << "7. Seno" << endl;
                    cout << "8. Coseno" << endl;
                    cout << "9. Tanjente" << endl;
                    cout << "10. Salir" << endl;

                    cout << "Ingrese la opcion que desea consultar: ";
                    cin >> Opc;

                    switch(Opc){
                        case 1:{
                            int Suma = 0, Sumar = 0, Resultado = 0;

                            cout << "Cuantos numeros desea sumar? : ";
                            cin >> Suma;

                            for(int i=0; i<Suma; i++){
                                cout << "Ingrese el numero " << i+1 << ":";
                                cin >> Sumar;
                                Resultado += Sumar;
                            }
                            cout << "La suma de los numeros es: " << Resultado << endl;
                            break;
                        }
                        case 2:{
                            int Resta = 0, Restar = 0, Resultado2 = 0;

                            cout << "Cuantos numeros desea restar? : ";
                            cin >> Resta;

                            for(int i=0; i<Resta; i++){
                                cout << "Ingrese el numero " << i+1 << ":";
                                cin >> Restar;
                                if(i==0){
                                    Resultado2 = Restar;
                                }else{
                                    Resultado2 -= Restar;
                                }
                            }
                            cout << endl;
                            cout << "La resta de los numeros es: " << Resultado2 << endl;
                            break;
                        }
                        case 3:{
                            int Multiplicacion = 0, Multiplicar = 0, Resultado1 = 1;

                            cout << "Cuantos numeros desea multiplicar? : ";
                            cin >> Multiplicacion;

                            for(int i=0; i<Multiplicacion; i++){
                                cout << "Ingrese el numero " << i+1 << ":";
                                cin >> Multiplicar;
                                Resultado1 *= Multiplicar;
                            }
                            cout << "La multiplicacion de los numeros es: " << Resultado1 << endl;
                            break;
                        }
                        case 4:{
                            int Division = 0;
                            float Dividir = 0.00, Resultado3 = 0.00, Variable = 1.00, Resultado4 = 0.00;

                            cout << "Cuantos numeros desea Dividir? : ";
                            cin >> Division;

                            for(int i=0; i<Division; i++){
                                cout << "Ingrese el numero " << i+1 << ":";
                                cin >> Dividir;
                                Resultado3 = Dividir / Variable;
                                Resultado4 = Resultado3 / Dividir;
                            }
                            cout << "La division de los numeros es: " << Resultado4 << endl;
                            break;
                        }
                        case 5: {
                            int Numero = 0, Potencia = 0, Resultado = 1;
                            char OpcionPotencia;

                            do {
                                cout << "Ingrese un numero: ";
                                cin >> Numero;

                                cout << "Ingrese la potencia: ";
                                cin >> Potencia;
                                for (int i = 0; i < Potencia; i++) {
                                    Resultado *= Numero;
                                }
                                cout << Numero << " " << "^ " << Potencia << " " << "= " << Resultado << endl;

                                cout << "\nDesea realizar otra consulta? Si=n / No=n" << endl;
                                OpcionPotencia = getch();
                            } while (toupper(OpcionPotencia) == 'S');
                            fflush(stdin);
                            break;
                        }
                        case 6:{
                            /*int Numero = 0, Raiz = 0, Resultado = 1;
                            char OpcionPotencia;

                            do {
                                cout << "Ingrese un numero: ";
                                cin >> Numero;

                                if(Numero % 2 == 0){


                                }
                                cout << "\nDesea realizar otra consulta? Si=n / No=n" << endl;
                                OpcionPotencia = getch();
                            } while (toupper(OpcionPotencia) == 'S'); */
                            break;
                        }
                        case 7:{
                            double CatetoO = 0.0, Hipotenusa = 0.0, Seno = 0.0;
                            char Opc;

                            do{
                                cout << "Ingrese el valor del cateto opuesto: ";
                                cin >> CatetoO;

                                cout << "Ingrese el valor de la Hipotenuda: ";
                                cin >> Hipotenusa;

                                Seno = CatetoO / Hipotenusa;

                                cout << "El seno es: " << Seno << endl;

                                cout << "Desea realizar otra consulta? Si=s / No=n ";
                                Opc = getch();
                            }while(toupper(Opc) == 'S');
                            fflush(stdin);
                            break;
                        }
                        case 8:{
                            double CatetoA = 0.0, Hipotenusa = 0.0, Coseno = 0.0;
                            char Opc;

                            do{
                                cout << "Ingrese el valor del cateto adyacente: ";
                                cin >> CatetoA;

                                cout << "Ingrese el valor de la Hipotenuda: ";
                                cin >> Hipotenusa;

                                Coseno = CatetoA / Hipotenusa;

                                cout << "El Coseno es: " << Coseno << endl;

                                cout << "Desea realizar otra consulta? Si=s / No=n ";
                                Opc = getch();
                            }while(toupper(Opc) == 'S');
                            fflush(stdin);
                            break;
                        }
                        case 9:{
                            double CatetoO = 0.0, CatetoA = 0.0, Tangente = 0.0;
                            char Opc;

                            do{
                                cout << "Ingrese el valor del cateto opuesto: ";
                                cin >> CatetoO;

                                cout << "Ingrese el valor del cateto adyacente: ";
                                cin >> CatetoA;

                                Tangente = CatetoO / CatetoA;

                                cout << "El valor de la tangente es: " << Tangente << endl;

                                cout << "Desea realizar otra consulta? Si=s / No=n ";
                                Opc = getch();
                            }while(toupper(Opc) == 'S');
                            fflush(stdin);
                            break;
                        }
                        case 10:{
                            fflush(stdin);
                            getch();
                            break;
                        }
                        default:{
                            cout << "Ingrese una opcion valida, intente nuevamente" << endl;
                            getch();
                            goto loopoperacionesbasicas;
                            break;
                        }
                    }
                    fflush(stdin);
                    cout << "Desea regresar el manu? Si=s / No=n";
                    Regresar2 = getch();
                }while(toupper(Regresar2) == 'S');
                break;
            }
            case 6:{
                int Factorial = 0;
                double Mult = 1;

                cout << "Ingrese un numero: ";
                cin >> Factorial;

                for(int i=Factorial; i>0; i--){
                    cout << i << " ";
                    Mult *= i;
                }
                cout << " " << "=" << " " << Mult;
                cout << endl;
                break;
            }
            case 7:{
                int Numero = 0;
                char Opc;

                do{
                    cout << "Ingrese un numero: ";
                    cin >> Numero;

                    if(Numero >0 && Numero % 2 == 0){
                        cout << "El numero ingresado es positivo y par..." << endl;
                    }else
                        if(Numero >0 && Numero % 2 == 1){
                            cout << "El numero ingresado es positivo e impar..." << endl;
                        }else
                            if(Numero <0 && Numero % 2 == 0){
                                cout << "El numero ingresado es negativo y par..." << endl;
                            }else
                                if(Numero <0 && Numero % 2 == 1){
                                    cout << "El numero ingresado es negativo e impar..." << endl;
                                }else
                                    if(Numero == 0){
                                    cout << "El numero ingresado es neutro..." << endl;
                        }
                    cout << "Desea realizar otra consulta? Si=s / No=n: ";
                    Opc = getch();
                }while(toupper(Opc) == 'S');
                break;
            }
            case 8:{
                int Numero1 = 0, Numero2 = 0, Mayor = 0, Menor = 0;
                char Opc;

                do{
                    loopmayormenor:
                    cout << "Ingrese el primer numero: ";
                    cin >> Numero1;

                    cout << "Ingrese el segundo numero: ";
                    cin >> Numero2;

                    if(Numero1 > Numero2) {
                        cout << "El numero " << Numero1 << " " << "es mayor." << endl;
                        cout << "El numero " << Numero2 << " " << "es menor." << endl;
                    }else
                        if(Numero2 > Numero1){
                            cout << "El numero " << Numero2 << " " << "es mayor." << endl;
                            cout << "El numero " << Numero1 << " " << "es menor." << endl;
                        }else
                            if(Numero1 == Numero2 || Numero2 == Numero1){
                                cout << "Los numeros ingresados son iguales" << endl;
                            }
                            cout << "Desea realizar otra consulta? Si=s / No=n: ";
                            Opc = getch();
                }while(toupper(Opc) == 'S');
                break;
            }
            case 9:{
                int Fecha = 0;

                cout << "Ingrese un anio: ";
                cin >> Fecha;

                if(Fecha % 4 != 0 || (Fecha % 100 == 0 && Fecha % 400 != 0)){
                    cout << "El anio no es bisiesto..." << endl;
                }else{
                    cout << "El anio es bisiesto..." << endl;
                }
                break;
            }
            case 10:{
                int Suma = 0;
                int Auxiliar = 0;

                int Array1[5];

                for(int i=0; i<5; i++){
                    cout << "Ingrese un numero: ";
                    cin >> Array1[i];
                    Suma += Array1[i];
                }
                for(int i=0; i<5; i++){
                    for(int j=0; j<5; j++){
                        if(Array1[j]>Array1[j+1]){
                            Auxiliar = Array1[j];
                            Array1[j] = Array1[j+1];
                            Array1[j+1] = Auxiliar;
                        }
                    }
                }
                cout << "\nLa suma de los valores ingresados es: " << Suma << endl;
                cout << "Mostrando el orden inverso de los valores ingresados: " << endl;
                for(int x=5-1; x>=0; x--){
                    cout << Array1[x] << endl;
                }
                break;
            }
            case 11:{
                int Matriz11[2][5];

                for(int i=0; i<2; i++){
                    for(int j=0; j<5; j++){
                        cout << Matriz11[i][j] << endl;
                    }
                }

                break;
            }
            case 12:{
                int A = 0, C = 0, B = 0;
                char Opc12;

                do{

                loop12:
                cout << "Ingrese el valor de A: ";
                cin >> A;
                cout << "Ingrese el valor de B: ";
                cin >> B;
                cout << "Ingrese el valor de C: ";
                cin >> C;

                if((A == B || A == C) && (B == A || B == C) && (C == A || C == B)){ // Problemas en esta parte
                    cout << endl;
                    cout << "Lo Siento, ingreso valores iguales, intente de nuevo... :D";
                    getch();
                    goto loop12;
                }else
                    if(A > B && A > C){
                        cout << endl;
                        cout << "El valor de A es el mayor.";
                    }else
                        if(B > A && B > C){
                            cout << endl;
                            cout << "El valor de B es el mayor.";
                        }else
                            if(C > A && C > B){
                                cout << endl;
                                cout << "El valor de C es el mayor.";
                            }
                            fflush(stdin);
                            cout << endl;
                            cout << "Dese realizar otra consulta? Si=s / No=n";
                            Opc12 = getch();
                }while(toupper(Opc12) == 'S');
                break;
            }
            case 13:{

                break;
            }
            case 14:{

                break;
            }
            case 15:{
                int Numero1 = 0, Numero2 = 0, Respuesta = 0;

                cout << "Ingrese un numero: ";
                cin >> Numero1;

                cout << "Ingrese otro numero: ";
                cin >> Numero2;

                for(int i=Numero2; i<Numero1; i++){
                    Respuesta++;
                }
                cout << Respuesta << endl;
                break;
            }
            case 16:{

                break;
            }
            case 17:{
                int Auxiliar = 0, x = 0;
                int Array3[3];

                for(int i=0; i<3; i++){
                    cout << "Ingrese un numero: ";
                    cin >> Array3[i];
                }
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        if(Array3[j] > Array3[j+1]){
                            Auxiliar = Array3[j];
                            Array3[j] = Array3[j+1];
                            Array3[j+1] = Auxiliar;
                        }
                    }
                }
                cout << "Los valores se muestran de menor a mayor: "; // Problemas en esta parte
                for(int x:Array3){
                    cout << x << endl;
                }
                break;
            }
            case 18:{

                break;
            }
            case 19:{

                break;
            }
            case 20:{

                break;
            }
            case 21:{

                break;
            }
            case 22:{

                break;
            }
            case 23:{

                break;
            }
            case 24:{

                break;
            }
            case 25:{

                break;
            }
            case 26:{

                break;
            }
            case 27:{

                break;
            }
            case 28:{

                break;
            }
            case 29:{

                break;
            }
            case 30:{
                cout << "Gracias por utilizar este programa :D" << endl;
                getch();
                exit(0);
                break;
            }
            default:{
                cout << "Ingrese una opcion valida, intente nuevamente..." << endl;
                getch();
                goto loop;
                break;
            }
        }
        fflush(stdin);
        cout << "Desea regresar al menu principal? Si=s / No=n";
        Regresar = getch();
    }while(toupper(Regresar) == 'S');
    return 0;
}