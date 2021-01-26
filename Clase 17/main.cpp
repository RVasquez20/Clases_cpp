#include "librerias.h"
void Menu();
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
          //  Ingreso();
            getch();
            Menu();
            break;
        }
        case 2:{
           // Lectura();
            getch();
            Menu();
            break;
        }
        case 3:{
           // Busqueda();
            getch();
            Menu();
            break;
        }
        case 4:{
           // Actualizacion();
            getch();
            Menu();
            break;
        }
        case 5:{
            //Eliminar();
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
