#include <librerias.h>
#include <locale>
#include <math.h>


const double PI=3.141592;
//Clase Padre
class Figuras{
protected:
    float x;
public:
    //Constructor
   Figuras(float Y=0){
       x=Y;
   }
   //Metodos
   virtual float Perimetro()=0;
    virtual float Area()=0;
};
//Clase Hija
class Circulo:public Figuras{
    //Solo tiene Metodos
public:
    //Constructor
    Circulo(float radio){
        x=radio;
    }
    float Perimetro(){
        return 2*PI*x;
    }
    float Area(){
        return PI*(pow(x,2));
    }

};
class Cuadrado:public Figuras{
    //Solo tiene Metodos
public:
    //Constructor
    Cuadrado(float lado){
        x=lado;
    }
    float Perimetro(){
        return 4*x;
    }
    float Area(){
        return (pow(x,2));
    }

};
int main() {
setlocale(LC_ALL,"");
float dato=0.0;
int Cantidad=0;
Figuras *figuras[10];
cout<<"Cuantas Figuras desea Ingresar"<<endl;
cin>>Cantidad;
fflush(stdin);
int opc=0;
for(int i=0;i<Cantidad;i++){
    loop:
    cout<<"1)Circulo"<<endl;
    cout<<"2)Cuadrado"<<endl;
    cout<<"Seleccione la figura que desea ingresar"<<endl;
    cin>>opc;
    fflush(stdin);
    switch (opc) {
        case 1:{
            cout<<"Ingrese el radio de el circulo"<<endl;
            cin>>dato;
            fflush(stdin);
            figuras[i]=new Circulo(dato);
            break;
        }
         case 2:{
            cout<<"Ingrese el lado de el cuadrado"<<endl;
            cin>>dato;
            fflush(stdin);
            figuras[i]=new Cuadrado(dato);
            break;
        }
        default:{
            cout<<"Opcion Incorrecta"<<endl;
            goto loop;
            break;
        }
    }
}
    for (int i=0;i<Cantidad;i++){
        cout<<"Perimetro: "<<figuras[i]->Perimetro()<<endl;
        cout<<"Area: "<<figuras[i]->Area()<<endl;
        cout<<"-----------------------------------------";
    }
    getch();
    return 0;
}
