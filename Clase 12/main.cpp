#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
using namespace std;
struct Empleados{
    int CodigoEmpleado,HorasTrabajadasSemanales[100];
    char Nombre[50];
    double Sueldo,SueldoLiquidoARecibir,SueldoPorHoraExtra,IGSS,IRTRA;
};
Empleados EmpleadoDatos[100];
void Menu();
void Ingreso(int);
void Mostrar();
void Modificar();
void Eliminar();
int main() {
    Menu();
    return 0;
}
void Menu(){
    int opc=0,CantidadEmpleados=0;
    cout<<"Menu Principal"<<endl;
    cout<<"1)Ingreso de Empleados"<<endl;
    cout<<"2)Mostrar Empleados"<<endl;
    cout<<"3)Modificacion de Empleados"<<endl;
    cout<<"4)Eliminar Empleados"<<endl;
    cout<<"5)Salir"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Ingrese la opcion que desea :";
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            cout<<"Ingrese la cantidad de Empleados a Registrar"<<endl;
            cin>>CantidadEmpleados;
            fflush(stdin);
            Ingreso(CantidadEmpleados);
            Menu();
            break;
        }
        default:{
            cout<<"Opcion Invalida Elija nuevamente :c"<<endl;
            Sleep(3000);
            Menu();
            break;
        }
    }

}
void Ingreso(int CantidadEmpleadosARegistar){
    for(int i=0;i<CantidadEmpleadosARegistar;i++){
        int CantidadDeSemanas=0,SumaTotalDeHorasExtra=0,SueldoTotalHorasExtra=0;
        cout<<"------------------------------------"<<endl;
        cout<<"Ingrese el Codigo Del Empleado:";
        cin>>EmpleadoDatos[i].CodigoEmpleado;
        fflush(stdin);
        cout<<"Ingrese el Nombre del Empleado:";
        cin.getline(EmpleadoDatos[i].Nombre,50,'\n');
        cout<<"Ingrese el sueldo Base del empleado:";
        cin>>EmpleadoDatos[i].Sueldo;
        fflush(stdin);
        cout<<"Ingrese la cantidad de semanas que trabajo extra "<<EmpleadoDatos[i].Nombre<<endl;
        cin>>CantidadDeSemanas;
        fflush(stdin);
        for(int j=0;j<CantidadDeSemanas;j++){
            cout<<"Ingrese el Total de horas extra trabajadas en la semana "<<j+1<<endl;
            cin>>EmpleadoDatos[i].HorasTrabajadasSemanales[j];
            fflush(stdin);
            SumaTotalDeHorasExtra+=EmpleadoDatos[i].HorasTrabajadasSemanales[j];
        }
        cout<<"Ingrese el sueldo por hora extra"<<endl;
        cin>>EmpleadoDatos[i].SueldoPorHoraExtra;
        fflush(stdin);
        EmpleadoDatos[i].IGSS=EmpleadoDatos[i].Sueldo*0.0483;
        EmpleadoDatos[i].IRTRA=EmpleadoDatos[i].Sueldo*0.1267;
        SueldoTotalHorasExtra=SumaTotalDeHorasExtra*EmpleadoDatos[i].SueldoPorHoraExtra;
        EmpleadoDatos[i].SueldoLiquidoARecibir=EmpleadoDatos[i].Sueldo-EmpleadoDatos[i].IRTRA+SueldoTotalHorasExtra-EmpleadoDatos[i].IGSS;
    }
}