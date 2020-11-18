#include <iostream>
#include "listasimple.hpp"


using namespace std;

int main() {
    // Lista simple enlazada
    cout<<"Lista simple enlazada"<<endl;
    Lista<int> lista;
    lista.push_back(1);
    lista.push_back(2);
    lista.push_back(3);
    cout<<"El tamaño es: "<< lista.size()<<endl;

    cout<<lista.back()<<endl;
    lista.pop_back();
    cout<<lista.back()<<endl;
    lista.pop_back();
    cout<<lista.back()<<endl;
    lista.pop_back();
    cout<<"El tamaño es: "<<lista.size()<<endl;

   // if(!lista.empty())
       // cout<<lista.front()<<endl;
   // else cout<<"Lista simple vacia."<<endl;

    
    

    return 0;
}