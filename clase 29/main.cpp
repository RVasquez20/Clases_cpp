#include "librerias.h"
#include <queue>
class Persona{
protected:
    string Nombre;
    int Edad;
public:
    Persona(const string &nombre, int edad) : Nombre(nombre), Edad(edad) {}
    virtual void MostrarDatos()=0;
};
class Empleado: public Persona{
public:
    int codigo;
    string puesto;
public:
    Empleado(const string &nombre, int edad, int codigo, const string &puesto) : Persona(nombre, edad), codigo(codigo),
                                                                                 puesto(puesto) {}
    void MostrarDatos();
};

void Empleado::MostrarDatos() {
cout<<"Nombre: "<<Nombre<<endl;
cout<<"Edad: "<<Edad<<endl;
cout<<"Codigo E.: "<<codigo<<endl;
cout<<"Puesto: "<<puesto<<endl;
}

void MenuPrincipal();
void IngresoEmpleado();
void MostrarEmpleados();
void MenuEmpleados();

void VaciarCola();

queue<Persona *>Listado;


int main() {
MenuPrincipal();
    return 0;
}
void MenuPrincipal(){
    int opc=0;
    cout<<"Menu Principal"<<endl;
    cout<<"----------------"<<endl;
    cout<<"1)Menu De Empelados"<<endl;
    cout<<"2)Salir"<<endl;
    cout<<"------------------------------------"<<endl;
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            VaciarCola();
            MenuEmpleados();
            break;
        }
        case 2:{
            exit(0);
            break;
        }
        default:{
            cout<<"Opcion incorrecta"<<endl;
            MenuPrincipal();
            break;
        }
    }
}

void VaciarCola() {
while(!Listado.empty()){
    Listado.pop();
}
}

void MenuEmpleados() {
  int opc=0;
    cout<<"Menu Principal"<<endl;
    cout<<"----------------"<<endl;
    cout<<"1)Insertar Empleados"<<endl;
    cout<<"2)Mostrar Empleados"<<endl;
    cout<<"3)Regresar al menu Principal"<<endl;
    cout<<"------------------------------------"<<endl;
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            IngresoEmpleado();
            getch();
            MenuEmpleados();
            break;
        }
        case 2:{
            MostrarEmpleados();
             getch();
            MenuEmpleados();
            break;
        }
        default:{
            cout<<"Opcion incorrecta"<<endl;
            MenuPrincipal();
            break;
        }
    }
}
void IngresoEmpleado(){
    string Nombre,Puesto;
    int codigo=0,Edad=0;
    char opc;
    do{
        cout<<"Ingrese el nombre del empleado"<<endl;
        getline(cin,Nombre);
        fflush(stdin);
         cout<<"Ingrese el edad del empleado"<<endl;
        cin>>Edad;
        fflush(stdin);
         cout<<"Ingrese el codigo del empleado"<<endl;
        cin>>codigo;
        fflush(stdin);
         cout<<"Ingrese el puesto del empleado"<<endl;
        getline(cin,Puesto);
        fflush(stdin);
        Listado.push(new Empleado(Nombre,Edad,codigo,Puesto));
        cout<<"Desea ingresar otro empleado? s/n"<<endl;
        cin>>opc;
        fflush(stdin);
    }while(tolower(opc)=='s');
}

void MostrarEmpleados() {
while(!Listado.empty()){
    Listado.front()->MostrarDatos();
    cout<<"-------------------------"<<endl;
    Listado.pop();
}
}
