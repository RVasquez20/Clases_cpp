#include <librerias.h>
#include <stack>
//Crear la estructura del nodo
/*struct Nodo{
    int dato;
    Nodo *siguiente;
};
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);
int main() {
    //Inicializar la pila en nulo
Nodo *pila=NULL;
int n1=2,n2=12,n3=0;
agregarPila(pila,n1);
agregarPila(pila,n2);
while(pila!=NULL){
    sacarPila(pila,n3);
    if(pila!=NULL)
        cout<<n3<<" , ";
    else
        cout<<n3<<".";
}
    return 0;

}
void agregarPila(Nodo *&pila,int n){
    //instanciando un nuevo nodo
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=n;
    nuevoNodo->siguiente=pila;
    pila=nuevoNodo;
}
void sacarPila(Nodo *&pila,int &n){
    //Inicializar el aux igualandolo con pila
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;

}*/

/*Hacer un programa para agregar numeros enteros a una pila, hasta que el usuario
 * lo desee,despues mostrar todos los numeros introducidos en la pila*/

int main(){
stack<int> pila;
char opc;
int numero=0;
do{
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    fflush(stdin);
    pila.push(numero);
    fflush(stdin);
    cout<<"Desea ingresar otro numero a la pila? S/N"<<endl;
    cin>>opc;
    fflush(stdin);
}while(tolower(opc)=='s');
while(!pila.empty()){

    cout<<pila.top()<<endl;
    pila.pop();
}
for(int i=0;i<10;i++){
    pila.push(i);
}
while(!pila.empty()){
    pila.pop();
}
for(int i=0;i<10;i++){
    pila.push(i);
}
stack<int> aux;
int busqueda=0;
cout<<"Ingrese el numero a buscar"<<endl;
cin>>busqueda;
fflush(stdin);
while(!pila.empty()){
    if(pila.top()==busqueda){
     aux.push(busqueda);
     pila.pop();
     cout<<"Encntrado"<<endl;
    }
    aux.push(pila.top());
    pila.pop();
}
while(!aux.empty()){
    pila.push(aux.top());
    aux.pop();

}
while(!pila.empty()){
    cout<<pila.top()<<endl;
    pila.pop();
}


    return 0;
}