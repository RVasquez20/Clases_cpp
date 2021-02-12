#include "mislibrerias.h"

struct Fechas{
    int d,m,a;
};
struct Padron{
    int id;
    char Sexo[5],Nombre[50],Apellido[50],DPI[13];
    struct Fechas Fecha;
};
Padron P;
string NombreArchivo="PADRON.txt";
string Interno="Padron.dat";
int main() {
    loop:
    int opc=0;
cout<<"Menu Principal"<<endl;
    cout<<"1)Importar desde el archivo txt"<<endl;
    cout<<"2)Mostrar Padrones"<<endl;
    cout<<"3)Buscar Padrones"<<endl;
    cout<<"4)Salir"<<endl;
    cin>>opc;
    switch(opc){
        case 1:{
            string contenido,id,nombre,sexo,apellido,dpi,d,m,a;
            fstream Archivo(NombreArchivo,ios::in);
            fstream BBDD(Interno,ios::app|ios::binary);
            while(getline(Archivo,contenido)){
                stringstream flujo(contenido);
                getline(flujo,id,',');
                fflush(stdin);
                P.id=atoi(id.c_str());
                getline(flujo,sexo,',');
                fflush(stdin);
                strcpy(P.Sexo,sexo.c_str());
                getline(flujo,dpi,',');
                fflush(stdin);
                strcpy(P.DPI,dpi.c_str());
                getline(flujo,nombre,',');
                fflush(stdin);
                strcpy(P.Nombre,nombre.c_str());
                getline(flujo,apellido,',');
                fflush(stdin);
                strcpy(P.Apellido,apellido.c_str());
                getline(flujo,d,'/');
                fflush(stdin);
                P.Fecha.d=atoi(d.c_str());
                getline(flujo,m,'/');
                fflush(stdin);
                P.Fecha.m=atoi(m.c_str());
                getline(flujo,a,'\0');
                fflush(stdin);
                P.Fecha.a=atoi(a.c_str());
                BBDD.write((char *)&P,sizeof(Padron));
            }
            BBDD.close();
            Archivo.close();
            break;
        }
        case 2: {
            fstream Archivob(Interno, ios::in | ios::binary);
            if (Archivob.fail()) {
                cout << "Error al leer " << endl;
            } else {
                Archivob.read((char *) &P, sizeof(Padron));
                while (!Archivob.eof()) {
                    cout << "ID:" << P.id << endl;
                    cout << "Sexo:" << P.Sexo << endl;
                    cout << "DPI:" << P.DPI << endl;
                    cout << "Nombres: " << P.Nombre << endl;
                    cout << "Apellidos: " << P.Apellido << endl;
                    cout << "Fecha Nac:" << P.Fecha.d << "/" << P.Fecha.m << "/" << P.Fecha.a << endl;
                    cout << "-----------------------------------" << endl;
                    Archivob.read((char *) &P, sizeof(Padron));
                }
            }
            Archivob.close();
            break;
        }
            case 3:{
                loopMB:
                int opc1 = 0;
                cout << "MENU BUSCAR" << endl;
                cout << "1)Buscar por DPI" << endl;
                cout << "2)Buscar por Nombre" << endl;
                cout << "3)Buscar por fecha de nacimiento" << endl;
                cout << "4)Regresar" << endl;
                cout << "==================";

                cout << "Ingrese la opcion";
                cin >> opc1;
                fflush(stdin);

                switch(opc1){
                    case 1:{
                        string BDPI;

                        cout << "Ingrese el DPI: ";
                        getline(cin,BDPI);
                        fflush(stdin);

                        fstream ArchivoB(Interno,ios::in|ios::binary);
                        if(ArchivoB.fail()){
                            cout<<"Error al leer "<<endl;
                        }else{
                            ArchivoB.read((char *)&P,sizeof(Padron));
                            while(!ArchivoB.eof()){
                                if(BDPI.compare(P.DPI) == 0){
                                    cout<<"ID:"<<P.id<<endl;
                                    cout<<"Sexo:"<<P.Sexo<<endl;
                                    cout<<"DPI:"<<P.DPI<<endl;
                                    cout<<"Nombres: "<<P.Nombre<<endl;
                                    cout<<"Apellidos: "<<P.Apellido<<endl;
                                    cout<<"Fecha Nac:"<<P.Fecha.d<<"/"<<P.Fecha.m<<"/"<<P.Fecha.a<<endl;
                                    cout<<"-----------------------------------"<<endl;
                                    }
                                ArchivoB.read((char *)&P,sizeof(Padron));
                            }
                        }
                        ArchivoB.close();
                        break;
                    }
                    case 2:{
                        string BDPI;

                        cout << "Ingrese el Nombre: ";
                        getline(cin,BDPI);
                        fflush(stdin);

                        fstream ArchivoB(Interno,ios::in|ios::binary);
                        if(ArchivoB.fail()){
                            cout<<"Error al leer "<<endl;
                        }else{
                            ArchivoB.read((char *)&P,sizeof(Padron));
                            while(!ArchivoB.eof()){
                                if(BDPI.compare(P.Nombre) == 0){
                                    cout<<"ID:"<<P.id<<endl;
                                    cout<<"Sexo:"<<P.Sexo<<endl;
                                    cout<<"DPI:"<<P.DPI<<endl;
                                    cout<<"Nombres: "<<P.Nombre<<endl;
                                    cout<<"Apellidos: "<<P.Apellido<<endl;
                                    cout<<"Fecha Nac:"<<P.Fecha.d<<"/"<<P.Fecha.m<<"/"<<P.Fecha.a<<endl;
                                    cout<<"-----------------------------------"<<endl;
                                }
                                ArchivoB.read((char *)&P,sizeof(Padron));
                            }
                        }
                        ArchivoB.close();
                        break;
                    }
                    case 3:{
                        int d, m, a;

                        cout << "Ingrese el dia de nacimiento: ";
                        cin >> d;
                        fflush(stdin);
                        cout << "Ingrese el mes de nacimiento: ";
                        cin >> m;
                        fflush(stdin);
                        cout << "Ingrese el anio de nacimiento: ";
                        cin >> a;
                        fflush(stdin);

                        fstream ArchivoB(Interno,ios::in|ios::binary);
                        if(ArchivoB.fail()){
                            cout<<"Error al leer "<<endl;
                        }else{
                            ArchivoB.read((char *)&P,sizeof(Padron));
                            while(!ArchivoB.eof()){
                                if((d == P.Fecha.d) && (m == P.Fecha.m) && (a == P.Fecha.a)){
                                    cout<<"ID:"<<P.id<<endl;
                                    cout<<"Sexo:"<<P.Sexo<<endl;
                                    cout<<"DPI:"<<P.DPI<<endl;
                                    cout<<"Nombres: "<<P.Nombre<<endl;
                                    cout<<"Apellidos: "<<P.Apellido<<endl;
                                    cout<<"Fecha Nac:"<<P.Fecha.d<<"/"<<P.Fecha.m<<"/"<<P.Fecha.a<<endl;
                                    cout<<"-----------------------------------"<<endl;
                                }
                                ArchivoB.read((char *)&P,sizeof(Padron));
                            }
                        }
                        ArchivoB.close();
                        break;
                    }
                    case 4:{
                        goto loop;
                        break;
                    }
                    default:{
                        cout<<"Opcion incorrecta elija de nuevo"<<endl;
                        getch();
                        goto loopMB;
                        break;
                    }
                }
                break;
            }
        default:{
            cout<<"Opcion incorrecta elija de nuevo"<<endl;
            getch();
            goto loop;
            break;
        }
    }
    return 0;
}