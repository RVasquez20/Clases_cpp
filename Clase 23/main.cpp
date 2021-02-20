#include <librerias.h>
struct Marcas{
    int id;
    char NombreMarca[50];
};
Marcas Marca;
struct Productos{
    int CodigoProducto,idMarca;
    char DescripcionDelProducto[100],Nombre[50];
    double PrecioCosto,PrecioVenta;
};
Productos Producto;
struct Clientes{
    char NIT[12],NombreCliente[50],DireccionDeCliente[50];
};
Clientes Cliente;
//Solamente Los Supervisores pueden acceder al menu de marcas, productos; para el momento de elegir la contraseña
//Tendran 2 opciones Escribirla o una contraseña Generada automaticamente por el sistema(rand,srand)
struct Supervisores{
    char usuario[50],Pass[50],NombreSupervisor[50],Direccion[50];
    long long int DPI;
};
Supervisores Supervisor;

string M="Marcas.dat";
string P="Productos.dat";
string S="Supervisores.dat";
string C="Clientes.dat";
void MenuPrincipal();
void MenuMarcas();
void Mayuscula(string &);
void IngresoDeMarcas();
void MostrarMarcas();
void ModificarMarcas();
void EliminarMarcas();
void Generador(int);

int main() {
MenuPrincipal();
    return 0;
}

void MenuPrincipal(){
    int opc=0;
    system("CLS");
    SetConsoleTitle("Menu Principal");
    cout<<"Menu Principal"<<endl;
    cout<<"1)Menu De Marcas"<<endl;
    cout<<"2)Salir"<<endl;
    cout<<"Ingrese la opcion que desea"<<endl;
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            MenuMarcas();
            getch();
            MenuPrincipal();
            break;
        }
        case 2:{
            exit(0);
        }
        default:{
            cout<<"Opcion incorrecta elija nuevamente"<<endl;
            getch();
            MenuPrincipal();
            break;
        }
    }
}
void MenuMarcas(){
    int opc=0;
    system("CLS");
    SetConsoleTitle("Menu de Marcas");
    cout<<"Menu Marcas"<<endl;
    cout<<"1)Ingreso De Marcas"<<endl;
    cout<<"2)Mostrar Listado De Marcas"<<endl;
    cout<<"3)Modificar Marcas"<<endl;
    cout<<"4)Eliminar Marcas"<<endl;
    cout<<"5)Regresar"<<endl;
    cout<<"Ingrese la opcion que desea"<<endl;
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            IngresoDeMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 2:{
            MostrarMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 3:{
            ModificarMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 4:{
            EliminarMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 5:{
            MenuPrincipal();
            break;
        }
        default:{
            cout<<"Opcion incorrecta elija nuevamente"<<endl;
            getch();
            MenuMarcas();
            break;
        }
    }
}

void IngresoDeMarcas(){
    fflush(stdin);
    SetConsoleTitle("Ingreso de marca");
    char opc;
    FILE *ArchivoMarcas=fopen(M.c_str(),"a+b");
    loop:
    rewind(ArchivoMarcas);
    string AUX;//donde se guarda el id digitado por el usuario
    int AuxIdMarca;
   system("CLS");
   fflush(stdin);
   cout<<"ID De la Marca"<<endl;
   getline(cin,AUX);
   AuxIdMarca=atoi(AUX.c_str());
   fread(&Marca, sizeof(Marcas),1,ArchivoMarcas);
   while(!feof(ArchivoMarcas)){
       if(AuxIdMarca==Marca.id){
           perror("EL ID QUE INGRESO YA EXISTE");
           getch();
           goto loop;
       }
       fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
   }
   fflush(stdin);
   Marca.id=AuxIdMarca;
   cout<<"NOMBRE DE LA MARCA"<<endl;
   cin.getline(Marca.NombreMarca,50,'\n');
   fflush(stdin);
   fwrite(&Marca,sizeof(Marcas),1,ArchivoMarcas);
   cout<<"MARCA GUARDADA EXITOSAMENTE"<<endl;
   cout<<"DESEA INGRESAR OTRO REGISTRO? (S | N)"<<endl;
   cin>>opc;
    fflush(stdin);
   if(toupper(opc)=='S'){
       goto loop;
   }
    fclose(ArchivoMarcas);

}

void MostrarMarcas(){
    SetConsoleTitle("Listado De Marcas");
    fflush(stdin);
    FILE *ArchivoMarcas=fopen(M.c_str(),"rb");
    if(ArchivoMarcas==NULL){
        perror("ERROR AL ABRIR EL ARCHIVO DE MARCAS");
        getch();
        MenuMarcas();
    }else{
        system("CLS");
        fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
        while(!feof(ArchivoMarcas)){
            cout<<"ID->"<<Marca.id<<endl;
            cout<<"NOMBRE->"<<Marca.NombreMarca<<endl;
            cout<<"============================"<<endl;
            fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
        }
    }
    fclose(ArchivoMarcas);
}
void ModificarMarcas(){
    SetConsoleTitle("Modificacion De Marcas");
    fflush(stdin);
    inicio:
    system("CLS");
    fflush(stdin);
    FILE *ArchivoMarcas=fopen(M.c_str(),"r+b");
    int AuxIdMarca=0,existe=0,aux2;
    MostrarMarcas();
    cout<<"ID De la Marca que desea modificar"<<endl;
    cin>>AuxIdMarca;
    fflush(stdin);
    fread(&Marca, sizeof(Marcas),1,ArchivoMarcas);
    while(!feof(ArchivoMarcas)){
        if(AuxIdMarca==Marca.id){
            cout<<"ID->"<<Marca.id<<endl;
            cout<<"NOMBRE->"<<Marca.NombreMarca<<endl;
            cout<<"============================"<<endl;
            getch();
            int pos=ftell(ArchivoMarcas)-sizeof(Marcas);
            fflush(stdin);
            loop:
            system("CLS");
            cout<<"NUEVO ID DE LA MARCA"<<endl;
            cin>>aux2;
            fflush(stdin);
            rewind(ArchivoMarcas);
            fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
            while(!feof(ArchivoMarcas)){
                if(aux2==Marca.id) {
                perror("EL ID QUE INGRESO YA EXISTE");
                getch();
                goto loop;
                }
                fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
            }
            Marca.id=aux2;
            fflush(stdin);
            fseek(ArchivoMarcas,pos,SEEK_SET);
            cout<<"NUEVO NOMBRE DE LA MARCA"<<endl;
            cin.getline(Marca.NombreMarca,50,'\n');
            fflush(stdin);
            fwrite(&Marca,sizeof(Marcas),1,ArchivoMarcas);
            cout<<"MARCA GUARDADA EXITOSAMENTE"<<endl;
            existe=1;
            break;
        }
        fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
    }
    if(existe==0){
        perror("NO EXISTE UNA MARCA CON ESE ID");
    }
    fclose(ArchivoMarcas);
}
void EliminarMarcas(){
    SetConsoleTitle("Eliminacion de Marca");
    fflush(stdin);
    FILE *ArchivoMarcas=fopen(M.c_str(),"rb");
    FILE *Temporal=fopen("Temporal.dat","wb");
    system("CLS");
    MostrarMarcas();
    int auxMar=0,existe=0;
    cout<<"Ingrese el id de la marca que desea eliminar"<<endl;
    cin>>auxMar;
    fflush(stdin);
    fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
    while(!feof(ArchivoMarcas)){
        if(auxMar==Marca.id) {
            cout<<"ID->"<<Marca.id<<endl;
            cout<<"NOMBRE->"<<Marca.NombreMarca<<endl;
            cout<<"============================"<<endl;
            existe=1;
            cout<<"Eliminado Correctamente"<<endl;
        }else{
            fwrite(&Marca,sizeof(Marcas),1,Temporal);
        }
        fread(&Marca,sizeof(Marcas),1,ArchivoMarcas);
    }
    if(existe==0){
        cout<<"Ese id no se encuentra en el Listado"<<endl;
        getch();
    }
    fclose(ArchivoMarcas);
    fclose(Temporal);
    remove(M.c_str());
    rename("Temporal.dat",M.c_str());
}