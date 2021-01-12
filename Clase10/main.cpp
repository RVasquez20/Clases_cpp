#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <string.h>
#include <strings.h>
#define usuario "jairo"
#define pass "123"
#define linea cout<<"---------------------"<<endl;
using namespace std;
 struct Empleado{
    char Nombre[50],Apellido[50];
    int Edad;
};
 Empleado EmpleadoDatos;

/*struct Estudiante{
    int Notas[100];
    double Promedio;
    char Nombre[50];
};
Estudiante EstudianteDatos[100];
struct Estudiante{
    int Notas[100];
    double Promedio;
    char Nombre[50];
};
Estudiante EstudianteDatos[100][100];*/
void Menu();
void Mostrar();
int main() {
    string us="jairo";
   if(us.compare(usuario)){
       cout<<"Hola "<<usuario<<endl;
       linea;
   }
    Menu();
    /*int opcMenu=0;
    do {
        loop:
        int opc = 0;
        cout << "Menu Principal" << endl;
        cout << "1)Ingreso de datos" << endl;
        cout << "2)Mostrar Datos" << endl;
        cout << "3)Actualizar un dato en especifico" << endl;
        cout << "4)Borrar Datos" << endl;
        cout << endl << "Ingrese la opcion que desea :";
        cin >> opc;
        cout << endl;
        fflush(stdin);
        switch (opc) {
            case 1: {
                cout << "Ingrese el nombre" << endl;
                cin.getline(EmpleadoDatos.Nombre, 50, '\n');
                cout << "Ingrese el Apellido" << endl;
                cin.getline(EmpleadoDatos.Apellido, 50, '\n');
                cout << "Ingrese La Edad" << endl;
                cin >> EmpleadoDatos.Edad;
                fflush(stdin);
                break;
            }
            case 2: {
                cout << "El nombre Es:" << EmpleadoDatos.Nombre << endl;
                cout << "El Apellido Es:" << EmpleadoDatos.Apellido << endl;
                cout << "La Edad Es:" << EmpleadoDatos.Edad << endl;
                break;
            }
            case 3:{
                loopMod:
                int opcMod=0, edad = 0;
                char eleccion,Dato[50];
                cout<<"Menu Modificacion"<<endl;
                cout<<"1)Nombre"<<endl;
                cout<<"2)Apellido"<<endl;
                cout<<"3)Edad"<<endl;
                cout<<endl<<"Seleccione la opcion a Modificar";
                cin>>opcMod;
                fflush(stdin);
                switch (opcMod) {
                    case 1:{
                       cout<<"Ingrese Nuevo Nombre"<<endl;
                       cin.getline(Dato,50,'\n');
                       cout<<"¿Esta seguro que desea cambiar de '"<<EmpleadoDatos.Nombre<<"' a '"<<Dato<<"'? S/N"<<endl;
                       cin>>eleccion;
                       if(eleccion=='S'){
                           strcpy(EmpleadoDatos.Nombre,Dato);
                       }
                        break;
                    }

                    case 2:{
                        cout << "Ingrese Nuevo Apellido" << endl;
                        cin.getline(Dato,50,'\n');
                        cout << "Esta seguro que desea cambiar de '" << EmpleadoDatos.Apellido << "' a '" << Dato << "'? S/N"<< endl;
                        cin >> eleccion;
                        if(eleccion == 'S'){
                            strcpy(EmpleadoDatos.Apellido,Dato);
                        }
                        break;
                    }
                    case 3:{
                        cout << "Ingrese Nueva Edad" << endl;
                        cin >> edad;
                        cout << "Esta seguro que desea cambiar de " << EmpleadoDatos.Edad << " a " << edad << "? S/N" << endl;
                        cin >> eleccion;
                        fflush(stdin);
                        if(eleccion == 'S'){
                            EmpleadoDatos.Edad = edad;
                        }
                        break;
                    }
                    default:{
                        cout<<"Opcion Incorrecta Vuelva a elegir"<<endl;
                        getch();
                        goto loopMod;
                        break;
                    }
                }
                break;
            }
            case 4:{
                char eleccion;
                cout<<"Esta seguro que desea eliminar todos los datos(devolviendo los valores Predeterminados)? S/N"<<endl;
                cin>>eleccion;
                if(eleccion=='S'){
                    strcpy(EmpleadoDatos.Nombre,"");
                    strcpy(EmpleadoDatos.Apellido,"");
                    EmpleadoDatos.Edad=0;
                }

                break;
            }
            default: {
                cout << "Opcion incorrecta Escoja nuevamente";
                getch();
                goto loop;
                break;
            }
        }
        cout<<"Desea Regresar al Menu Principal 1=si ,2=no"<<endl;
        cin>>opcMenu;
        fflush(stdin);
    }while(opcMenu!=2);
     */
  /*  int CantidadDeEstudiantes=0,CantidadNotas[100],Suma;
    cout<<"Ingrese la cantidad de Estudiantes a Registrar"<<endl;
    cin>>CantidadDeEstudiantes;
    fflush(stdin);
    for(int i=0;i<CantidadDeEstudiantes;i++){
        Suma=0;
        cout<<"Ingrese el nombre del estudiante "<<i+1<<endl;
        cin.getline(EstudianteDatos[i].Nombre,50,'\n');
        cout<<"Ingrese la Cantidad notas del Estudiante "<<EstudianteDatos[i].Nombre<<endl;
        cin>>CantidadNotas[i];
        for(int j=0;j<CantidadNotas[i];j++){
            cout<<"Ingrese la Nota "<<j+1<<endl;
            cin>>EstudianteDatos[i].Notas[j];
            fflush(stdin);
            Suma+=EstudianteDatos[i].Notas[j];
        }
        EstudianteDatos[i].Promedio=Suma/CantidadNotas[i];
    }
    cout<<endl<<endl<<endl;
    for(int i=0;i<CantidadDeEstudiantes;i++){
        cout<<"================================="<<endl;
        cout<<"El Nombre Del Estudiante es:"<<EstudianteDatos[i].Nombre;
        cout<<"Las Notas son "<<endl<<endl;
        for(int j=0;j<CantidadNotas[i];j++){
            cout<<"La nota "<<j+1<<" Es:"<<EstudianteDatos[i].Notas[j]<<endl;
        }
        cout<<"-------------------------------"<<endl;
        cout<<"El Promedio Es: "<<EstudianteDatos[i].Promedio<<endl;
    }*/
   /* int Filas=0,CantidadNotas[100],Suma,Columnas=0;
    cout<<"Ingrese la cantidad de Filas Estudiantes a Registrar"<<endl;
    cin>>Filas;
    cout<<"Ingrese la cantidad de Columnas Estudiantes a Registrar"<<endl;
    cin>>Columnas;
    fflush(stdin);
    for(int i=0;i<Filas;i++){
        for(int x=0;x<Columnas;x++) {
            Suma = 0;
            cout << "Ingrese el nombre del estudiante en la posicion [" <<i<<"]["<<x<<"]"<< endl;
            cin.getline(EstudianteDatos[i][x].Nombre, 50, '\n');
            cout << "Ingrese la Cantidad notas del Estudiante " << EstudianteDatos[i][x].Nombre << endl;
            cin >> CantidadNotas[i];
            for (int j = 0; j < CantidadNotas[i]; j++) {
                cout << "Ingrese la Nota " << j + 1 << endl;
                cin >> EstudianteDatos[i][x].Notas[j];
                fflush(stdin);
                Suma += EstudianteDatos[i][x].Notas[j];
            }
            EstudianteDatos[i][x].Promedio = Suma / CantidadNotas[i];
        }
    }
    cout<<endl<<endl<<endl;
    int SumaFilas[Filas],S=0;
    for(int i=0;i<Filas;i++) {
        S = 0;
        for (int x = 0; x < Columnas; x++) {
            /* if (i != x) {
                 cout << "=================================" << endl;
                 cout << "El Nombre Del Estudiante en la posicion [" << i << "][" << x << "]es:"
                      << EstudianteDatos[i][x].Nombre;
                 cout << "Las Notas son " << endl << endl;
                 for (int j = 0; j < CantidadNotas[i]; j++) {
                     cout << "La nota " << j + 1 << " Es:" << EstudianteDatos[i][x].Notas[j] << endl;
                 }
                 cout << "-------------------------------" << endl;
                 cout << "El Promedio Es: " << EstudianteDatos[i][x].Promedio << endl;
             }
         }
            S+=EstudianteDatos[i][x].Promedio;
        }
        SumaFilas[i]=S;
    }
    for(int i:SumaFilas){
        cout<<i<<endl;
    }*/
    return 0;
}
void Menu(){
    int opcMenu=0;

        loop:
        int opc = 0;
        cout << "Menu Principal" << endl;
        cout << "1)Ingreso de datos" << endl;
        cout << "2)Mostrar Datos" << endl;
        cout << "3)Actualizar un dato en especifico" << endl;
        cout << "4)Borrar Datos" << endl;
        cout << endl << "Ingrese la opcion que desea :";
        cin >> opc;
        cout << endl;
        fflush(stdin);
        switch (opc) {
            case 1: {
                cout << "Ingrese el nombre" << endl;
                cin.getline(EmpleadoDatos.Nombre, 50, '\n');
                cout << "Ingrese el Apellido" << endl;
                cin.getline(EmpleadoDatos.Apellido, 50, '\n');
                cout << "Ingrese La Edad" << endl;
                cin >> EmpleadoDatos.Edad;
                fflush(stdin);
                Mostrar();
                Menu();
                break;
            }
            case 2: {
                Mostrar();
               Menu();
                break;
            }
            case 3:{
                loopMod:
                int opcMod=0, edad = 0;
                char eleccion,Dato[50];
                cout<<"Menu Modificacion"<<endl;
                cout<<"1)Nombre"<<endl;
                cout<<"2)Apellido"<<endl;
                cout<<"3)Edad"<<endl;
                cout<<endl<<"Seleccione la opcion a Modificar";
                cin>>opcMod;
                fflush(stdin);
                switch (opcMod) {
                    case 1:{
                        cout<<"Ingrese Nuevo Nombre"<<endl;
                        cin.getline(Dato,50,'\n');
                        cout<<"¿Esta seguro que desea cambiar de '"<<EmpleadoDatos.Nombre<<"' a '"<<Dato<<"'? S/N"<<endl;
                        cin>>eleccion;
                        if(eleccion=='S'){
                            strcpy(EmpleadoDatos.Nombre,Dato);
                        }Menu();
                        break;
                    }

                    case 2:{
                        cout << "Ingrese Nuevo Apellido" << endl;
                        cin.getline(Dato,50,'\n');
                        cout << "Esta seguro que desea cambiar de '" << EmpleadoDatos.Apellido << "' a '" << Dato << "'? S/N"<< endl;
                        cin >> eleccion;
                        if(eleccion == 'S'){
                            strcpy(EmpleadoDatos.Apellido,Dato);
                        }Menu();
                        break;
                    }
                    case 3:{
                        cout << "Ingrese Nueva Edad" << endl;
                        cin >> edad;
                        cout << "Esta seguro que desea cambiar de " << EmpleadoDatos.Edad << " a " << edad << "? S/N" << endl;
                        cin >> eleccion;
                        fflush(stdin);
                        if(eleccion == 'S'){
                            EmpleadoDatos.Edad = edad;
                        }Menu();
                        break;
                    }
                    default:{
                        cout<<"Opcion Incorrecta Vuelva a elegir"<<endl;
                        getch();
                        goto loopMod;
                        break;
                    }
                }Menu();
                break;
            }
            case 4:{
                char eleccion;
                cout<<"Esta seguro que desea eliminar todos los datos(devolviendo los valores Predeterminados)? S/N"<<endl;
                cin>>eleccion;
                if(eleccion=='S'){
                    strcpy(EmpleadoDatos.Nombre,"");
                    strcpy(EmpleadoDatos.Apellido,"");
                    EmpleadoDatos.Edad=0;
                }
                Menu();
                break;
            }
            default: {
                cout << "Opcion incorrecta Escoja nuevamente";
                getch();
                goto loop;
                break;
            }
        }

}
void Mostrar(){
    cout << "El nombre Es:" << EmpleadoDatos.Nombre << endl;
    cout << "El Apellido Es:" << EmpleadoDatos.Apellido << endl;
    cout << "La Edad Es:" << EmpleadoDatos.Edad << endl;
}