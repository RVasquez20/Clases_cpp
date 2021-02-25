#include <librerias.h>
//Sobrecarga de constructores
/*
class Fecha{
private:
    int dia,mes,anio;
public:
    Fecha(int,int,int);
    Fecha(long);
    void mostrarFecha();
};
//Constructor 1: 22/2/2021 ---> 20210222
Fecha::Fecha(int dia, int mes, int anio) {
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
}
//Constructor 2: cast
Fecha::Fecha(long fecha) {
    anio=int(fecha/10000);//Extraer anio
    mes=int((fecha-anio*10000)/100);//Extraer Mes
    dia=int((fecha-anio*10000-mes*100));
}
//Metodo
void Fecha::mostrarFecha() {
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main() {
    Fecha hoy=Fecha(22,2,2021);
    Fecha ayer=Fecha(20210222);
    hoy.mostrarFecha();
    ayer.mostrarFecha();
    return 0;
}*/
//Metodos Constructores y Modificadores(Getters y Setters)
/*
class Punto{
private:
    int x,y;
public:
    Punto();
    void setPunto(int,int);
    int getPuntoX();
    int getPuntoY();
};
Punto::Punto() {
}
void Punto::setPunto(int x, int y) {
    this->x=x;
    this->y=y;
}
int Punto::getPuntoX() {
    return x;
}

int Punto::getPuntoY() {
    return y;
}
int main(){
 Punto obj1=Punto();
obj1.setPunto(23,34);
cout<<obj1.getPuntoX()<<endl;
    cout<<obj1.getPuntoY()<<endl;
    return 0;
}*/
//Generado
/*
class Punto{
private:
    int x,y;

public:
    Punto();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

};

Punto::Punto() {}

int Punto::getX() const {
    return x;
}

void Punto::setX(int x) {
    Punto::x = x;
}

int Punto::getY() const {
    return y;
}

void Punto::setY(int y) {
    Punto::y = y;
}


int main(){
    Punto punto1=Punto();
    punto1.setX(2);
    cout<<punto1.getX()<<endl;
    punto1.setY(5);
    cout<<punto1.getY()<<endl;
    return 0;
}*/
//Herencia
class Persona{
private:
    string nombre;
    int edad;
public:

    Persona(const string &nombre, int edad);

    void mostrarPersona();
};

Persona::Persona(const string &nombre, int edad) : nombre(nombre), edad(edad) {}

void Persona::mostrarPersona() {
cout<<"Nombre:"<<nombre<<endl;
cout<<"Edad:"<<edad<<endl;
}
class Alumno:public Persona{
private:
    string codigoAlumno;
    float notaFinal;
public:
    Alumno(string,int,string,float);
    void mostrarAlumno();
};
Alumno::Alumno(string nombre, int edad, string codigoAlumno, float notaFinal):Persona(nombre,edad) {
    this->codigoAlumno=codigoAlumno;
    this->notaFinal=notaFinal;
}

void Alumno::mostrarAlumno() {
    mostrarPersona();
    cout<<"Codigo Alumno:"<<codigoAlumno<<endl;
    cout<<"Nota Final:"<<notaFinal<<endl;
}

int main(){
Alumno obj1=Alumno("Jairo",25,"12",90.2);
obj1.mostrarAlumno();
    return 0;
}
