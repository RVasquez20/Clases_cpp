#include "librerias.h"
typedef struct Persona{
    char Nombre[50],Apellido[50],Telefono[9];
    int Edad;
};
Persona DatosP;
string NombreArchivo="Personas.txt";
void Ingreso();
void Lectura();
void Menu();
void Busqueda();
void Actualizacion();
void Eliminar();
int main() {
    Menu();
    return 0;
}
void Menu(){
    int opc=0;
    cout<<"Menu principal"<<endl;
    cout<<"1)Ingreso de datos"<<endl;
    cout<<"2)Lectura de datos"<<endl;
    cout<<"3)Busqueda de datos"<< endl;
    cout<<"4)Actualizar datos"<<endl;
    cout<<"5)Eliminar datos"<<endl;
    cout<<"6)Salir"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Ingrese la opcion que desea: ";
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            Ingreso();
            getch();
            Menu();
            break;
        }
        case 2:{
            Lectura();
            getch();
            Menu();
            break;
        }
        case 3:{
            Busqueda();
            getch();
            Menu();
            break;
        }
        case 4:{
            Actualizacion();
            getch();
            Menu();
            break;
        }
        case 5:{
            Eliminar();
            getch();
            Menu();
            break;
        }
        case 6:{
            exit(0);
            break;
        }
        default:{
            cout<<"opcion incorrecta elija nuevamente "<<endl;
            getch();
            Menu();
            break;
        }
    }
}
void Ingreso(){
    cout<<endl<<"-------------Ingreso de datos------------"<<endl;
    fstream Archivo(NombreArchivo,ios::app);
    char opc2;
    if(Archivo.fail()){
        cout<<"Error"<<endl;
    }else{
    do{
    cout<<"Ingrese el nombre de la persona"<<endl;
    cin.getline(DatosP.Nombre,50,'\n');
        fflush(stdin);
    cout<<"Ingrese el Apellido de la persona"<<endl;
    cin.getline(DatosP.Apellido,50,'\n');
        fflush(stdin);
    cout<<"Ingrese el Telefono de la persona"<<endl;
    cin.getline(DatosP.Telefono,9,'\n');
    fflush(stdin);
    cout<<"Ingrese La Edad de la persona"<<endl;
    cin>>DatosP.Edad;
        fflush(stdin);
        Archivo<<DatosP.Nombre<<" "<<DatosP.Apellido<<" "<<DatosP.Telefono<<" "<<DatosP.Edad<<endl;
        cout<<"Desea Registrar a otra persona? S/N"<<endl;
        cin>>opc2;
        fflush(stdin);
    }while(toupper(opc2)=='S');
    }
    Archivo.close();
}
void Lectura(){
    int id=0;
    fflush(stdin);
    fstream Archivo(NombreArchivo,ios::in);
    if(Archivo.fail()){
        cout<<"Error"<<endl;
    }else{
        cout<<endl<<"------Datos Registrados-----"<<endl;
        Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        while(!Archivo.eof()){
            fflush(stdin);
            id++;
            cout<<"ID: "<<id<<endl;
            cout<<"Nombre: "<<DatosP.Nombre<<endl;
            cout<<"Apellido: "<<DatosP.Apellido<<endl;
            cout<<"Telefono: "<<DatosP.Telefono<<endl;
            cout<<"Edad: "<<DatosP.Edad<<endl;
            cout<<"-------------------------------"<<endl;
            Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        }
    }
    Archivo.close();
}
void Busqueda(){
    string NombreBuscar;

    cout << "Ingrese el nombre a buscar: ";
    getline(cin,NombreBuscar);

    fstream Archivo(NombreArchivo,ios::in);
    if(Archivo.fail()){
        cout<<"Error"<<endl;
    }else{
        Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        while(!Archivo.eof()){
            if(NombreBuscar.compare(DatosP.Nombre) == 0){
                fflush(stdin);
                cout<<"Nombre: "<<DatosP.Nombre<<endl;
                cout<<"Apellido: "<<DatosP.Apellido<<endl;
                cout<<"Telefono: "<<DatosP.Telefono<<endl;
                cout<<"Edad: "<<DatosP.Edad<<endl;
                cout<<"-------------------------------"<<endl;
            }
            Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        }
    }
    Archivo.close();
}
void Actualizacion(){
    string NombreBuscar,NuevoNombre,NuevoApellido,NuevoTelefono;
    int EdadNueva=0;
    char opc3;
    cout << "Ingrese el nombre a Modificar: ";
    getline(cin,NombreBuscar);

    fstream Archivo(NombreArchivo,ios::in);
    fstream Temporal("Temporal.txt",ios::app);
    if(Archivo.fail()||Temporal.fail()){
        cout<<"Error"<<endl;
    }else{
        Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        while(!Archivo.eof()){
            if(NombreBuscar.compare(DatosP.Nombre) == 0){
                fflush(stdin);
                cout<<"Nombre: "<<DatosP.Nombre<<endl;
                cout<<"Apellido: "<<DatosP.Apellido<<endl;
                cout<<"Telefono: "<<DatosP.Telefono<<endl;
                cout<<"Edad: "<<DatosP.Edad<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"Este es el registro que desea modificar? S/N"<<endl;
                cin>>opc3;
                fflush(stdin);
                if(toupper(opc3)=='S'){
                    cout<<"Ingrese el Nuevo nombre de la persona"<<endl;
                    getline(cin,NuevoNombre);
                    fflush(stdin);
                    cout<<"Ingrese el Nuevo Apellido de la persona"<<endl;
                    getline(cin,NuevoApellido);
                    fflush(stdin);
                    cout<<"Ingrese el Nuevo Telefono de la persona"<<endl;
                    getline(cin,NuevoTelefono);
                    fflush(stdin);
                    cout<<"Ingrese La Nuevo Edad de la persona"<<endl;
                    cin>>EdadNueva;
                    fflush(stdin);
                    Temporal<<NuevoNombre<<" "<<NuevoApellido<<" "<<NuevoTelefono<<" "<<EdadNueva<<endl;
                }
            }
            else {
                Temporal << DatosP.Nombre << " " << DatosP.Apellido << " " << DatosP.Telefono << " " << DatosP.Edad
                         << endl;
            }
            Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        }
    }
    Archivo.close();
    Temporal.close();
    remove(NombreArchivo.c_str());
    rename("Temporal.txt",NombreArchivo.c_str());
}
void Eliminar(){
    string NombreEliminar;
    char opc3;
    cout << "Ingrese el nombre a Eliminar: ";
    getline(cin,NombreEliminar);

    fstream Archivo(NombreArchivo,ios::in);
    fstream Temporal("Temporal.txt",ios::app);
    if(Archivo.fail()||Temporal.fail()){
        cout<<"Error"<<endl;
    }else{
        Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        while(!Archivo.eof()){
            if(NombreEliminar.compare(DatosP.Nombre) == 0){
                fflush(stdin);
                cout<<"Nombre: "<<DatosP.Nombre<<endl;
                cout<<"Apellido: "<<DatosP.Apellido<<endl;
                cout<<"Telefono: "<<DatosP.Telefono<<endl;
                cout<<"Edad: "<<DatosP.Edad<<endl;
                cout<<"-------------------------------"<<endl;
                cout<<"Este es el registro que desea Eliminar? S/N"<<endl;
                cin>>opc3;
                fflush(stdin);
                if(toupper(opc3)=='S'){
                    cout<<"Datos eliminados correctamente"<<endl;
                }
            }
            else {
                Temporal << DatosP.Nombre << " " << DatosP.Apellido << " " << DatosP.Telefono << " " << DatosP.Edad
                         << endl;
            }
            Archivo>>DatosP.Nombre>>DatosP.Apellido>>DatosP.Telefono>>DatosP.Edad;
        }
    }
    Archivo.close();
    Temporal.close();
    remove(NombreArchivo.c_str());
    rename("Temporal.txt",NombreArchivo.c_str());
}