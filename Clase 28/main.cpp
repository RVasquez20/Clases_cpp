#include <librerias.h>
#include <queue>
class Persona{
private:
    string nombre,apellido;
    int Edad;
public:
    Persona(const string &nombre, const string &apellido, int edad) : nombre(nombre), apellido(apellido), Edad(edad) {}

    const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &nombre) {
        Persona::nombre = nombre;
    }

    const string &getApellido() const {
        return apellido;
    }

    void setApellido(const string &apellido) {
        Persona::apellido = apellido;
    }

    int getEdad() const {
        return Edad;
    }

    void setEdad(int edad) {
        Edad = edad;
    }
    void Mostrar();
};
void Persona::Mostrar() {
cout<<"Nombre:"<<nombre<<endl;
cout<<"Apellido: "<<apellido<<endl;
cout<<"Edad: "<<Edad<<endl;
cout<<"-----------------------------------"<<endl;
}
int main() {
 /*  queue<string> cola1;
   char opc;
   int i=1,j=1;
   string nombres;
    do {
            cout<<"Ingrese el nombre del cliente "<<i<<endl;
            getline(cin,nombres);
            fflush(stdin);
            cola1.push(nombres);
            cout<<"Desea Registrar a otro cliente? s/n"<<endl;
            cin>>opc;
            fflush(stdin);
            ++i;
    } while (tolower(opc)=='s');


    while(!cola1.empty()){
        cout<<"Cliente "<<j<<": "<<cola1.front()<<endl;
        cola1.pop();
        ++j;
    }

*/
 queue<Persona *> Listado;
 string nombre,apellido;
 char opc;
   int i=1,j=1;
    do {
        int Edad=0;
            cout<<"Ingrese el nombre de la persona "<<i<<endl;
            getline(cin,nombre);
            fflush(stdin);
            cout<<"Ingrese el apellido de "<<nombre<<endl;
            getline(cin,apellido);
            fflush(stdin);
            cout<<"Ingrese la edad de "<<nombre<<" "<<apellido<<endl;
            cin>>Edad;
            fflush(stdin);
            Listado.push(new Persona(nombre,apellido,Edad));

            cout<<"Desea Registrar a otro cliente? s/n"<<endl;
            cin>>opc;
            fflush(stdin);
            ++i;
    } while (tolower(opc)=='s');

    while(!Listado.empty()){
      Listado.front()->Mostrar();
        Listado.pop();

    }


    return 0;

}
