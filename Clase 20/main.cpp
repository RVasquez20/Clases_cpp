#include"librerias.h"
struct Notas{
    int n1,n2,n3,n4,Promedio;
    char Observaciones[10];
};
struct Estudiantes{
    int Codigo,Edad;
    char NombreCompleto[50];
    struct Notas Nota;
};
Estudiantes Estudiante;
string NombreArchivo="C:\\Users\\rodri\\Documents\\GitHub\\Clases_cpp\\Clase 20\\cmake-build-debug\\Estudiantes.bin";
char H=205,ESI=201,ESD=187,EID=188,DD=185,DI=204,V=186,EII=200;
#define Linea cout<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H<<H;
void Menu();
bool Verificacion(int);
int main(){
Menu();

return 0;
}
void Menu(){
    int opc=0;
    cout<<"1)Registro Nuevo"<<endl;
    cout<<"2)Mostrar Registros"<<endl;
    cout<<"3)Busqueda de Registro"<<endl;
    cout<<"4)Modificacion de Registro"<<endl;
    cout<<"5)Eliminacion de Registro"<<endl;
    cout<<"6)Salir"<<endl;
    cout<<"-----------------------------"<<endl;
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            fstream Archivo(NombreArchivo,ios::app|ios::binary);
            loop:
            int aux=0;
            cout<<"Ingrese el codigo del estudiante: "<<endl;
            cin>>aux;
            fflush(stdin);
            if(!Verificacion(aux)){
               goto loop;
            }else{
                Estudiante.Codigo=aux;
                cout<<"Ingrese el nombre completo"<<endl;
                cin.getline(Estudiante.NombreCompleto,50,'\n');
                fflush(stdin);
                cout<<"Ingrese la edad del estudiante: "<<endl;
                cin>>Estudiante.Edad;
                fflush(stdin);
                cout<<"Ingrese la nota 1 del estudiante: "<<endl;
                cin>>Estudiante.Nota.n1;
                fflush(stdin);
                cout<<"Ingrese la nota 2 del estudiante: "<<endl;
                cin>>Estudiante.Nota.n2;
                fflush(stdin);
                cout<<"Ingrese la nota 3 del estudiante: "<<endl;
                cin>>Estudiante.Nota.n3;
                fflush(stdin);
                cout<<"Ingrese la nota 4 del estudiante: "<<endl;
                cin>>Estudiante.Nota.n4;
                fflush(stdin);
                Estudiante.Nota.Promedio=(Estudiante.Nota.n1+Estudiante.Nota.n2+Estudiante.Nota.n3+Estudiante.Nota.n4)/4;
                if(Estudiante.Nota.Promedio>61){

                    strcpy(Estudiante.Nota.Observaciones,"Aprobado");
                }else{
                    strcpy(Estudiante.Nota.Observaciones,"Reprobado");
                }
                Archivo.write((char *)&Estudiante,sizeof(Estudiantes));
            }
            Archivo.close();
            Menu();
            break;
        }
        case 2:{
            fstream Archivo(NombreArchivo,ios::in|ios::binary);
            if(Archivo.fail()){
                cout<<"Error al aperturar"<<endl;
            }else{
                Archivo.read((char *)&Estudiante,sizeof(Estudiantes));

                cout<<ESI;Linea;cout<<ESD<<endl;
                while(!Archivo.eof()){

                    cout<<V<<"Codigo De Estudiante: "<<Estudiante.Codigo<<V<<endl;
                    cout<<V<<"Nombre :"<<Estudiante.NombreCompleto<<"     "<<V<<endl;
                    cout<<V<<"Edad :"<<Estudiante.Edad<<"               "<<V<<endl;
                    cout<<V<<"Nota 1:"<<Estudiante.Nota.n1<<"              "<<V<<endl;
                    cout<<V<<"Nota 2:"<<Estudiante.Nota.n2<<"              "<<V<<endl;
                    cout<<V<<"Nota 3:"<<Estudiante.Nota.n3<<"              "<<V<<endl;
                    cout<<V<<"Nota 4:"<<Estudiante.Nota.n4<<"              "<<V<<endl;
                    cout<<V<<"Promedio:"<<Estudiante.Nota.Promedio<<"            "<<V<<endl;
                    if(strcmp(Estudiante.Nota.Observaciones,"Reprobado")==0) {
                        cout << V << "OBSERVACIONES:" << Estudiante.Nota.Observaciones << V << endl;
                    }else{
                        cout << V << "OBSERVACIONES: " << Estudiante.Nota.Observaciones << V << endl;
                    }
                    cout<<DI;Linea;cout<<DD<<endl;



                    Archivo.read((char *)&Estudiante,sizeof(Estudiantes));
                }
                cout<<EII;Linea;cout<<EID<<endl;

            }
            Archivo.close();
           Menu();
            break;
        }
        default:{
            cout<<"Opcion incorrecta Elija nuevamente"<<endl;
            getch();
            Menu();
            break;
        }
    }
}
bool Verificacion(int cod){
    fstream Archivo(NombreArchivo,ios::binary|ios::in);
    int Encontrado=0;
    Archivo.read((char *)&Estudiante,sizeof(Estudiantes));
    while(!Archivo.eof()){
        if(Estudiante.Codigo==cod){
            Encontrado=1;
        }
        Archivo.read((char *)&Estudiante,sizeof(Estudiantes));
    }
    Archivo.close();
    if(Encontrado==0){
        return true;
    }else{
        return false;
    }
}
