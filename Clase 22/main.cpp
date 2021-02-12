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
struct Depas{
    int id;
    char Nombre[100];
};
Depas d;
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
    /*int i=0;
    printf("Hola mundo\n");
    scanf("%d",&i);
    printf("el numero ingresado es %d",&i);*/
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
    //Ejercico 1:Leer lineas de un fichero usando FILE
   /*FILE *Archivo=fopen("DEPARTAMENTOS.txt","r");
   char contenido[100];
    if (Archivo==NULL){
        perror("El archivo no se pudo abrir");
    }else{
    while(fgets(contenido,100,Archivo)!=NULL){
        //cout<<contenido<<endl;
        puts(contenido);
    }
    }
   fclose(Archivo);
*/
   //Ejercicio 2:Escribir en un fichero x la frase que el usuario ingrese y mostrarlo en consola despues
   //de haber leido
   /*FILE *Archivo=fopen("prueba.txt","a+");
  char x[100],y[100],z[100];
  int diaaux=0;
   cout<<"Ingrese la cadena a escribir en el archivo:"<<endl;
   cin.getline(x,100,'\n');
   fflush(stdin);
   int dia=11;
   fprintf(Archivo,"%s %d",x,dia);
   rewind(Archivo);
   fscanf(Archivo,"%s",y);
    fscanf(Archivo,"%s",z);
   fscanf(Archivo,"%d",&diaaux);
    cout<<y<<z<<endl;
    cout<<diaaux<<endl;
   fclose(Archivo);
*/
   //Ejercicio 3: try catch de longitud de password
   /* loop:
   try {

       string pass;
       int Edad=0;
       cout << "Ingrese su contraseña" << endl;
       getline(cin, pass);
       fflush(stdin);
       cout<<"Ingrese su edad"<<endl;
       cin>>Edad;
       int l=0;
       l=pass.length();
       if( (pass.compare("/Hola")==0)){
           cout<<"Contraseña Aceptada"<<endl;
       }else{
           throw 404;
       }
       if(l<5){
           throw "No cumple los requisitos";
       }
       if(Edad<18){
           throw Edad;
       }

   }catch (int x){
       cout<<"Error: "<<x<<" Tu contraseña No contiene algun caracter especial"<<endl;
       goto loop;
   }catch(char const* s){
    perror(s);
   }
*/
   //Ejercicio 4:Leer el archivo Departamentos.txt con fread y usar try catch

 try{
     FILE *Depar=fopen("Depar.txt","a+");
     if(Depar==NULL){
         throw "Error al abrir Departamentos.txt";
     }else {
         cout << "Ingrese el id" << endl;
         cin >> d.id;
         fflush(stdin);
         if(d.id<=0){
             throw 400;
         }
         cout << "Ingrese el nombre del departamento" << endl;
         cin.getline(d.Nombre, 100, '\n');
         fflush(stdin);
         fwrite(&d,sizeof(Depas),1,Depar);
         fclose(Depar);
         FILE *Depar=fopen("Depart.txt","r+");
         if(Depar==NULL){
             throw 500;

         }else {
             fread(&d,sizeof(Depas),1,Depar);
             while(!feof(Depar)){
              cout<<"ID:"<<d.id<<endl;
              cout<<"Departamento: "<<d.Nombre<<endl;
              cout<<"-------------------"<<endl;
                 fread(&d,sizeof(Depas),1,Depar);
             }
             fclose(Depar);
         }
     }
 } catch (char const* x) {
cout<<x;
 }catch(int y){
     cout<<"Error: "<<y;
 }



    return 0;
}
