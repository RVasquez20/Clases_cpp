#include "librerias.h"
#define Usuario "Jairo"
#define Contrasenia "C++"

string Marc="Marcas.dat";
string Product="Productos.dat";
string Vent="Ventas.txt";
string Temp="Temporal.dat";

struct fecha{
    int d,m,a;
};
struct Marcas{
    int idMarca;
    char NombreMarca[50];
};
Marcas Marca;
struct Productos{
    int CodigoProducto,idMarca,Cantidad;
    char Nombre[100];
    double PrecioCosto,PrecioVenta;
    struct fecha FechaDeIngreso;
};
Productos Producto;

struct Facturas{
    int NoFactura;
    char NITFactura[12];
    struct fecha FechaFactura;
    int idProductos,Cantidad;
    double Total;
};
Facturas Factura;

void Login();

void MenuPrincipal();

void MenuMarcas();
void IngresoMarcas();
void LecturaMarcas();
void BusquedaMarcas();
void ModificarMarcas();
void EliminarMarcas();
int ContadorM();

void MenuProductos();
void IngresoProductos();
void LecturaProductos();
void BusquedaProductos();
void ModificarProdutcos();
void EliminarProductos();
void AgregarExistencias();
bool VerificadorP(int);
bool VerificadorDeNumeros(string);

void MenuVentas();
void IngresoVenta();
void LecturaVenta();
int ContadorV();

int main() {
    Login();
    return 0;
}

void Login(){
    string Us, Contr;

    cout << "Usuario: ";
    getline(cin,Us);
    fflush(stdin);
    cout << "Contrasenia: ";
    getline(cin,Contr);
    fflush(stdin);

    if((Us != Usuario) && (Contr != Contrasenia)){
        cout << "Usuario y contrasenia incorrectas, intente de nuevo..." << endl;
        Login();
    }else
    if(Us != Usuario){
        cout << "Usuario incorrecto, intente de nuevo..." << endl;
        Login();
    }else
    if(Contr != Contrasenia){
        cout << "Contrasenia incorrecta, intente de nuevo..." << endl;
        Login();
    }else{
        MenuPrincipal();
    }
}

void MenuPrincipal(){
    //loop:
    //int opc=0;
    //string opcAux;
    char opc;
    cout<<"Menu principal"<<endl;
    cout<<"1)Menu Marcas"<<endl;
    cout<<"2)Menu Productos"<<endl;
    cout<<"3)Menu Ventas"<< endl;
    cout<<"  ESC.)Salir"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Ingrese la opcion que desea: ";
    opc=getch();
    fflush(stdin);
   /* if(VerificadorDeNumeros(opcAux)){
        opc=atoi(opcAux.c_str());
    }else{
        cout<<"Ingreso alguna letra, porfavor ingrese solamente numeros"<<endl;
        getch();
        goto loop;
    }*/
    switch (opc) {
        case '1':{
            MenuMarcas();
            getch();
            MenuPrincipal();
            break;
        }
        case '2':{
            MenuProductos();
            getch();
            MenuPrincipal();
            break;
        }
        case '3':{
            MenuVentas();
            getch();
            MenuPrincipal();
            break;
        }

        case 27:{
            exit(0);
            break;
        }
        default:{
            cout<<"opcion incorrecta elija nuevamente "<<endl;
            getch();
            MenuPrincipal();
            break;
        }
    }
}

void MenuMarcas(){
    int opc=0;
    cout<<"Menu principal"<<endl;
    cout<<"1)Ingresar Marcas"<<endl;
    cout<<"2)Leer Marcas"<<endl;
    cout<<"3)Buscar Marcas"<<endl;
    cout<<"4)Modificar Marcas"<<endl;
    cout<<"5)Eliminar Marcas"<<endl;
    cout<<"6)MenuPrincipal"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Ingrese la opcion que desea: ";
    cin>>opc;
    fflush(stdin);
    switch (opc) {
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
            BusquedaMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 4:{
            ModificarMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 5:{
            EliminarMarcas();
            getch();
            MenuMarcas();
            break;
        }
        case 6:{
            MenuPrincipal();
            break;
        }
        default:{
            cout<<"opcion incorrecta elija nuevamente "<<endl;
            getch();
            MenuMarcas();
            break;
        }
    }
}
void IngresoMarcas(){
    char opc;
    fstream ArchivoM(Marc,ios::app|ios::binary);
    if(ArchivoM.fail()){
        cout<<"Error"<<endl;
    }else{

            Marca.idMarca = ContadorM();
            fflush(stdin);
            cout << endl << "Ingrese el nombre de la marca: ";
            cin.getline(Marca.NombreMarca, 50, '\n');
            fflush(stdin);
            ArchivoM.write((char *)&Marca,sizeof (Marcas));
            cout<<"Registro Ingresado Correctamente"<<endl<<endl;

            fflush(stdin);

    }
    ArchivoM.close();
}
void LecturaMarcas(){
    Marcas Marca;
    fstream ArchivoM(Marc,ios::in|ios::binary);
    if(ArchivoM.fail()){
        cout<<"Error"<<endl;
    }else{
        ArchivoM.read((char *)&Marca,sizeof (Marcas));
        while(!ArchivoM.eof()){
            cout<<Marca.idMarca<<" "<<Marca.NombreMarca<<endl;
            cout<<"----------------------------------"<<endl;
            ArchivoM.read((char *)&Marca,sizeof (Marcas));
        }
    }
    ArchivoM.close();
}
void BusquedaMarcas(){
    int Busqueda = 0;

    cout << "Ingrese el ID de la marca que desea buscar: ";
    cin >> Busqueda;
    fflush(stdin);

    fstream ArchivoM(Marc,ios::in);

    if(ArchivoM.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoM>>Marca.idMarca>>Marca.NombreMarca;
        while(!ArchivoM.eof()){
            if(Busqueda == Marca.idMarca){
                cout << "ID: " << Marca.idMarca << endl;
                cout << "Marca: " << Marca.NombreMarca << endl;
                cout << "------------------" << endl;
            }
            ArchivoM>>Marca.idMarca>>Marca.NombreMarca;
        }
    }
    ArchivoM.close();
}
void ModificarMarcas(){
    int Modificar = 0;
    char ConfirmarB;
    string NuevoNombreMarca;

    cout << "Ingrese el ID de la marca que desea modificar: ";
    cin >> Modificar;
    fflush(stdin);

    fstream ArchivoM(Marc,ios::in|ios::binary);
    fstream Temporal(Temp,ios::app|ios::binary);

    if(ArchivoM.fail() || Temporal.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoM.read((char *)&Marca,sizeof (Marcas));
        while(!ArchivoM.eof()){
            if(Modificar == Marca.idMarca){
                cout << "ID: " << Marca.idMarca << endl;
                cout << "Marca: " << Marca.NombreMarca << endl;
                cout << "------------------" << endl;

                cout << "Desea modificar la marca encontrada? S/N: ";
                cin >> ConfirmarB;
                fflush(stdin);

                if(toupper(ConfirmarB) == 'S'){
                    cout << "Ingrese el nuevo nombre de la marca: ";
                    cin.getline(Marca.NombreMarca,50,'\n');
                    fflush(stdin);
                    Temporal.write((char *)&Marca,sizeof (Marcas));
                }else{
                    Temporal.write((char *)&Marca,sizeof (Marcas));
                }
            }else{
                Temporal.write((char *)&Marca,sizeof (Marcas));
            }
            ArchivoM.read((char *)&Marca,sizeof (Marcas));
        }
    }
    ArchivoM.close();
    Temporal.close();
    remove(Marc.c_str());
    rename(Temp.c_str(),Marc.c_str());
}
void EliminarMarcas(){
    int Eliminar = 0;
    char Confirmar;

    cout << "Ingrese el ID de la marca que dese eliminar: ";
    cin >> Eliminar;
    fflush(stdin);

    fstream ArchivoM(Marc,ios::in);
    fstream Temporal(Temp,ios::app);

    if(ArchivoM.fail() || Temporal.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoM>>Marca.idMarca>>Marca.NombreMarca;
        while(!ArchivoM.eof()){
            if(Eliminar == Marca.idMarca){
                cout << "ID: " << Marca.idMarca << endl;
                cout << "Marca: " << Marca.NombreMarca << endl;
                cout << "------------------" << endl;

                cout << "Dese eleminar este registro? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "Datos eliminados... " << endl;
                }
                else{
                    Temporal<<Marca.idMarca<<" "<<Marca.NombreMarca<<endl;
                }
            }else{
                Temporal<<Marca.idMarca<<" "<<Marca.NombreMarca<<endl;
            }
            ArchivoM>>Marca.idMarca>>Marca.NombreMarca;
        }
    }
    ArchivoM.close();
    Temporal.close();
    remove(Marc.c_str());
    rename(Temp.c_str(),Marc.c_str());
}
int ContadorM() {
    int Valor = 0;
    fstream ArchivoM(Marc, ios::in|ios::binary);
    ArchivoM.read((char *)&Marca,sizeof (Marcas));
    while (!ArchivoM.eof()) {

        ArchivoM.read((char *)&Marca,sizeof (Marcas));
        Valor=Marca.idMarca;
    }
    Valor++;

    ArchivoM.close();
    return Valor;

}

void MenuProductos(){
    int opc=0;
    cout<<"Menu principal"<<endl;
    cout<<"1)Ingresar Productos"<<endl;
    cout<<"2)Leer Productos"<<endl;
    cout<<"3)Buscar Productos"<<endl;
    cout<<"4)Modificar Productos"<<endl;
    cout<<"5)Eliminar Productos"<<endl;
    cout<<"6)Agregar Existencia Productos"<<endl;
    cout<<"7)MenuPrincipal"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Ingrese la opcion que desea: ";
    cin>>opc;
    fflush(stdin);
    switch (opc) {
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
            BusquedaProductos();
            getch();
            MenuProductos();
            break;
        }
        case 4:{
            ModificarProdutcos();
            getch();
            MenuProductos();
            break;
        }
        case 5:{
            EliminarProductos();
            getch();
            MenuProductos();
            break;
        }
        case 6:{
            AgregarExistencias();
            getch();
            MenuProductos();
            break;
        }
        case 7:{
            MenuPrincipal();
            break;
        }
        default:{
            cout<<"opcion incorrecta elija nuevamente "<<endl;
            getch();
            MenuProductos();
            break;
        }
    }
}
void IngresoProductos(){

    fstream ArchivoP(Product,ios::app|ios::binary);
    loopCodigoProducto:
    int codaux=0;
    fflush(stdin);
    cout<<"Ingrese El Codigo Del Producto: ";
    cin>>codaux;
    fflush(stdin);
    if(!VerificadorP(codaux)){
        cout<<"Codigo YA EXISTENTE "<<endl;
        goto loopCodigoProducto;
    }else{
        Producto.CodigoProducto=codaux;
    }

    fflush(stdin);
    cout<<"Ingrese el Nombre del producto:";
    cin.getline(Producto.Nombre,100,'\n');
    fflush(stdin);
    LecturaMarcas();
    cout<<"Ingrese el id de la marca a la que pertenece el producto:";
    cin>>Producto.idMarca;
    fflush(stdin);
    cout<<"Ingrese La Cantidad De existencias del producto:";
    cin>>Producto.Cantidad;
    fflush(stdin);
    cout<<"Ingrese el Precio Costo del producto:";
    cin>>Producto.PrecioCosto;
    fflush(stdin);
    cout<<"Ingrese el Precio Venta del producto:";
    cin>>Producto.PrecioVenta;
    fflush(stdin);
    loopFecha:
    cout<<"Ingrese el dia que ingreso el producto:";
    cin>>Producto.FechaDeIngreso.d;
    fflush(stdin);
    cout<<"Ingrese el Mes que ingreso el producto:";
    cin>>Producto.FechaDeIngreso.m;
    fflush(stdin);
    cout<<"Ingrese el anio que ingreso el producto:";
    cin>>Producto.FechaDeIngreso.a;
    fflush(stdin);
    if(!((Producto.FechaDeIngreso.d>0 && Producto.FechaDeIngreso.d<32) && (Producto.FechaDeIngreso.m>0 && Producto.FechaDeIngreso.m<13) && (Producto.FechaDeIngreso.a>1990 && Producto.FechaDeIngreso.a<2100))){
        goto loopFecha;
    }
    ArchivoP.write((char *)&Producto,sizeof (Productos));
    ArchivoP.close();
}
void LecturaProductos(){

    fstream ArchivoP(Product,ios::in|ios::binary);

    if(ArchivoP.fail()){
        cout << "Error..." << endl;
    }else {

    ArchivoP.read((char *)&Producto,sizeof (Productos));
        while(!ArchivoP.eof()){
            cout << "Codigo del producto: " <<  Producto.CodigoProducto << endl;
            cout << "ID de la marca a la que pertenece el producto: " << Producto.idMarca << endl;
            cout << "Cantidad De existencias del producto: " << Producto.Cantidad << endl;
            cout << "Nombre del producto: " <<  Producto.Nombre << endl;
            cout << "Precio Costo del producto: " <<  Producto.PrecioCosto << endl;
            cout << "Precio Venta del producto: " <<  Producto.PrecioVenta << endl;
            cout << "Dia que ingreso el producto: " <<  Producto.FechaDeIngreso.d << endl;
            cout << "Mes que ingreso el producto: " << Producto.FechaDeIngreso.m << endl;
            cout << "Anio que ingreso el producto: " <<  Producto.FechaDeIngreso.a << endl;
            cout << "--------------------------------------" << endl;
            ArchivoP.read((char *)&Producto,sizeof (Productos));
        }
    }
    ArchivoP.close();
}
void BusquedaProductos(){
    int Busqueda;
    char Confirmar;

    loopbusqueda:
    cout << "Ingrese el codigo del prodcuto que dese buscar: ";
    cin >> Busqueda;

    fstream ArchivoP(Product,ios::in);

    if(ArchivoP.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        while(!ArchivoP.eof()){
            if(Busqueda == Producto.CodigoProducto){
                cout << "Codigo del producto: " <<  Producto.CodigoProducto << endl;
                cout << "ID de la marca a la que pertenece el producto: " << Producto.idMarca << endl;
                cout << "Cantidad De existencias del producto: " << Producto.Cantidad << endl;
                cout << "Nombre del producto: " <<  Producto.Nombre << endl;
                cout << "Precio Costo del producto: " <<  Producto.PrecioCosto << endl;
                cout << "Precio Venta del producto: " <<  Producto.PrecioVenta << endl;
                cout << "Dia que ingreso el producto: " <<  Producto.FechaDeIngreso.d << endl;
                cout << "Mes que ingreso el producto: " << Producto.FechaDeIngreso.m << endl;
                cout << "Anio que ingreso el producto: " <<  Producto.FechaDeIngreso.a << endl;
                cout << "--------------------------------------" << endl;

                cout << "Desea realizar otra busqueda? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    goto loopbusqueda;
                }
            }
            ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        }
    }
    ArchivoP.close();
}
void ModificarProdutcos(){
    int Modificar;
    char Confirmar;
    int NuevoIdMarca = 0;
    int NuevaCantidad = 0;
    string NuevoNombre;
    int NuevoPrecioCosto = 0;
    int NuevoPrecioVenta = 0;
    int NuevaFechaIngresoDia = 0;
    int NuevaFechaIngresoMes = 0;
    int NuevaFechaIngresoAnio = 0;

    cout << "Ingrese el codigo del producto a modificar: ";
    cin >> Modificar;
    fflush(stdin);

    fstream ArchivoP(Product,ios::in);
    fstream Temporal(Temp,ios::app);

    if(ArchivoP.fail() || Temporal.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        while(!ArchivoP.eof()){
            if(Modificar == Producto.CodigoProducto){
                cout << "Codigo del producto: " <<  Producto.CodigoProducto << endl;
                cout << "ID de la marca a la que pertenece el producto: " << Producto.idMarca << endl;
                cout << "Cantidad De existencias del producto: " << Producto.Cantidad << endl;
                cout << "Nombre del producto: " <<  Producto.Nombre << endl;
                cout << "Precio Costo del producto: " <<  Producto.PrecioCosto << endl;
                cout << "Precio Venta del producto: " <<  Producto.PrecioVenta << endl;
                cout << "Dia que ingreso el producto: " <<  Producto.FechaDeIngreso.d << endl;
                cout << "Mes que ingreso el producto: " << Producto.FechaDeIngreso.m << endl;
                cout << "Anio que ingreso el producto: " <<  Producto.FechaDeIngreso.a << endl;
                cout << "--------------------------------------" << endl;

                cout << "Desea modidicar el registro encontrado? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){

                    LecturaMarcas();
                    cout << "Ingrese el nuevo ID de la marca a la que pertenece el producto: ";
                    cin >> NuevoIdMarca;
                    fflush(stdin);
                    cout << "Intrese la nueva cantidad De existencias del producto: ";
                    cin >> NuevaCantidad;
                    fflush(stdin);
                    cout << "Ingrese el nuevo nombre del producto: ";
                    getline(cin,NuevoNombre);
                    fflush(stdin);
                    cout << "Ingrese el nuevo precio Costo del producto: ";
                    cin >> NuevoPrecioCosto;
                    fflush(stdin);
                    cout << "Ingrese el nuevo precio Venta del producto: ";
                    cin >> NuevoPrecioVenta;
                    fflush(stdin);
                    cout << "Ingrese el nuevo dia que ingreso del producto: ";
                    cin >> NuevaFechaIngresoDia;
                    fflush(stdin);
                    cout << "Ingrese el nuevo mes que ingreso el producto: ";
                    cin >> NuevaFechaIngresoMes;
                    fflush(stdin);
                    cout << "Ingrese el nuevo anio que ingreso el producto: ";
                    cin >> NuevaFechaIngresoAnio;
                    fflush(stdin);
                    Temporal<<Producto.CodigoProducto<<" "<<NuevoNombre<<" "<<NuevoIdMarca<<" "<<NuevaCantidad<<" "<<NuevoPrecioCosto<<" "<<NuevoPrecioVenta<<" "<<NuevaFechaIngresoDia<<" "<<NuevaFechaIngresoMes<<" "<<NuevaFechaIngresoAnio<<endl;
                }else{
                    Temporal<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
                }
            }else{
                Temporal<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
            }
            ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        }
    }
    ArchivoP.close();
    Temporal.close();
    remove(Product.c_str());
    rename(Temp.c_str(),Product.c_str());
}
void EliminarProductos(){
    int Eliminar;
    char Confirmar;

    cout << "Ingrese el codigo del producto a eliminar: ";
    cin >> Eliminar;
    fflush(stdin);

    fstream ArchivoP(Product,ios::in);
    fstream Temporal(Temp,ios::app);

    if(ArchivoP.fail() || Temporal.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        while(!ArchivoP.eof()){
            if(Eliminar == Producto.CodigoProducto){
                cout << "Codigo del producto: " <<  Producto.CodigoProducto << endl;
                cout << "ID de la marca a la que pertenece el producto: " << Producto.idMarca << endl;
                cout << "Cantidad De existencias del producto: " << Producto.Cantidad << endl;
                cout << "Nombre del producto: " <<  Producto.Nombre << endl;
                cout << "Precio Costo del producto: " <<  Producto.PrecioCosto << endl;
                cout << "Precio Venta del producto: " <<  Producto.PrecioVenta << endl;
                cout << "Dia que ingreso el producto: " <<  Producto.FechaDeIngreso.d << endl;
                cout << "Mes que ingreso el producto: " << Producto.FechaDeIngreso.m << endl;
                cout << "Anio que ingreso el producto: " <<  Producto.FechaDeIngreso.a << endl;
                cout << "--------------------------------------" << endl;

                cout << "Desea eliminar el registro encontrado? S/N: ";
                cin >> Confirmar;
                fflush(stdin);

                if(toupper(Confirmar) == 'S'){
                    cout << "Registro eliminado..." << endl;
                }else{
                    Temporal<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
                }
            }else{
                Temporal<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
            }
            ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        }
    }
    ArchivoP.close();
    Temporal.close();
    remove(Product.c_str());
    rename(Temp.c_str(),Product.c_str());
}
void AgregarExistencias(){
    int Agregar = 0,  AgregarE = 0;


    LecturaProductos();
    cout << "Ingrese el id del producto: ";
    cin >> Agregar;
    fflush(stdin);

    fstream ArchivoP(Product,ios::in);
    fstream Temporal(Temp,ios::app);

    if(ArchivoP.fail() || Temporal.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        while(!ArchivoP.eof()){
            if(Agregar == Producto.CodigoProducto){
                cout << "Ingrese la cantidad de existencias agregar: ";
                cin >> AgregarE;
                fflush(stdin);
                Producto.Cantidad = Producto.Cantidad + AgregarE;
                Temporal<<" "<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
            }else{
                Temporal<<" "<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
            }
            ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
        }
    }
    ArchivoP.close();
    Temporal.close();
    remove(Product.c_str());
    rename(Temp.c_str(),Product.c_str());
}
bool VerificadorP(int cod){
    fstream Archivo(Product,ios::in);
    int Encontrado=0;
    Archivo>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d
           >>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
    while(!Archivo.eof()){
        if(Producto.CodigoProducto==cod) {
            Encontrado = 1;
        }
        Archivo>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d
               >>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
    }
    Archivo.close();
    if(Encontrado==0){
        return true;
    }else{
        return false;
    }
}

void MenuVentas(){
    int opc=0;

    cout<<"Menu Ventas"<<endl;
    cout<<"1)Ingresar Ventas"<<endl;
    cout<<"2)Leer Ventas"<<endl;
    cout<<"3)MenuPrincipal"<<endl;
    cout<<"----------------------"<<endl;

    cout<<"Ingrese la opcion que desea: ";
    cin>>opc;
    fflush(stdin);

    switch (opc) {
        case 1:{
            IngresoVenta();
            getch();
            MenuVentas();
            break;
        }
        case 2:{
            LecturaVenta();
            getch();
            MenuVentas();
            break;
        }
        case 3:{
            MenuPrincipal();
            break;
        }
        default:{
            cout<<"opcion incorrecta elija nuevamente "<<endl;
            getch();
            MenuVentas();
            break;
        }
    }
}
void IngresoVenta(){
    char Confirmar;
    int Disponible = 0;

    fstream ArchivoV(Vent,ios::app);

    if(ArchivoV.fail()){
        cout << "Error..." << endl;
    }else{
        do{
            Factura.NoFactura = ContadorV();
            fflush(stdin);
            cout << "Ingrese el NIT: ";
            cin.getline(Factura.NITFactura,12,'\n');
            fflush(stdin);
            cout << "Dia: ";
            cin >> Factura.FechaFactura.d;
            fflush(stdin);
            cout << "Mes: ";
            cin >> Factura.FechaFactura.m;
            fflush(stdin);
            cout << "Anio: ";
            cin >> Factura.FechaFactura.a;
            fflush(stdin);
            LecturaProductos();
            cout << "Ingrese el Id del producto a facturar: ";
            cin >> Factura.idProductos;
            fflush(stdin);
            cout << "Ingrese la cantidad a facturar: ";
            cin >> Factura.Cantidad;
            fflush(stdin);

            fstream ArchivoP(Product,ios::in);
            fstream Temporal(Temp,ios::app);
            if(ArchivoP.fail() || Temporal.fail()){
                cout << "Error..." << endl;
            }else{
                ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
                while(!ArchivoP.eof()){
                    fflush(stdin);
                    if(Factura.idProductos == Producto.CodigoProducto){
                        Factura.Total = Producto.PrecioVenta * Factura.Cantidad;
                        Producto.Cantidad = Producto.Cantidad - Factura.Cantidad;
                        Temporal<<" "<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
                    }else{
                        Temporal<<" "<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<Producto.Cantidad<<" "<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d<<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
                    }
                    ArchivoP>>Producto.CodigoProducto>>Producto.Nombre>>Producto.idMarca>>Producto.Cantidad>>Producto.PrecioCosto>>Producto.PrecioVenta>>Producto.FechaDeIngreso.d>>Producto.FechaDeIngreso.m>>Producto.FechaDeIngreso.a;
                }
            }
            ArchivoP.close();
            Temporal.close();
            remove(Product.c_str());
            rename(Temp.c_str(),Product.c_str());

            cout << "El total de la factura es: " << Factura.Total << endl;
            ArchivoV<<Factura.NoFactura<<" "<<Factura.NITFactura<<" "<<Factura.FechaFactura.d<<" "<<Factura.FechaFactura.m<<" "<<Factura.FechaFactura.a<<" "<<Factura.idProductos<<" "<<Factura.Cantidad<<" "<<Factura.Total<<endl;

            cout << "Desea realizar otra venta? S/N: ";
            cin >> Confirmar;
            fflush(stdin);
        }while(toupper(Confirmar) == 'S');
    }
    ArchivoV.close();

}
void LecturaVenta(){

    fstream ArchivoV(Vent,ios::in);

    if(ArchivoV.fail()){
        cout << "Error..." << endl;
    }else{
        ArchivoV>>Factura.NoFactura>>Factura.NITFactura>>Factura.FechaFactura.d>>Factura.FechaFactura.m>>Factura.FechaFactura.a>>Factura.idProductos>>Factura.Cantidad>>Factura.Total;
        while(!ArchivoV.eof()){
            cout << "Factura No.: " << Factura.NoFactura << endl;
            cout << "NIT: " << Factura.NITFactura << endl;
            cout << "Fecha de la factura: " << Factura.FechaFactura.d << "/" << Factura.FechaFactura.m << "/" << Factura.FechaFactura.a << endl;
            cout << "ID del producto: " << Factura.idProductos << endl;
            cout << "Cantidad a facturar: " << Factura.Cantidad << endl;
            cout << "Total de la factura: " << Factura.Total << endl;
            cout << "-----------------------------------" << endl;
            ArchivoV>>Factura.NoFactura>>Factura.NITFactura>>Factura.FechaFactura.d>>Factura.FechaFactura.m>>Factura.FechaFactura.a>>Factura.idProductos>>Factura.Cantidad>>Factura.Total;
        }
    }
    ArchivoV.close();
}
int ContadorV(){
    int Valor = 0;

    fstream ArchivoV(Vent,ios::in);
    ArchivoV>>Factura.NoFactura>>Factura.NITFactura>>Factura.FechaFactura.d>>Factura.FechaFactura.m>>Factura.FechaFactura.a>>Factura.idProductos>>Factura.Cantidad>>Factura.Total;
    while (!ArchivoV.eof()) {

        ArchivoV>>Factura.NoFactura>>Factura.NITFactura>>Factura.FechaFactura.d>>Factura.FechaFactura.m>>Factura.FechaFactura.a>>Factura.idProductos>>Factura.Cantidad>>Factura.Total;
        Valor=Factura.NoFactura;
    }
    Valor++;

    ArchivoV.close();
    return Valor;
}

bool VerificadorDeNumeros(string str){
for(int i=0;i<str.length();i++){
if(!isdigit(str[i])){
    return false;
}    else{
    return true;
}
}
}
