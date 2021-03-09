#include "librerias.h"
#include<vector>
#include<cstdlib>
#include<stdexcept>

//Comentarios de una sola linea
/* Comentarios
 * multi-línea
 * */

/*class Prueba{
public :
    int midato;
void prueba(){
    auto T=[this](){};
    midato;
}
};*/
//Funciones Lambda
//son funciones anonimas que se crean en tiempo de ejecucion y no en tiempo de compilacion
void menu(int);


//mutable= (cancela const-by-value)
//Template=Plantillas
//plantilla para una funcion
/*template <class type> ret-type func-name(parameter list){
cuerpo de la funcion
}*/
//plantilla para una clase
/*template <class type> class class-name{

};*/
//Plantilla de clase stack
template <class T>
class Pila{
private:
    vector<T>elementos;
public:
    void push(T const&);
    void pop();
    T top()const;
    bool empty()const{
        return elementos.empty();
    }

};
//Declaracion de metodos implementados en plantillas
template <class T>
void Pila<T>::push(T const& elemento) {
    elementos.push_back(elemento);
}
template <class T>
void Pila<T>::pop() {
    if(elementos.empty()){
        throw out_of_range("Pila<>::pop(): pila vacia");
    }
    elementos.pop_back();
}

template <class T>
T Pila<T>::top() const{
    if(elementos.empty()){
    throw out_of_range("Pila<>::pop(): pila vacia");
    }
    return elementos.back();

}



template <typename T>
inline T const& Maximo(T const& a,T const& b){
    return a<b ? b:a;
}

int main() {
    /*int i=0;Declaracion de variable contador
    float b;Esta sentencia (float b;), se estaria ejecutando
 * int b; pero esta no porque es un comentario*/
//int b=100,c=10;
    menu(1);
    //Ejemplo de funcion lambda
    /*auto S=[](int& a)->int {
        return a+10;
    };
    auto S=[&](int& a)->int {
        b+=1;
        c+=1;
        return a+b+c;
    };
int a=10;
cout<<S(a)<<endl;
cout<<b<<endl;
cout<<c<<endl;
*/
   /* int n=0,m=0;
    [&,n](int a) mutable {m=++n+a;}(4);
    cout<<m<<endl<<n<<endl;*/
   int i=39;
   int j=20;
   cout<<"Maximo(i,j):"<<Maximo(i,j)<<endl;
    double f1=13.5,f2=20.7;
    cout<<"Maximo(f1,f2):"<<Maximo(f1,f2)<<endl;
    string str1="hola",str2="mundo";
     cout<<"Maximo(str1,st2):"<<Maximo(str1,str2)<<endl;

     try{
         Pila<int> mipila;
         Pila<string> mipilastring;
         mipila.push(7);
         cout<<mipila.top()<<endl;
         mipilastring.push("Hola Jairo");
         cout<<mipilastring.top()<<endl;
         mipilastring.pop();
       //  mipilastring.pop();
     }catch (exception const& ex){
         cout<<"Exception: "<<ex.what()<<endl;
         return -1;
     }
    return 0;
}
void menu(int x){
    cout<<"Menu Principal"<<endl;
    getch();
}