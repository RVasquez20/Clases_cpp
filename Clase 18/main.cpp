#include "librerias.h"
string Marc="Marcas.txt";
string Product="Productos.txt";
string Vent="Ventas.txt";
string Temp="Temporal.txt";
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
void MenuPrincipal();
void MenuMarcas();
void IngresoMarcas();
void LecturaMarcas();
void MenuProductos();
void IngresoProductos();
void LecturaProductos();
void MenuVentas();
void IngresoVenta();
void LecturaVenta();
int ContadorM();
bool VerificadorP(int);
int main() {
    MenuPrincipal();
    return 0;
}
void MenuPrincipal(){
    int opc=0;
    cout<<"Menu principal"<<endl;
    cout<<"1)Menu Marcas"<<endl;
    cout<<"2)Menu Productos"<<endl;
    cout<<"3)Menu Ventas"<< endl;
    cout<<"4)Salir"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Ingrese la opcion que desea: ";
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
         MenuProductos();
            getch();
            MenuPrincipal();
            break;
        }
        case 3:{
          // MenuVentas();
            getch();
            MenuPrincipal();
            break;
        }

        case 4:{
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
    cout<<"3)MenuPrincipal"<<endl;
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
            MenuMarcas();
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
 fstream ArchivoM(Marc,ios::app);
    if(ArchivoM.fail()){
        cout<<"Error"<<endl;
    }else{
        do {
            Marca.idMarca = ContadorM();
            fflush(stdin);
            cout << endl << "Ingrese el nombre de la marca: ";
            cin.getline(Marca.NombreMarca, 50, '\n');
            fflush(stdin);
            ArchivoM << Marca.idMarca << " " << Marca.NombreMarca << endl;
            cout<<"Registro Ingresado Correctamente"<<endl<<"Desa ingresar otra marca?  S/N"<<endl;
            cin>>opc;
            fflush(stdin);
        }while(toupper(opc)=='S');
    }
    ArchivoM.close();
}
void LecturaMarcas(){
    Marcas Marca;
    fstream ArchivoM(Marc,ios::in);
    if(ArchivoM.fail()){
        cout<<"Error"<<endl;
    }else{
        ArchivoM>>Marca.idMarca>>Marca.NombreMarca;
        while(!ArchivoM.eof()){
            cout<<Marca.idMarca<<" "<<Marca.NombreMarca<<endl;
            cout<<"----------------------------------"<<endl;
            ArchivoM>>Marca.idMarca>>Marca.NombreMarca;
        }
    }
    ArchivoM.close();

}
int ContadorM() {
    int Valor = 0;
    fstream ArchivoM(Marc, ios::in);
        ArchivoM >> Marca.idMarca >> Marca.NombreMarca;
        while (!ArchivoM.eof()) {

            ArchivoM >> Marca.idMarca >> Marca.NombreMarca;
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
    cout<<"3)MenuPrincipal"<<endl;
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
          //  LecturaProductos();
            getch();
            MenuProductos();
            break;
        }


        case 3:{
            MenuProductos();
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

    fstream ArchivoP(Product,ios::app);
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
    ArchivoP<<Producto.CodigoProducto<<" "<<Producto.Nombre<<" "<<Producto.idMarca<<" "<<" "<<Producto.Cantidad<<Producto.PrecioCosto<<" "<<Producto.PrecioVenta<<" "<<Producto.FechaDeIngreso.d
            <<" "<<Producto.FechaDeIngreso.m<<" "<<Producto.FechaDeIngreso.a<<endl;
    ArchivoP.close();
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