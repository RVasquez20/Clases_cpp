#include <librerias.h>
#include "Calcu.h"
//Namespace
/**
 *
 * un namespace, no es mas que una forma de crear un bloque, y que todas las funciones
 * que esten dentro de el, esten asociadas a ese namespace(espacio de nombres) al cual se le
 * asigna un nombre para identificarlo
 *@authqor Rodrigo
 */
/**
 *
 * @return a+b
 */
 //Ejemplo
int menu(int i);

/*namespace trigonometria{
     int suma(int a,int b){
         return a+b;
     }
 }
namespace aritmetica{
     int resta(int a,int b){
         return a-b;
     }
 }
 using namespace trigonometria;*/
int main() {
    cout<<menu(1)<<endl;
cout<<suma(5,6)<<endl;
cout<<resta(11,6)<<endl;
cout<<multiplicacion(11,6)<<endl;
cout<<division(11,6)<<endl;
    return 0;
}
/**
 * esta funcion recibe:
 * @param i un numero entero
 * @return y nos devuelve ese mismo numero
 */
int menu(int i) {
return i;
}
/*ficheros
 * POO
 * pilas y colas
 * recursividad
 * archivos
 * template
 * lambda
 * documetacion
 * gotoxy
 * login-->lunes
 * */