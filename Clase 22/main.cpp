#include <librerias.h>
/*struct Fechas{
    int d,m,a;
};
struct Padron{
    int id;
    char Sexo[5],Nombre[50],Apellido[50],DPI[13];
    struct Fechas Fecha;
};
Padron P;*/
string NombreArchivo="PADRON.txt";
string Interno="Padron.dat";
int main() {
    /*loop:
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
        case 2:{
            fstream Archivo(Interno,ios::in|ios::binary);
            if(Archivo.fail()){
                cout<<"Error al leer "<<endl;
            }else{
                Archivo.read((char *)&P,sizeof(Padron));
                while(!Archivo.eof()){
                    cout<<"ID:"<<P.id<<endl;
                    cout<<"Sexo:"<<P.Sexo<<endl;
                    cout<<"DPI:"<<P.DPI<<endl;
                    cout<<"Nombres: "<<P.Nombre<<endl;
                    cout<<"Apellidos: "<<P.Apellido<<endl;
                    cout<<"Fecha Nac:"<<P.Fecha.d<<"/"<<P.Fecha.m<<"/"<<P.Fecha.a<<endl;
                    cout<<"-----------------------------------"<<endl;
                    Archivo.read((char *)&P,sizeof(Padron));
                }
            }
            Archivo.close();

            break;
        }
        default:{
            cout<<"Opcion incorrecta elija de nuevo"<<endl;
            getch();
            goto loop;
            break;
        }
    }*/
    SetConsoleTitle("Prueba de ficheros ");
    //FICHEROS
    //Archivo<<"hola"<<endl;--> fprintf(Archivo,"Hola");
    //Archivo>>I;--->fscanf(Archivo,"%d",&i);
    int i=0;
    printf("Hola mundo\n");
    scanf("%d",&i);
    printf("el numero ingresado es %d",&i);
    //fstream||ifstream||ofstream-->> FILE *Archivo=fopen("NombreDelArchivo","Metodo de apertura");
    //Metodos de apertura de ficheros
    /*
     * r=lectura(read)
     * w=Escritura(write), si el archivo existe lo sobreescribe sino lo crea y escribe
     * a=agregar(append),si el archivo existe agrega,sino lo crea y agrega
     * r+=lectura y escritura,siempre y cuando el archivo exista de lo contrario
     * dara error,al escribir se borra el contenido y se coloca el nuevo
     * w+=lectura y escritura,si el archivo no exite lo crea y si existe lo sobreescribe
     * a+=agregar,Leer,Escribir,si el archivo no existe , lo crea y agrega al final, si el archivo
     * existe solamente agrega al final
     * rb=lectura binaria
     * wb=escritura binaria
     * ab=agregar en binario
     * r+b=lectura y escritura en binarios
     * w+b=lectura y escritura en binario
     * a+b=agregar,leer,escribir en binario*/
    //Archivo.close();--> fclose(Archivo);
    //Archivo.fail()--> Archivo==NULL
    //SetConsoleTitle("Titulo de la consola");
    //Archivo.write((char *)&P,sizeof(Padron));-->fwrite(&P,sizeof(Padron),1,Archivo);
    //Archivo.read((char *)&P,sizeof(Padron));--> fread(&P,sizeof(Padron),1,Archivo);
    //fseek,ftell,rewind...
    return 0;
}
