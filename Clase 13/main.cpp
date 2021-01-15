#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <conio.h>
#include <fstream>
using namespace std;
//Archivos/Ficheros
//Siguiente clase-> FILE 

int main() {
/*char ch;
bool Aprovado=false;
string Pas="";
string Us="";
cout<<"Login"<<endl;
cout<<"Usuario: ";
getline(cin,Us);
fflush(stdin);
cout<<endl<<endl;
cout<<"Password: ";
ch=getch();
while(ch!=13){
if(ch !=8){
Pas.push_back(ch);
cout<<"*";
}else{
    if(Pas.length()>0){
        cout<<"\b \b";
        Pas=Pas.substr(0,Pas.length()-1);
    }
}
ch=getch();
}
if((strcmp(Us.c_str(),"admin")==0)&&(strcmp(Pas.c_str(),"123")==0)){
    Aprovado=true;
    cout<<"Bienvenido"<<endl;
}
if(!Aprovado){
    cout<<"Error!"<<endl;
}

*/
//Apertura de un Archivo(Metodo Stream)
//ofstream->Escribir,ifstream->Leer,fstream->Ambos
ifstream Archivo;
//Se debe indicar el nombre del archivo y el metodo de apertura
/*
 * out->Escribir//Si el archivo existe y tiene contenido, borra todo el contenido y lo sobreescribe con el contenido nuevo, si no existe el archivo lo crea
 * in->Leer//Lee el contenido del archivo solamente
 * app->Añadir//Si el archivo exite y tiene contenido, solamente agrega el contenido nuevo al final del archivo, si no existe el archivo lo crea
 * */
Archivo.open("C:\\Users\\rodri\\Documents\\GitHub\\Clases_cpp\\Clase 13\\Archivo1.txt",ios::in);
string Contenido;
//eof= End Of File
if(Archivo.fail()){
    cout<<"Error"<<endl;
}
while(!Archivo.eof()){
getline(Archivo,Contenido);
cout<<Contenido<<endl;


}
Archivo.close();
system("PAUSE");
    return 0;
}
