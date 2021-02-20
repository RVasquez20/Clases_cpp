#include"librerias.h"
/*class Persona{
private://Atributos de la clase persona
    int edad;
    string nombre;
public://Metodos de la clase persona
    Persona(int,string);//Constructor,siempre el mismo nombre de la clase y siempre en metodos
    void correr();
    void leer();
};
//Metodos de la clase
//Constructor,nos sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre) {
    edad=_edad;
    nombre=_nombre;
}
void Persona::leer() {
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro y tengo "<<edad<<" Anios"<<endl;
}
void Persona::correr() {
    cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" Anios"<<endl;
}*/
//Ejercicio 1: Contruir una clase llamada Rectangulo que tenga los
//Siguientes atributos: Largo y ancho y los siguientes metodos: Perimetro() y Area()
class Rectangulo{
private:
    float Largo,Ancho;
public:
    Rectangulo(float,float);

    void Perimetro();
    void Area();

    virtual ~Rectangulo();

};
Rectangulo::Rectangulo(float Largo, float Ancho) {
    this->Ancho=Ancho;
    this->Largo=Largo;
}
void Rectangulo::Perimetro() {
    float perimetro=0.0;
    perimetro=(2*Largo)+(2*Ancho);
    cout<<"El Perimetro es:"<<perimetro<<endl;
}
void Rectangulo::Area() {
    float area=0.0;
    area=Largo*Ancho;
    cout<<"El Area es "<<area<<endl;
}
//Destructor, nos sirve para eliminar objetos


Rectangulo::~Rectangulo() {

}


int main() {
//Instanciar un objeto
/*Persona obj1=Persona(25,"Juan");
    Persona obj2=Persona(22,"Maria");
    Persona obj3=Persona(21,"Jose");
    Persona obj4=Persona(26,"Luis");

Lanzar un metodo
obj1.leer();
obj2.correr();
    obj2.leer();
    obj2.correr();
    obj3.leer();
    obj3.correr();
    obj4.leer();
    obj4.correr();*/
float l=0.0,a=0.0;
cout<<"Ingrese el largo del rectangulo"<<endl;
cin>>l;
    cout<<"Ingrese el Ancho del rectangulo"<<endl;
    cin>>a;
    Rectangulo obj1=Rectangulo(l,a);
    obj1.Area();
    obj1.~Rectangulo();//Destruyendo el objeto
    obj1.Perimetro();


    return 0;
}
