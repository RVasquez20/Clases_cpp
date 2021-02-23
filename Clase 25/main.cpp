#include <librerias.h>
//Sobrecarga de constructores
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
}
