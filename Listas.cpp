#include <iostream>
#include "listasimple.hpp"


using namespace std;

int main() {
    // Lista simple enlazada
    cout<<"Lista simple enlazada"<<endl;
    Lista<int> lista;
    lista.push_front(1);
    lista.push_front(2);
    lista.push_front(3);
    cout<<"El tamaño es: "<< lista.size()<<endl;

    cout<<lista.front()<<endl;
    lista.pop_front();
    cout<<lista.front()<<endl;
    lista.pop_front();
    cout<<lista.front()<<endl;
    lista.pop_front();
    cout<<"El tamaño es: "<<lista.size()<<endl;

    if(!lista.empty())
        cout<<lista.front()<<endl;
    else cout<<"Lista simple vacia."<<endl;

    
    

    return 0;
}