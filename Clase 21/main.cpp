#include "librerias.h"

char ESI = 201, H = 205, ESD = 187, V = 186, EII = 200, EID = 188;

string TMP = "Temporal.dat";
string AM = "Marcas.dat";
string PR = "Productos.dat";
string CL = "Clientes.dat";

struct Fechas{
    int Dia;
    int Mes;
    int Anio;
};

struct Marcas{
    int CodigoMarca;
    char NombreMarca[100];
};
Marcas Marca;

struct Productos{
    int CodigoProducto;
    int CodigoMarca;
    int Cantidad;
    char NombreProducto[100];
    double PrecioCosto;
    double PrecioVenta;
    struct Fechas Fecha;
};
Productos Producto;

struct Clientes{
    int NITCliente;
    int CodigoCliente;
    char NombreCliente[50];
    char ApellidoCliente[50];
    char DireccionCliente[100];
    char TelefonoCliente[10];
};
Clientes Cliente;

struct Facturas{
    int NoFactura,NITFactura;
    struct Fechas FechaFactura;
};
Facturas Factura;

struct FacturasDetalle{
    int idProductos,NoFactura;
    double PrecioVenta,Total;
};
FacturasDetalle FacturaDetalle;
time_t tSac = time(NULL);
struct tm* tmP = localtime(&tSac);

void gotoxy(int x, int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}

void MenuPrincipal();

void MenuMarcas();
void IngresoMarcas();
void LecturaMarcas();
void ModificacionMarcas();
void BusquedaMarcas();
void EliminacionMarcas();
int ContadorMarcas();

void MenuProductos();
void IngresoProductos();
void LecturaProductos();
void ModificacionProductos();
void BusquedaProductos();
void EliminacionProductos();
bool VerificarProducto(int);

void MenuClientes();
void IngresoClientes();
void LecturaClientes();
void ModificacionClientes();
void BusquedaClientes();
void EliminacionClientes();
int ContadorClientes();
bool VerificardorClientes(int);

void VentadeProductos();

void AdquicisiondeProductos();
void Facture();
void ProductosAComprar();
int ContadorF();
void MenuFacturas();
int main(){

    MenuPrincipal();
    return 0;
}

void MenuPrincipal(){
    int OpcMenu = 0;
    system("CLS");
    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "      MENU PRINCIPAL     " << endl;
    gotoxy(0,2); cout << V;
    cout << "1. MENU DE MARCAS" << endl;
    gotoxy(29,1); cout << V;
    gotoxy(0,3); cout << V;
    cout << "2. MENU DE PRODUCTOS" << endl;
    gotoxy(29,2); cout << V;
    gotoxy(0,4); cout << V;
    cout << "3. MENU DE CLIENTES" << endl;
    gotoxy(29,3); cout << V;
    gotoxy(0,5); cout << V;
    cout << "4. VENTA DE PRODUCTO" << endl;
    gotoxy(29,4); cout << V;
    gotoxy(0,6); cout << V;
    cout << "5. ADQUISICION DE PRODUCTO" << endl;
    gotoxy(29,5); cout << V;
    gotoxy(0,7); cout << V;
    cout << "6. SALIR" << endl;
    gotoxy(29,6); cout << V;
    gotoxy(0,8); cout << V;
    gotoxy(29,7); cout << V;
    gotoxy(0,8); cout << EII;
    gotoxy(1,8); cout << H;
    gotoxy(2,8); cout << H;
    gotoxy(3,8); cout << H;
    gotoxy(4,8); cout << H;
    gotoxy(5,8); cout << H;
    gotoxy(6,8); cout << H;
    gotoxy(7,8); cout << H;
    gotoxy(8,8); cout << H;
    gotoxy(9,8); cout << H;
    gotoxy(10,8); cout << H;
    gotoxy(11,8); cout << H;
    gotoxy(12,8); cout << H;
    gotoxy(13,8); cout << H;
    gotoxy(14,8); cout << H;
    gotoxy(15,8); cout << H;
    gotoxy(16,8); cout << H;
    gotoxy(17,8); cout << H;
    gotoxy(18,8); cout << H;
    gotoxy(19,8); cout << H;
    gotoxy(20,8); cout << H;
    gotoxy(21,8); cout << H;
    gotoxy(22,8); cout << H;
    gotoxy(23,8); cout << H;
    gotoxy(24,8); cout << H;
    gotoxy(25,8); cout << H;
    gotoxy(26,8); cout << H;
    gotoxy(27,8); cout << H;
    gotoxy(28,8); cout << H;
    gotoxy(29,8); cout << EID << endl;
    cout << "A QUE MENU DESEA IR? :";
    cin >> OpcMenu;
    fflush(stdin);

    switch(OpcMenu){
        case 1:{
            MenuMarcas();
            MenuPrincipal();
            break;
        }
        case 2:{
            MenuProductos();
            MenuPrincipal();
            break;
        }
        case 3:{
            MenuClientes();
            MenuPrincipal();
            break;
        }
        case 4:{
            VentadeProductos();
            MenuPrincipal();
            break;
        }
        case 5:{
            AdquicisiondeProductos();
            MenuPrincipal();
            break;
        }
        case 6:{
            exit(0);
            break;
        }
        case 7:{
            MenuFacturas();
            MenuPrincipal();
            break;
        }
        default:{
            cout << "OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
            getch();
            MenuPrincipal();
            break;
        }
    }
}

void MenuMarcas(){
    int OpcMarcas = 0;
    system("CLS");
    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << H;
    gotoxy(30,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "      MENU MARCAS     " << endl;
    gotoxy(0,2); cout << V;
    cout << "1. INGRESO DE MARCAS" << endl;
    gotoxy(30,1); cout << V;
    gotoxy(0,3); cout << V;
    cout << "2. LECTURA DE MARCAS" << endl;
    gotoxy(30,2); cout << V;
    gotoxy(0,4); cout << V;
    cout << "3. MODIFICACION DE MARCAS" << endl;
    gotoxy(30,3); cout << V;
    gotoxy(0,5); cout << V;
    cout << "4. BUSQUEDA DE MARCAS" << endl;
    gotoxy(30,4); cout << V;
    gotoxy(0,6); cout << V;
    cout << "5. ELIMINACION DE MARCAS" << endl;
    gotoxy(30,5); cout << V;
    gotoxy(0,7); cout << V;
    cout << "6. REGRESAR AL MENU PRINCIPAL" << endl;
    gotoxy(30,6); cout << V;
    gotoxy(0,8); cout << V;
    gotoxy(30,7); cout << V;
    gotoxy(0,8); cout << EII;
    gotoxy(1,8); cout << H;
    gotoxy(2,8); cout << H;
    gotoxy(3,8); cout << H;
    gotoxy(4,8); cout << H;
    gotoxy(5,8); cout << H;
    gotoxy(6,8); cout << H;
    gotoxy(7,8); cout << H;
    gotoxy(8,8); cout << H;
    gotoxy(9,8); cout << H;
    gotoxy(10,8); cout << H;
    gotoxy(11,8); cout << H;
    gotoxy(12,8); cout << H;
    gotoxy(13,8); cout << H;
    gotoxy(14,8); cout << H;
    gotoxy(15,8); cout << H;
    gotoxy(16,8); cout << H;
    gotoxy(17,8); cout << H;
    gotoxy(18,8); cout << H;
    gotoxy(19,8); cout << H;
    gotoxy(20,8); cout << H;
    gotoxy(21,8); cout << H;
    gotoxy(22,8); cout << H;
    gotoxy(23,8); cout << H;
    gotoxy(24,8); cout << H;
    gotoxy(25,8); cout << H;
    gotoxy(26,8); cout << H;
    gotoxy(27,8); cout << H;
    gotoxy(28,8); cout << H;
    gotoxy(29,8); cout << H;
    gotoxy(30,8); cout << EID << endl;
    cout << "A QUE MENU DESEA IR? :";
    cin >> OpcMarcas;
    fflush(stdin);

    switch(OpcMarcas){
        case 1:{
            IngresoMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 2:{
            LecturaMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 3:{
            ModificacionMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 4:{
            BusquedaMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 5:{
            EliminacionMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 6:{
            MenuPrincipal();
            break;
        }
        default:{
            cout << "OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
            getch();
            MenuMarcas();
            break;
        }
    }
}
void IngresoMarcas(){

    fstream ArchivoMarcas(AM,ios::app|ios::binary);
    if(ArchivoMarcas.fail()){
        cout << "ERROR AL CREAR EL ARCHIVO... " << endl;
    }else{

        Marca.CodigoMarca = ContadorMarcas();
        fflush(stdin);
        cout << "INGRESE EL NOMBRE DE LA MARCA: ";
        cin.getline(Marca.NombreMarca,100,'\n');
        fflush(stdin);
        ArchivoMarcas.write((char *)&Marca,sizeof (Marcas));
        cout << "MARCA INGRESADA EXITOSAMENTE..." << endl;
        fflush(stdin);
    }
    ArchivoMarcas.close();
}
void LecturaMarcas(){
    system("CLS");

    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << H;
    gotoxy(30,0); cout << H;
    gotoxy(31,0); cout << H;
    gotoxy(32,0); cout << H;
    gotoxy(33,0); cout << H;
    gotoxy(34,0); cout << H;
    gotoxy(35,0); cout << H;
    gotoxy(36,0); cout << H;
    gotoxy(37,0); cout << H;
    gotoxy(38,0); cout << H;
    gotoxy(39,0); cout << H;
    gotoxy(40,0); cout << H;
    gotoxy(41,0); cout << H;
    gotoxy(42,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "USTED ESTA VIENDO LAS MARCAS INGRESADAS" << endl;
    gotoxy(42,1); cout << V << endl;
    gotoxy(0,2); cout << EII;
    gotoxy(1,2); cout << H;
    gotoxy(2,2); cout << H;
    gotoxy(3,2); cout << H;
    gotoxy(4,2); cout << H;
    gotoxy(5,2); cout << H;
    gotoxy(6,2); cout << H;
    gotoxy(7,2); cout << H;
    gotoxy(8,2); cout << H;
    gotoxy(9,2); cout << H;
    gotoxy(10,2); cout << H;
    gotoxy(11,2); cout << H;
    gotoxy(12,2); cout << H;
    gotoxy(13,2); cout << H;
    gotoxy(14,2); cout << H;
    gotoxy(15,2); cout << H;
    gotoxy(16,2); cout << H;
    gotoxy(17,2); cout << H;
    gotoxy(18,2); cout << H;
    gotoxy(19,2); cout << H;
    gotoxy(20,2); cout << H;
    gotoxy(21,2); cout << H;
    gotoxy(22,2); cout << H;
    gotoxy(23,2); cout << H;
    gotoxy(24,2); cout << H;
    gotoxy(25,2); cout << H;
    gotoxy(26,2); cout << H;
    gotoxy(27,2); cout << H;
    gotoxy(28,2); cout << H;
    gotoxy(29,2); cout << H;
    gotoxy(30,2); cout << H;
    gotoxy(31,2); cout << H;
    gotoxy(32,2); cout << H;
    gotoxy(33,2); cout << H;
    gotoxy(34,2); cout << H;
    gotoxy(35,2); cout << H;
    gotoxy(36,2); cout << H;
    gotoxy(37,2); cout << H;
    gotoxy(38,2); cout << H;
    gotoxy(39,2); cout << H;
    gotoxy(40,2); cout << H;
    gotoxy(41,2); cout << H;
    gotoxy(42,2); cout << EID << endl << endl;

    fstream ArchivoMarcas(AM,ios::in|ios::binary);
    if(ArchivoMarcas.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
        while(!ArchivoMarcas.eof()){

            /*gotoxy(0,4); cout << ESI;
            gotoxy(1,4); cout << H;
            gotoxy(2,4); cout << H;
            gotoxy(3,4); cout << H;
            gotoxy(4,4); cout << H;
            gotoxy(5,4); cout << H;
            gotoxy(6,4); cout << H;
            gotoxy(7,4); cout << H;
            gotoxy(8,4); cout << H;
            gotoxy(9,4); cout << H;
            gotoxy(10,4); cout << H;
            gotoxy(11,4); cout << H;
            gotoxy(12,4); cout << H;
            gotoxy(13,4); cout << H;
            gotoxy(14,4); cout << H;
            gotoxy(15,4); cout << H;
            gotoxy(16,4); cout << H;
            gotoxy(17,4); cout << H;
            gotoxy(18,4); cout << H;
            gotoxy(19,4); cout << H;
            gotoxy(20,4); cout << H;
            gotoxy(21,4); cout << ESD << endl;
            gotoxy(0,5); cout << V;
            cout << "CODIGO : " << Marca.CodigoMarca << endl;
            gotoxy(21,5); cout << V;
            gotoxy(21,6); cout << V;
            gotoxy(0,6); cout << V;
            cout << "MARCA : " << Marca.NombreMarca << endl;
            gotoxy(0,7); cout << EII;
            gotoxy(1,7); cout << H;
            gotoxy(2,7); cout << H;
            gotoxy(3,7); cout << H;
            gotoxy(4,7); cout << H;
            gotoxy(5,7); cout << H;
            gotoxy(6,7); cout << H;
            gotoxy(7,7); cout << H;
            gotoxy(8,7); cout << H;
            gotoxy(9,7); cout << H;
            gotoxy(10,7); cout << H;
            gotoxy(11,7); cout << H;
            gotoxy(12,7); cout << H;
            gotoxy(13,7); cout << H;
            gotoxy(14,7); cout << H;
            gotoxy(15,7); cout << H;
            gotoxy(16,7); cout << H;
            gotoxy(17,7); cout << H;
            gotoxy(18,7); cout << H;
            gotoxy(19,7); cout << H;
            gotoxy(20,7); cout << H;
            gotoxy(21,7); cout << EID << endl;*/

            cout << "CODIGO: " << Marca.CodigoMarca << " " << "MARCA: " << Marca.NombreMarca << endl;

            ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
        }
    }
    ArchivoMarcas.close();
}
void ModificacionMarcas(){
    system("CLS");

    int Modificar = 0;
    char Confirmar;

    cout << "INGRESE EL CODIGO DE LA MARCA QUE DESEA MODIFICAR: ";
    cin >> Modificar;
    fflush(stdin);

    fstream ArchivoMarcas(AM,ios::in|ios::binary);
    fstream Temporal(TMP,ios::app|ios::binary);

    if(ArchivoMarcas.fail() || Temporal.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
        while(!ArchivoMarcas.eof()){
            if(Modificar == Marca.CodigoMarca){
                cout << "CODIGO: " << Marca.CodigoMarca << " " << "MARCA: " << Marca.NombreMarca << endl;
                cout << "=====================" << endl;

                cout << "ESTE ES EL CODIGO QUE DESEA MODIFICAR? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "INGRESE EL NUEVO NOMBRE DE LA MARCA: ";
                    cin.getline(Marca.NombreMarca,100,'\n');
                    fflush(stdin);
                    Temporal.write((char *)&Marca,sizeof (Marcas));
                }else{
                    Temporal.write((char *)&Marca,sizeof (Marcas));
                }
            }else{
                Temporal.write((char *)&Marca,sizeof (Marcas));
            }
            ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
        }
    }
    ArchivoMarcas.close();
    Temporal.close();
    remove(AM.c_str());
    rename(TMP.c_str(),AM.c_str());
}
void BusquedaMarcas(){
    system("CLS");

    int Busqueda = 0;

    cout << "INGRESE EL CODIGO A BUSCAR: ";
    cin >> Busqueda;
    fflush(stdin);

    fstream ArchivoMarcas(AM,ios::in|ios::binary);
    if(ArchivoMarcas.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
        while(!ArchivoMarcas.eof()){
            if(Busqueda == Marca.CodigoMarca){
                cout << "CODIGO: " << Marca.CodigoMarca << " " << "MARCA: " << Marca.NombreMarca << endl;
                cout << "=====================" << endl;
            }
            ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
        }
    }
    ArchivoMarcas.close();
}
void EliminacionMarcas(){
    system("CLS");

    int Eliminar = 0;
    char Confirmar;

    cout << "INGRESE EL CODIGO A ELIMINAR: ";
    cin >> Eliminar;
    fflush(stdin);

    fstream ArchivoMarcas(AM,ios::in|ios::binary);
    fstream Temporal(TMP,ios::app|ios::binary);

    if(ArchivoMarcas.fail() || Temporal.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoMarcas.read((char *)&Marca, sizeof (Marcas));
        while(!ArchivoMarcas.eof()){
            if(Eliminar == Marca.CodigoMarca){
                cout << "CODIGO: " << Marca.CodigoMarca << " " << "MARCA: " << Marca.NombreMarca << endl;
                cout << "=========================" << endl;

                cout << "DESEA ELIMINAR ESTE CODIGO? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "CODIGO ELIMINADO..." << endl;
                }
                else{
                    Temporal.write((char *)&Marca, sizeof (Marcas));
                }
            }else{
                Temporal.write((char *)&Marca, sizeof (Marcas));
            }
            ArchivoMarcas.read((char *)&Marca, sizeof (Marcas));
        }
    }
    ArchivoMarcas.close();
    Temporal.close();
    remove(AM.c_str());
    rename(TMP.c_str(),AM.c_str());
}
int ContadorMarcas(){
    int Contador = 0;

    fstream ArchivoMarcas(AM,ios::in|ios::binary);
    if(ArchivoMarcas.fail()){
        cout << "ERROR AL LEER EL ARCHIVO...";
    }else{
        ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
        while(!ArchivoMarcas.eof()){
            ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
            Contador = Marca.CodigoMarca;
        }
        Contador++;
    }
    ArchivoMarcas.close();
    return Contador;
}

void MenuProductos(){
    int OpcMenu = 0;
    system("CLS");
    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << H;
    gotoxy(30,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "      MENU PRODUCTOS     " << endl;
    gotoxy(0,2); cout << V;
    cout << "1. INGRESO PRODUCTOS" << endl;
    gotoxy(30,1); cout << V;
    gotoxy(0,3); cout << V;
    cout << "2. LECTURA DE PRODUCTOS" << endl;
    gotoxy(30,2); cout << V;
    gotoxy(0,4); cout << V;
    cout << "3. MODIFICAR PRODUCTO" << endl;
    gotoxy(30,3); cout << V;
    gotoxy(0,5); cout << V;
    cout << "4. BUSCAR PRODUCTO" << endl;
    gotoxy(30,4); cout << V;
    gotoxy(0,6); cout << V;
    cout << "5. ELIMINAR PRODUCTO" << endl;
    gotoxy(30,5); cout << V;
    gotoxy(0,7); cout << V;
    cout << "6. REGRESAR AL MENU PRINCIPAL" << endl;
    gotoxy(30,6); cout << V;
    gotoxy(0,8); cout << V;
    gotoxy(30,7); cout << V;
    gotoxy(0,8); cout << EII;
    gotoxy(1,8); cout << H;
    gotoxy(2,8); cout << H;
    gotoxy(3,8); cout << H;
    gotoxy(4,8); cout << H;
    gotoxy(5,8); cout << H;
    gotoxy(6,8); cout << H;
    gotoxy(7,8); cout << H;
    gotoxy(8,8); cout << H;
    gotoxy(9,8); cout << H;
    gotoxy(10,8); cout << H;
    gotoxy(11,8); cout << H;
    gotoxy(12,8); cout << H;
    gotoxy(13,8); cout << H;
    gotoxy(14,8); cout << H;
    gotoxy(15,8); cout << H;
    gotoxy(16,8); cout << H;
    gotoxy(17,8); cout << H;
    gotoxy(18,8); cout << H;
    gotoxy(19,8); cout << H;
    gotoxy(20,8); cout << H;
    gotoxy(21,8); cout << H;
    gotoxy(22,8); cout << H;
    gotoxy(23,8); cout << H;
    gotoxy(24,8); cout << H;
    gotoxy(25,8); cout << H;
    gotoxy(26,8); cout << H;
    gotoxy(27,8); cout << H;
    gotoxy(28,8); cout << H;
    gotoxy(29,8); cout << H;
    gotoxy(30,8); cout << EID << endl;
    cout << "A QUE MENU DESEA IR? :";
    cin >> OpcMenu;
    fflush(stdin);

    switch(OpcMenu){
        case 1:{
            IngresoProductos();
            getch();
            MenuProductos();
            break;
        }
        case 2:{
            LecturaProductos();
            getch();
            MenuProductos();
            break;
        }
        case 3:{
            ModificacionProductos();
            getch();
            MenuProductos();
            break;
        }
        case 4:{
            BusquedaProductos();
            getch();
            MenuProductos();
            break;
        }
        case 5:{
            EliminacionProductos();
            getch();
            MenuProductos();
            break;
        }
        case 6:{
            MenuPrincipal();
            break;
        }
        default:{
            cout << "OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
            getch();
            MenuProductos();
            break;
        }
    }
}
void IngresoProductos(){

    fstream ArchivoProducto(PR,ios::app|ios::binary);
    loopCodigoProducto:
    int Auxiliar = 0;
    fflush(stdin);
    cout << "INGRESE EL CODIGO DEL PRODUCTO: ";
    cin >> Auxiliar;
    fflush(stdin);
    if(!VerificarProducto(Auxiliar)){
        cout << "CODIGO EXISTENTE..." << endl;
        goto loopCodigoProducto;
    }else{
        Producto.CodigoProducto = Auxiliar;
    }
    fflush(stdin);
    cout << "INGRESE EL NOMBRE DEL PRODUCTO: ";
    cin.getline(Producto.NombreProducto,100,'\n');
    fflush(stdin);
    LecturaMarcas();
    cout << "INGRESE EL CODIGO DE LA MARCA: ";
    cin >> Producto.CodigoMarca;
    fflush(stdin);
    cout << "INGRESE LA CANTIDAD DE EXISTENCIA DEL PRODUCTO: ";
    cin >> Producto.Cantidad;
    fflush(stdin);
    cout << "INGRESE EL PRECIO COSTO DEL PRODUCTO: ";
    cin >> Producto.PrecioCosto;
    fflush(stdin);
    cout << "INGRESE EL PRECIO VENTA DEL PRODUCTO: ";
    cin >> Producto.PrecioVenta;
    fflush(stdin);
    loopFecha:
    cout << "INGRESE EL DIA DE INGRESO DEL PRODUCTO: ";
    cin >> Producto.Fecha.Dia;
    fflush(stdin);
    cout << "INGRESE EL MES DE INGRESO DEL PRODUCTO: ";
    cin >> Producto.Fecha.Mes;
    fflush(stdin);
    cout << "INGRESE EL ANIO DE INGRESO DEL PRODUCTO: ";
    cin >> Producto.Fecha.Anio;
    fflush(stdin);
    if(!((Producto.Fecha.Dia > 0 && Producto.Fecha.Dia < 32) && (Producto.Fecha.Mes > 0 && Producto.Fecha.Mes < 13) && (Producto.Fecha.Anio > 1985 && Producto.Fecha.Anio < 2030))){
        goto loopFecha;
    }
    ArchivoProducto.write((char *)&Producto,sizeof (Productos));
    ArchivoProducto.close();
}
void LecturaProductos(){
    system("CLS");

    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << H;
    gotoxy(30,0); cout << H;
    gotoxy(31,0); cout << H;
    gotoxy(32,0); cout << H;
    gotoxy(33,0); cout << H;
    gotoxy(34,0); cout << H;
    gotoxy(35,0); cout << H;
    gotoxy(36,0); cout << H;
    gotoxy(37,0); cout << H;
    gotoxy(38,0); cout << H;
    gotoxy(39,0); cout << H;
    gotoxy(40,0); cout << H;
    gotoxy(41,0); cout << H;
    gotoxy(42,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "VIENDO LOS PRODUCTOS INGRESADOS" << endl;
    gotoxy(42,1); cout << V << endl;
    gotoxy(0,2); cout << EII;
    gotoxy(1,2); cout << H;
    gotoxy(2,2); cout << H;
    gotoxy(3,2); cout << H;
    gotoxy(4,2); cout << H;
    gotoxy(5,2); cout << H;
    gotoxy(6,2); cout << H;
    gotoxy(7,2); cout << H;
    gotoxy(8,2); cout << H;
    gotoxy(9,2); cout << H;
    gotoxy(10,2); cout << H;
    gotoxy(11,2); cout << H;
    gotoxy(12,2); cout << H;
    gotoxy(13,2); cout << H;
    gotoxy(14,2); cout << H;
    gotoxy(15,2); cout << H;
    gotoxy(16,2); cout << H;
    gotoxy(17,2); cout << H;
    gotoxy(18,2); cout << H;
    gotoxy(19,2); cout << H;
    gotoxy(20,2); cout << H;
    gotoxy(21,2); cout << H;
    gotoxy(22,2); cout << H;
    gotoxy(23,2); cout << H;
    gotoxy(24,2); cout << H;
    gotoxy(25,2); cout << H;
    gotoxy(26,2); cout << H;
    gotoxy(27,2); cout << H;
    gotoxy(28,2); cout << H;
    gotoxy(29,2); cout << H;
    gotoxy(30,2); cout << H;
    gotoxy(31,2); cout << H;
    gotoxy(32,2); cout << H;
    gotoxy(33,2); cout << H;
    gotoxy(34,2); cout << H;
    gotoxy(35,2); cout << H;
    gotoxy(36,2); cout << H;
    gotoxy(37,2); cout << H;
    gotoxy(38,2); cout << H;
    gotoxy(39,2); cout << H;
    gotoxy(40,2); cout << H;
    gotoxy(41,2); cout << H;
    gotoxy(42,2); cout << EID << endl << endl;

    fstream ArchivoProductos(PR,ios::in|ios::binary);
    if(ArchivoProductos.fail()){
        cout << "ERROR AL LEER EL ARCHIVO p..." << endl;
    }else{
        ArchivoProductos.read((char *)&Producto,sizeof (Productos));
        while(!ArchivoProductos.eof()){
            cout << "CODIGO DEL PRODUCTO: " << Producto.CodigoProducto << endl;
            cout << "NOMBRE DEL PRODUCTO: " << Producto.NombreProducto << endl;

            fstream ArchivoMarcas(AM,ios::in|ios::binary);
            if(ArchivoMarcas.fail()){
                cout << "ERROR AL LEER EL ARCHIVO..." << endl;
            }else{
                ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                while(!ArchivoMarcas.eof()){
                    if(Producto.CodigoMarca == Marca.CodigoMarca){
                        cout << "MARCA: " << Marca.NombreMarca << endl;
                    }
                    ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                }
            }
            ArchivoMarcas.close();

            cout << "CANTIDAD: " << Producto.Cantidad << endl;
            cout << "PRECIO COSTO: " << Producto.PrecioCosto << endl;
            cout << "PRECIO VENTA: " << Producto.PrecioVenta << endl;
            cout << "FECHA DE INGRESO: " << Producto.Fecha.Dia << "/" << Producto.Fecha.Mes << "/" << Producto.Fecha.Anio << endl;
            cout << "================================" << endl;
            ArchivoProductos.read((char *)&Producto,sizeof (Productos));
        }
    }
    ArchivoProductos.close();
}
void ModificacionProductos(){
    system("CLS");

    int Modificar = 0;
    char Confirmar;

    cout << "INGRESE EL CODIGO DEL PRODUCTO QUE DESEA MODIFICAR: ";
    cin >> Modificar;
    fflush(stdin);

    fstream ArchivoProductos(PR,ios::in|ios::binary);
    fstream Temporal(TMP,ios::app|ios::binary);

    if(ArchivoProductos.fail() || Temporal.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoProductos.read((char *)&Producto,sizeof (Productos));
        while(!ArchivoProductos.eof()){
            if(Modificar == Producto.CodigoProducto){
                cout << "CODIGO DEL PRODUCTO: " << Producto.CodigoProducto << endl;
                cout << "NOMBRE DEL PRODUCTO: " << Producto.NombreProducto << endl;

                fstream ArchivoMarcas(AM,ios::in|ios::binary);
                if(ArchivoMarcas.fail()){
                    cout << "ERROR AL LEER EL ARCHIVO..." << endl;
                }else{
                    ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                    while(!ArchivoMarcas.eof()){
                        if(Producto.CodigoMarca == Marca.CodigoMarca){
                            cout << "MARCA: " << Marca.NombreMarca << endl;
                        }
                        ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                    }
                }
                ArchivoMarcas.close();

                cout << "CANTIDAD: " << Producto.Cantidad << endl;
                cout << "PRECIO COSTO: " << Producto.PrecioCosto << endl;
                cout << "PRECIO VENTA: " << Producto.PrecioVenta << endl;
                cout << "FECHA DE INGRESO: " << Producto.Fecha.Dia << "/" << Producto.Fecha.Mes << "/" << Producto.Fecha.Anio << endl;
                cout << "================================" << endl;

                cout << "DESEA MODIFICAR ESTE CODIGO? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "INGRESE EL NUEVO NOMBRE DEL PRODUCTO: ";
                    cin.getline(Producto.NombreProducto,100,'\n');
                    fflush(stdin);
                    LecturaMarcas();
                    cout << "INGRESE EL CODIGO DE LA MARCA: ";
                    cin >> Producto.CodigoMarca;
                    fflush(stdin);
                    cout << "INGRESE LA NUEVA CANTIDAD DE EXISTENCIA DEL PRODUCTO: ";
                    cin >> Producto.Cantidad;
                    fflush(stdin);
                    cout << "INGRESE EL NUEVO PRECIO COSTO DEL PRODUCTO: ";
                    cin >> Producto.PrecioCosto;
                    fflush(stdin);
                    cout << "INGRESE EL NUEVO PRECIO VENTA DEL PRODUCTO: ";
                    cin >> Producto.PrecioVenta;
                    fflush(stdin);
                    loopFecha:
                    cout << "INGRESE EL NUEVO DIA DE INGRESO DEL PRODUCTO: ";
                    cin >> Producto.Fecha.Dia;
                    fflush(stdin);
                    cout << "INGRESE EL NUEVO MES DE INGRESO DEL PRODUCTO: ";
                    cin >> Producto.Fecha.Mes;
                    fflush(stdin);
                    cout << "INGRESE EL NUEVO ANIO DE INGRESO DEL PRODUCTO: ";
                    cin >> Producto.Fecha.Anio;
                    fflush(stdin);
                    if(!((Producto.Fecha.Dia > 0 && Producto.Fecha.Dia < 32) && (Producto.Fecha.Mes > 0 && Producto.Fecha.Mes < 13) && (Producto.Fecha.Anio > 1985 && Producto.Fecha.Anio < 2030))){
                        goto loopFecha;
                    }
                    Temporal.write((char *)&Producto,sizeof (Productos));
                }else{
                    Temporal.write((char *)&Producto,sizeof (Productos));
                }
            }else{
                Temporal.write((char *)&Producto,sizeof (Productos));
            }
            ArchivoProductos.read((char *)&Producto,sizeof (Productos));
        }
    }
    ArchivoProductos.close();
    Temporal.close();
    remove(PR.c_str());
    rename(TMP.c_str(),PR.c_str());
}
void BusquedaProductos(){
    system("CLS");

    int Busqueda = 0;

    cout << "INGRESE EL CODIGO A BUSCAR: ";
    cin >> Busqueda;
    fflush(stdin);

    fstream ArchivoProductos(PR,ios::in|ios::binary);
    if(ArchivoProductos.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoProductos.read((char *)&Producto,sizeof (Productos));
        while(!ArchivoProductos.eof()){
            if(Busqueda == Producto.CodigoProducto){
                cout << "CODIGO DEL PRODUCTO: " << Producto.CodigoProducto << endl;
                cout << "NOMBRE DEL PRODUCTO: " << Producto.NombreProducto << endl;

                fstream ArchivoMarcas(AM,ios::in|ios::binary);
                if(ArchivoMarcas.fail()){
                    cout << "ERROR AL LEER EL ARCHIVO..." << endl;
                }else{
                    ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                    while(!ArchivoMarcas.eof()){
                        if(Producto.CodigoMarca == Marca.CodigoMarca){
                            cout << "MARCA: " << Marca.NombreMarca << endl;
                        }
                        ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                    }
                }
                ArchivoMarcas.close();

                cout << "CANTIDAD: " << Producto.Cantidad << endl;
                cout << "PRECIO COSTO: " << Producto.PrecioCosto << endl;
                cout << "PRECIO VENTA: " << Producto.PrecioVenta << endl;
                cout << "FECHA DE INGRESO: " << Producto.Fecha.Dia << "/" << Producto.Fecha.Mes << "/" << Producto.Fecha.Anio << endl;
                cout << "================================" << endl;
            }
            ArchivoProductos.read((char *)&Producto,sizeof (Productos));
        }
    }
    ArchivoProductos.close();
}
void EliminacionProductos(){
    system("CLS");

    int Eliminar = 0;
    char Confirmar;

    cout << "INGRESE EL CODIGO A ELIMINAR: ";
    cin >> Eliminar;
    fflush(stdin);

    fstream ArchivoProductos(PR,ios::in|ios::binary);
    fstream Temporal(TMP,ios::app|ios::binary);

    if(ArchivoProductos.fail() || Temporal.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoProductos.read((char *)&Producto, sizeof (Productos));
        while(!ArchivoProductos.eof()){
            if(Eliminar == Producto.CodigoProducto){
                cout << "CODIGO DEL PRODUCTO: " << Producto.CodigoProducto << endl;
                cout << "NOMBRE DEL PRODUCTO: " << Producto.NombreProducto << endl;

                fstream ArchivoMarcas(AM,ios::in|ios::binary);
                if(ArchivoMarcas.fail()){
                    cout << "ERROR AL LEER EL ARCHIVO..." << endl;
                }else{
                    ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                    while(!ArchivoMarcas.eof()){
                        if(Producto.CodigoMarca == Marca.CodigoMarca){
                            cout << "MARCA: " << Marca.NombreMarca << endl;
                        }
                        ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                    }
                }
                ArchivoMarcas.close();

                cout << "CANTIDAD: " << Producto.Cantidad << endl;
                cout << "PRECIO COSTO: " << Producto.PrecioCosto << endl;
                cout << "PRECIO VENTA: " << Producto.PrecioVenta << endl;
                cout << "FECHA DE INGRESO: " << Producto.Fecha.Dia << "/" << Producto.Fecha.Mes << "/" << Producto.Fecha.Anio << endl;
                cout << "================================" << endl;

                cout << "DESEA ELIMINAR ESTE PRODUCTO? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "PRODUCTO ELIMINADO..." << endl;
                }
                else{
                    Temporal.write((char *)&Producto, sizeof (Productos));
                }
            }else{
                Temporal.write((char *)&Producto, sizeof (Productos));
            }
            ArchivoProductos.read((char *)&Producto, sizeof (Productos));
        }
    }
    ArchivoProductos.close();
    Temporal.close();
    remove(PR.c_str());
    rename(TMP.c_str(),PR.c_str());
}
bool VerificarProducto(int CodigoP){

    fstream ArchivoProductos(PR,ios::in|ios::binary);

    int Encontrado = 0;
    ArchivoProductos.read((char *)&Producto,sizeof (Productos));
    while(!ArchivoProductos.eof()){
        if(Producto.CodigoProducto == CodigoP){
            Encontrado = 1;
        }
        ArchivoProductos.read((char *)&Producto,sizeof (Productos));
    }
    ArchivoProductos.close();
    if(Encontrado == 0){
        return true;
    }else{
        return false;
    }
}

void MenuClientes(){
    int OpcMenu = 0;
    system("CLS");
    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << H;
    gotoxy(30,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "      MENU CLIENTES     " << endl;
    gotoxy(0,2); cout << V;
    cout << "1. INGRESO CLIENTES" << endl;
    gotoxy(30,1); cout << V;
    gotoxy(0,3); cout << V;
    cout << "2. LECTURA DE CLIENTES" << endl;
    gotoxy(30,2); cout << V;
    gotoxy(0,4); cout << V;
    cout << "3. MODIFICAR CLIENTE" << endl;
    gotoxy(30,3); cout << V;
    gotoxy(0,5); cout << V;
    cout << "4. BUSCAR CLIENTE" << endl;
    gotoxy(30,4); cout << V;
    gotoxy(0,6); cout << V;
    cout << "5. ELIMINAR CLIENTE" << endl;
    gotoxy(30,5); cout << V;
    gotoxy(0,7); cout << V;
    cout << "6. REGRESAR AL MENU PRINCIPAL" << endl;
    gotoxy(30,6); cout << V;
    gotoxy(0,8); cout << V;
    gotoxy(30,7); cout << V;
    gotoxy(0,8); cout << EII;
    gotoxy(1,8); cout << H;
    gotoxy(2,8); cout << H;
    gotoxy(3,8); cout << H;
    gotoxy(4,8); cout << H;
    gotoxy(5,8); cout << H;
    gotoxy(6,8); cout << H;
    gotoxy(7,8); cout << H;
    gotoxy(8,8); cout << H;
    gotoxy(9,8); cout << H;
    gotoxy(10,8); cout << H;
    gotoxy(11,8); cout << H;
    gotoxy(12,8); cout << H;
    gotoxy(13,8); cout << H;
    gotoxy(14,8); cout << H;
    gotoxy(15,8); cout << H;
    gotoxy(16,8); cout << H;
    gotoxy(17,8); cout << H;
    gotoxy(18,8); cout << H;
    gotoxy(19,8); cout << H;
    gotoxy(20,8); cout << H;
    gotoxy(21,8); cout << H;
    gotoxy(22,8); cout << H;
    gotoxy(23,8); cout << H;
    gotoxy(24,8); cout << H;
    gotoxy(25,8); cout << H;
    gotoxy(26,8); cout << H;
    gotoxy(27,8); cout << H;
    gotoxy(28,8); cout << H;
    gotoxy(29,8); cout << H;
    gotoxy(30,8); cout << EID << endl;
    cout << "A QUE MENU DESEA IR? :";
    cin >> OpcMenu;
    fflush(stdin);

    switch(OpcMenu){
        case 1:{
            IngresoClientes();
            getch();
            MenuClientes();
            break;
        }
        case 2:{
            LecturaClientes();
            getch();
            MenuClientes();
            break;
        }
        case 3:{
            ModificacionClientes();
            getch();
            MenuClientes();
            break;
        }
        case 4:{
            BusquedaClientes();
            getch();
            MenuClientes();
            break;
        }
        case 5:{
            EliminacionClientes();
            getch();
            MenuClientes();
            break;
        }
        case 6:{
            MenuPrincipal();
            break;
        }
        default:{
            cout << "OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
            getch();
            MenuClientes();
            break;
        }
    }
}
void IngresoClientes(){

    fstream ArchivoClientes(CL,ios::app|ios::binary);

    loopCodigoCliente:
    int AuxiliarClientes = 0;
    fflush(stdin);
    cout << "INGRESE EL NIT DEL CLIENTE: ";
    cin >> AuxiliarClientes;
    fflush(stdin);
    if(!VerificardorClientes(AuxiliarClientes)){
        cout << "EL NIT YA EXISTE..." << endl;
        goto loopCodigoCliente;
    }else{
        Cliente.NITCliente = AuxiliarClientes;
    }
    fflush(stdin);

    Cliente.CodigoCliente = ContadorClientes();
    fflush(stdin);

    cout << "INGRESE EL NOMBRE DEL CLIENTE: ";
    cin.getline(Cliente.NombreCliente,50,'\n');
    fflush(stdin);
    cout << "INGRESE EL APELLIDO DEL CLIENTE: ";
    cin.getline(Cliente.ApellidoCliente,50,'\n');
    fflush(stdin);
    cout << "INGRESE LA DIRECCION DEL CLIENTE: ";
    cin.getline(Cliente.DireccionCliente,100,'\n');
    fflush(stdin);
    cout << "INGRESE EL TELEFONO DEL CLIENTE: ";
    cin.getline(Cliente.TelefonoCliente,10,'\n');
    fflush(stdin);

    ArchivoClientes.write((char *)&Cliente,sizeof (Clientes));
    ArchivoClientes.close();
    // Permite el ingreso de NIT duplicado
}
void LecturaClientes(){

    fstream ArchivoClientes(CL,ios::in|ios::binary);
    if(ArchivoClientes.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        while(!ArchivoClientes.eof()){
            cout << "NIT: " << Cliente.NITCliente << endl;
            cout << "CODIGO: " << Cliente.CodigoCliente << endl;
            cout << "NOMBRE: " << Cliente.NombreCliente << endl;
            cout << "APELLIDO: " << Cliente.ApellidoCliente << endl;
            cout << "DIRECCION: " << Cliente.DireccionCliente << endl;
            cout << "TELEFONO: " << Cliente.TelefonoCliente << endl;
            cout << "============================" << endl;
            ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        }
    }
    ArchivoClientes.close();
}
void ModificacionClientes(){
    system("CLS");

    int Modificar = 0;
    char Confirmar;

    cout << "INGRESE EL NIT DEL CLIENTE QUE DESEA MODIFICAR: ";
    cin >> Modificar;
    fflush(stdin);

    fstream ArchivoClientes(CL,ios::in|ios::binary);
    fstream Temporal(TMP,ios::app|ios::binary);

    if(ArchivoClientes.fail() || Temporal.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        while(!ArchivoClientes.eof()){
            if(Modificar == Cliente.NITCliente){
                cout << "NIT: " << Cliente.NITCliente << endl;
                cout << "CODIGO: " << Cliente.CodigoCliente << endl;
                cout << "NOMBRE: " << Cliente.NombreCliente << endl;
                cout << "APELLIDO: " << Cliente.ApellidoCliente << endl;
                cout << "DIRECCION: " << Cliente.DireccionCliente << endl;
                cout << "TELEFONO: " << Cliente.TelefonoCliente << endl;
                cout << "============================" << endl;

                cout << "DESEA MODIFICAR ESTE CLIENTE? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "INGRESE EL NUEVO NOMBRE DEL CLIENTE: ";
                    cin.getline(Cliente.NombreCliente,50,'\n');
                    fflush(stdin);
                    cout << "INGRESE EL NUEVO APELLIDO DEL CLIENTE: ";
                    cin.getline(Cliente.ApellidoCliente,50,'\n');
                    fflush(stdin);
                    cout << "INGRESE LA NUEVA DIRECCION DEL CLIENTE: ";
                    cin.getline(Cliente.DireccionCliente,100,'\n');
                    fflush(stdin);
                    cout << "INGRESE EL NUEVO TELEFONO DEL CLIENTE: ";
                    cin.getline(Cliente.TelefonoCliente,10,'\n');
                    fflush(stdin);
                    Temporal.write((char *)&Cliente,sizeof (Clientes));
                }else{
                    Temporal.write((char *)&Cliente,sizeof (Clientes));
                }
            }else{
                Temporal.write((char *)&Cliente,sizeof (Clientes));
            }
            ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        }
    }
    ArchivoClientes.close();
    Temporal.close();
    remove(CL.c_str());
    rename(TMP.c_str(),CL.c_str());
}
void BusquedaClientes(){
    system("CLS");

    int Busqueda = 0;

    cout << "INGRESE EL NIT DEL CLIENTE A BUSCAR: ";
    cin >> Busqueda;
    fflush(stdin);

    fstream ArchivoClientes(CL,ios::in|ios::binary);
    if(ArchivoClientes.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        while(!ArchivoClientes.eof()){
            if(Busqueda == Cliente.NITCliente){
                cout << "NIT: " << Cliente.NITCliente << endl;
                cout << "CODIGO: " << Cliente.CodigoCliente << endl;
                cout << "NOMBRE: " << Cliente.NombreCliente << endl;
                cout << "APELLIDO: " << Cliente.ApellidoCliente << endl;
                cout << "DIRECCION: " << Cliente.DireccionCliente << endl;
                cout << "TELEFONO: " << Cliente.TelefonoCliente << endl;
                cout << "============================" << endl;
            }
            ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        }
    }
    ArchivoClientes.close();
}
void EliminacionClientes(){
    system("CLS");

    int Eliminar = 0;
    char Confirmar;

    cout << "INGRESE EL NIT DEL CLIENTE A ELIMINAR: ";
    cin >> Eliminar;
    fflush(stdin);

    fstream ArchivoClientes(CL,ios::in|ios::binary);
    fstream Temporal(TMP,ios::app|ios::binary);

    if(ArchivoClientes.fail() || Temporal.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoClientes.read((char *)&Cliente, sizeof (Clientes));
        while(!ArchivoClientes.eof()){
            if(Eliminar == Cliente.NITCliente){
                cout << "NIT: " << Cliente.NITCliente << endl;
                cout << "CODIGO: " << Cliente.CodigoCliente << endl;
                cout << "NOMBRE: " << Cliente.NombreCliente << endl;
                cout << "APELLIDO: " << Cliente.ApellidoCliente << endl;
                cout << "DIRECCION: " << Cliente.DireccionCliente << endl;
                cout << "TELEFONO: " << Cliente.TelefonoCliente << endl;
                cout << "============================" << endl;

                cout << "DESEA ELIMINAR AL CLIENTE? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "CLIENTE ELIMINADO..." << endl;
                }
                else{
                    Temporal.write((char *)&Cliente, sizeof (Clientes));
                }
            }else{
                Temporal.write((char *)&Cliente, sizeof (Clientes));
            }
            ArchivoClientes.read((char *)&Cliente, sizeof (Clientes));
        }
    }
    ArchivoClientes.close();
    Temporal.close();
    remove(CL.c_str());
    rename(TMP.c_str(),CL.c_str());
}
int ContadorClientes(){
    int ContadorClientes = 0;

    fstream ArchivoClientes(CL,ios::in|ios::binary);
    if(ArchivoClientes.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        ArchivoClientes.read((char *)&Producto,sizeof (Productos));
        while(!ArchivoClientes.eof()){
            ArchivoClientes.read((char *)&Producto,sizeof (Productos));
            ContadorClientes = Cliente.CodigoCliente;
        }
        ContadorClientes++;
    }
    ArchivoClientes.close();
    return ContadorClientes;

}
bool VerificardorClientes(int CodigoVC){

    fstream ArchivoClientes(CL,ios::in|ios::binary);
    int Encontrado = 0;
    ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
    while(!ArchivoClientes.eof()){
        if(Cliente.NITCliente == CodigoVC){
            Encontrado = 1;
        }
        ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
    }
    ArchivoClientes.close();
    if(Encontrado == 0){
        return true;
    }else{
        return false;
    }
}

void VentadeProductos(){
    int OpcMenu = 0;
    system("CLS");
    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "      MENU PRINCIPAL     " << endl;
    gotoxy(0,2); cout << V;
    cout << "1. MENU DE MARCAS" << endl;
    gotoxy(29,1); cout << V;
    gotoxy(0,3); cout << V;
    cout << "2. MENU DE PRODUCTOS" << endl;
    gotoxy(29,2); cout << V;
    gotoxy(0,4); cout << V;
    cout << "3. MENU DE CLIENTES" << endl;
    gotoxy(29,3); cout << V;
    gotoxy(0,5); cout << V;
    cout << "4. VENTA DE PRODUCTO" << endl;
    gotoxy(29,4); cout << V;
    gotoxy(0,6); cout << V;
    cout << "5. ADQUISICION DE PRODUCTO" << endl;
    gotoxy(29,5); cout << V;
    gotoxy(0,7); cout << V;
    cout << "6. SALIR" << endl;
    gotoxy(29,6); cout << V;
    gotoxy(0,8); cout << V;
    gotoxy(29,7); cout << V;
    gotoxy(0,8); cout << EII;
    gotoxy(1,8); cout << H;
    gotoxy(2,8); cout << H;
    gotoxy(3,8); cout << H;
    gotoxy(4,8); cout << H;
    gotoxy(5,8); cout << H;
    gotoxy(6,8); cout << H;
    gotoxy(7,8); cout << H;
    gotoxy(8,8); cout << H;
    gotoxy(9,8); cout << H;
    gotoxy(10,8); cout << H;
    gotoxy(11,8); cout << H;
    gotoxy(12,8); cout << H;
    gotoxy(13,8); cout << H;
    gotoxy(14,8); cout << H;
    gotoxy(15,8); cout << H;
    gotoxy(16,8); cout << H;
    gotoxy(17,8); cout << H;
    gotoxy(18,8); cout << H;
    gotoxy(19,8); cout << H;
    gotoxy(20,8); cout << H;
    gotoxy(21,8); cout << H;
    gotoxy(22,8); cout << H;
    gotoxy(23,8); cout << H;
    gotoxy(24,8); cout << H;
    gotoxy(25,8); cout << H;
    gotoxy(26,8); cout << H;
    gotoxy(27,8); cout << H;
    gotoxy(28,8); cout << H;
    gotoxy(29,8); cout << EID << endl;
    cout << "A QUE MENU DESEA IR? :";
    cin >> OpcMenu;
    fflush(stdin);

    switch(OpcMenu){
        case 1:{
            break;
        }
        case 2:{
            break;
        }
        case 3:{
            break;
        }
        case 4:{
            break;
        }
        case 5:{
            break;
        }
        case 6:{
            exit(0);
            break;
        }
        default:{
            cout << "OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
            getch();
            MenuPrincipal();
            break;
        }
    }
}

void AdquicisiondeProductos(){
    int OpcMenu = 0;
    system("CLS");
    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "      MENU PRINCIPAL     " << endl;
    gotoxy(0,2); cout << V;
    cout << "1. MENU DE MARCAS" << endl;
    gotoxy(29,1); cout << V;
    gotoxy(0,3); cout << V;
    cout << "2. MENU DE PRODUCTOS" << endl;
    gotoxy(29,2); cout << V;
    gotoxy(0,4); cout << V;
    cout << "3. MENU DE CLIENTES" << endl;
    gotoxy(29,3); cout << V;
    gotoxy(0,5); cout << V;
    cout << "4. VENTA DE PRODUCTO" << endl;
    gotoxy(29,4); cout << V;
    gotoxy(0,6); cout << V;
    cout << "5. ADQUISICION DE PRODUCTO" << endl;
    gotoxy(29,5); cout << V;
    gotoxy(0,7); cout << V;
    cout << "6. SALIR" << endl;
    gotoxy(29,6); cout << V;
    gotoxy(0,8); cout << V;
    gotoxy(29,7); cout << V;
    gotoxy(0,8); cout << EII;
    gotoxy(1,8); cout << H;
    gotoxy(2,8); cout << H;
    gotoxy(3,8); cout << H;
    gotoxy(4,8); cout << H;
    gotoxy(5,8); cout << H;
    gotoxy(6,8); cout << H;
    gotoxy(7,8); cout << H;
    gotoxy(8,8); cout << H;
    gotoxy(9,8); cout << H;
    gotoxy(10,8); cout << H;
    gotoxy(11,8); cout << H;
    gotoxy(12,8); cout << H;
    gotoxy(13,8); cout << H;
    gotoxy(14,8); cout << H;
    gotoxy(15,8); cout << H;
    gotoxy(16,8); cout << H;
    gotoxy(17,8); cout << H;
    gotoxy(18,8); cout << H;
    gotoxy(19,8); cout << H;
    gotoxy(20,8); cout << H;
    gotoxy(21,8); cout << H;
    gotoxy(22,8); cout << H;
    gotoxy(23,8); cout << H;
    gotoxy(24,8); cout << H;
    gotoxy(25,8); cout << H;
    gotoxy(26,8); cout << H;
    gotoxy(27,8); cout << H;
    gotoxy(28,8); cout << H;
    gotoxy(29,8); cout << EID << endl;
    cout << "A QUE MENU DESEA IR? :";
    cin >> OpcMenu;
    fflush(stdin);

    switch(OpcMenu){
        case 1:{
            break;
        }
        case 2:{
            break;
        }
        case 3:{
            break;
        }
        case 4:{
            break;
        }
        case 5:{
            break;
        }
        case 6:{
            exit(0);
            break;
        }
        default:{
            cout << "OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
            getch();
            MenuPrincipal();
            break;
        }
    }
}
void MenuFacturas(){
    int OpcMenu = 0;
    system("CLS");
    gotoxy(0,0); cout << ESI;
    gotoxy(1,0); cout << H;
    gotoxy(2,0); cout << H;
    gotoxy(3,0); cout << H;
    gotoxy(4,0); cout << H;
    gotoxy(5,0); cout << H;
    gotoxy(6,0); cout << H;
    gotoxy(7,0); cout << H;
    gotoxy(8,0); cout << H;
    gotoxy(9,0); cout << H;
    gotoxy(10,0); cout << H;
    gotoxy(11,0); cout << H;
    gotoxy(12,0); cout << H;
    gotoxy(13,0); cout << H;
    gotoxy(14,0); cout << H;
    gotoxy(15,0); cout << H;
    gotoxy(16,0); cout << H;
    gotoxy(17,0); cout << H;
    gotoxy(18,0); cout << H;
    gotoxy(19,0); cout << H;
    gotoxy(20,0); cout << H;
    gotoxy(21,0); cout << H;
    gotoxy(22,0); cout << H;
    gotoxy(23,0); cout << H;
    gotoxy(24,0); cout << H;
    gotoxy(25,0); cout << H;
    gotoxy(26,0); cout << H;
    gotoxy(27,0); cout << H;
    gotoxy(28,0); cout << H;
    gotoxy(29,0); cout << H;
    gotoxy(30,0); cout << ESD << endl;
    gotoxy(0,1); cout << V;
    cout << "      MENU CLIENTES     " << endl;
    gotoxy(0,2); cout << V;
    cout << "1. INGRESO COMPRA" << endl;
    gotoxy(30,1); cout << V;
    gotoxy(0,3); cout << V;
    cout << "2. LECTURA DE COMPRAS" << endl;
    gotoxy(30,2); cout << V;
    gotoxy(0,4); cout << V;
    cout << "3. MODIFICAR COMPRA" << endl;
    gotoxy(30,3); cout << V;
    gotoxy(0,5); cout << V;
    cout << "4. BUSCAR COMPRA" << endl;
    gotoxy(30,4); cout << V;
    gotoxy(0,6); cout << V;
    cout << "5. ELIMINAR COMPRA" << endl;
    gotoxy(30,5); cout << V;
    gotoxy(0,7); cout << V;
    cout << "6. REGRESAR AL MENU PRINCIPAL" << endl;
    gotoxy(30,6); cout << V;
    gotoxy(0,8); cout << V;
    gotoxy(30,7); cout << V;
    gotoxy(0,8); cout << EII;
    gotoxy(1,8); cout << H;
    gotoxy(2,8); cout << H;
    gotoxy(3,8); cout << H;
    gotoxy(4,8); cout << H;
    gotoxy(5,8); cout << H;
    gotoxy(6,8); cout << H;
    gotoxy(7,8); cout << H;
    gotoxy(8,8); cout << H;
    gotoxy(9,8); cout << H;
    gotoxy(10,8); cout << H;
    gotoxy(11,8); cout << H;
    gotoxy(12,8); cout << H;
    gotoxy(13,8); cout << H;
    gotoxy(14,8); cout << H;
    gotoxy(15,8); cout << H;
    gotoxy(16,8); cout << H;
    gotoxy(17,8); cout << H;
    gotoxy(18,8); cout << H;
    gotoxy(19,8); cout << H;
    gotoxy(20,8); cout << H;
    gotoxy(21,8); cout << H;
    gotoxy(22,8); cout << H;
    gotoxy(23,8); cout << H;
    gotoxy(24,8); cout << H;
    gotoxy(25,8); cout << H;
    gotoxy(26,8); cout << H;
    gotoxy(27,8); cout << H;
    gotoxy(28,8); cout << H;
    gotoxy(29,8); cout << H;
    gotoxy(30,8); cout << EID << endl;
    cout << "A QUE MENU DESEA IR? :";
    cin >> OpcMenu;
    fflush(stdin);

    switch(OpcMenu){
        case 1:{
            Facture();
            ProductosAComprar();
            getch();
            MenuFacturas();
            break;
        }
        case 6:{
            MenuPrincipal();
            break;
        }
        default:{
            cout << "OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
            getch();
            MenuPrincipal();
            break;
        }
    }
}
int ContadorF(){
    int ContadorFacturas= 0;

    fstream Archivo("FacturaDetalle.dat",ios::in|ios::binary);
    if(Archivo.fail()){
        cout << "ERROR AL LEER EL ARCHIVO..." << endl;
    }else{
        Archivo.read((char *)&Factura,sizeof (Facturas));
        while(!Archivo.eof()){
            ContadorFacturas++;
            Archivo.read((char *)&Factura,sizeof (Facturas));
        }

    }
    Archivo.close();
    return ContadorFacturas;
}
void Facture(){

  int auxnit=0,encontradoc=0;
  cout<<"Ingrese el nit del cliente que va a comprar"<<endl;
  cin>>auxnit;
  fflush(stdin);
    fstream ArchivoClientes(CL,ios::in|ios::binary);
    if(ArchivoClientes.fail()){
        cout << "ERROR AL LEER EL ARCHIVO c..." << endl;
    }else{
        ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        while(!ArchivoClientes.eof()){
            if(Cliente.NITCliente==auxnit) {
                cout << "NIT: " << Cliente.NITCliente << endl;
                cout << "CODIGO: " << Cliente.CodigoCliente << endl;
                cout << "NOMBRE: " << Cliente.NombreCliente << endl;
                cout << "APELLIDO: " << Cliente.ApellidoCliente << endl;
                cout << "DIRECCION: " << Cliente.DireccionCliente << endl;
                cout << "TELEFONO: " << Cliente.TelefonoCliente << endl;
                cout << "============================" << endl;
                Factura.NITFactura=Cliente.NITCliente;
                encontradoc=1;
            }
            ArchivoClientes.read((char *)&Cliente,sizeof (Clientes));
        }
    }
    ArchivoClientes.close();
    if(encontradoc==0){
        IngresoClientes();
    }  fstream ArchivoR("FacturaDetalle.dat",ios::app|ios::binary);
    ArchivoR.close();
    Factura.NoFactura=ContadorF();
    Factura.FechaFactura.Dia=tmP->tm_mday;
    Factura.FechaFactura.Mes=tmP->tm_mon+1;
    Factura.FechaFactura.Anio=tmP->tm_year+1900;
    string Back="Factura";
    int d=0,m=0,a=0;
    d=tmP->tm_mday;
            m=tmP->tm_mon+1;
                    a=tmP->tm_year+1900;
char buffer1[50],buffer2[50],buffer3[50];
    itoa(d,buffer1,10);
    itoa(m,buffer2,10);
    itoa(a,buffer3,10);
                    Back.append(buffer1);
    Back.append(buffer2);
    Back.append(buffer3);
    Back.append(".dat");
    fstream Archivo(Back,ios::app|ios::binary);
    Archivo.write((char *)&Factura, sizeof(Facturas));
    Archivo.close();
}
void ProductosAComprar(){
    char opc;
   fstream Archivo("FacturaDetalle.dat",ios::app|ios::binary);
   FacturaDetalle.NoFactura=ContadorF();
   do {
       system("CLS");
       loopproductos:
       LecturaProductos();


       int Busqueda = 0,encontradop=0;

       cout << "INGRESE EL CODIGO A Comprar: ";
       cin >> Busqueda;
       fflush(stdin);

       fstream ArchivoProductos(PR,ios::in|ios::binary);
       if(ArchivoProductos.fail()){
           cout << "ERROR AL LEER EL ARCHIVO p..." << endl;
       }else{
           ArchivoProductos.read((char *)&Producto,sizeof (Productos));
           while(!ArchivoProductos.eof()){
               if(Busqueda == Producto.CodigoProducto){
                   encontradop=1;
                   cout << "CODIGO DEL PRODUCTO: " << Producto.CodigoProducto << endl;
                   cout << "NOMBRE DEL PRODUCTO: " << Producto.NombreProducto << endl;

                   fstream ArchivoMarcas(AM,ios::in|ios::binary);
                   if(ArchivoMarcas.fail()){
                       cout << "ERROR AL LEER EL ARCHIVO m..." << endl;
                   }else{
                       ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                       while(!ArchivoMarcas.eof()){
                           if(Producto.CodigoMarca == Marca.CodigoMarca){
                               cout << "MARCA: " << Marca.NombreMarca << endl;
                           }
                           ArchivoMarcas.read((char *)&Marca,sizeof (Marcas));
                       }
                   }
                   ArchivoMarcas.close();
                   FacturaDetalle.idProductos=Producto.CodigoProducto;
                   FacturaDetalle.PrecioVenta=Producto.PrecioVenta;
                   loop:
                   int auxCantidad = 0;
                   cout << "Cuantos Desea Comprar" << endl;
                   cin >> auxCantidad;
                   fflush(stdin);
                   if(auxCantidad<Producto.Cantidad){
                       FacturaDetalle.Total=auxCantidad*FacturaDetalle.PrecioVenta;
                   }else{
                       cout<<"Excede lo que hay en Stock"<<endl;
                       getch();
                       goto loop;
                   }
               }
               ArchivoProductos.read((char *)&Producto,sizeof (Productos));
           }
       }
       ArchivoProductos.close();
      if(encontradop==0){
          cout<<"Codigo inexistente"<<endl;
          getch();
          goto loopproductos;
      }
      Archivo.write((char *)&FacturaDetalle,sizeof(FacturasDetalle));
      cout<<"Desea comprar otro producto? s/n"<<endl;
      cin>>opc;
      fflush(stdin);
   }while(opc=='S');
   Archivo.close();
}