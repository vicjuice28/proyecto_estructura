#include <iostream>
#include "listasimple.hpp"


using namespace std;

int main() {
    // Lista simple enlazada
    cout<<"Lista simple enlazada"<<endl;
    Lista<int> lista;
    lista.push(1);
    lista.push(2);
    lista.push(3);
    cout<<"El tamaño es: "<< lista.size()<<endl;

    cout<<lista.front()<<endl;
    lista.pop();
    cout<<lista.front()<<endl;
    lista.pop();
    cout<<lista.front()<<endl;
    lista.pop();
    cout<<"El tamaño es: "<<lista.size()<<endl;

    if(!lista.empty())
        cout<<lista.front()<<endl;
    else cout<<"Lista simple vacia."<<endl;

    // Cola circular basada en arreglo
    //ColaCircular<int> colaCircular;
    //cout<<"Cola circular"<<endl;
    //for(int i=0;i<100;i++) {
     //   colaCircular.push(i);
    //}
   // for(int i=0;i<100;i++) {
        //cout<<colaCircular.front()<<endl;
        //colaCircular.pop();
    //}
    

    return 0;
}