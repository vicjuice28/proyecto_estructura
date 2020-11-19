#include <iostream>
#include "listasimple.hpp"


using namespace std;

int main() {
    // Lista simple enlazada
    cout<<"\t***Lista simple enlazada***"<<endl;
    Lista<int> lista;
    lista.push_front(1);
    lista.push_front(2);
    lista.push_front(3); 

    cout<<lista.get(1)<<endl;
    cout<<lista.get(2)<<endl;
    cout<<lista.get(3)<<endl;

    cout<<"El tamaño es: "<< lista.size()<<endl;
    cout<<"El dato en en la posición buscada es: "<<lista.get(1)<<endl;
    lista.set(23,1);
    cout<<"El dato actualizado es: "<<lista.get(1)<<endl;
    lista.push(10,1);
    cout<<lista.get(1)<<endl;
    cout<<lista.get(2)<<endl;
    cout<<lista.get(3)<<endl;
    cout<<lista.get(4)<<endl;
    lista.pop(2);


    cout<<"\nMostrando lista desde la primera posición hasta la ultima"<<endl;
    //cout<<lista.get(1)<<endl;
    cout<<lista.get(2)<<endl;
    cout<<lista.get(3)<<endl;
    cout<<lista.get(4)<<endl;

    cout<<"\nMostrando lista desde la ultima posicion hasta la ultima"<<endl;
    
    cout<<lista.back()<<endl;
    cout<<lista.get(3)<<endl;
    cout<<lista.front()<<endl;
    
    
    cout<<"\nMostrando y eliminando elementos..."<<endl;
    cout<<lista.back()<<endl;
    lista.pop_back();
    cout<<lista.back()<<endl;
    lista.pop_back();
    cout<<lista.back()<<endl;
    lista.pop_front();
    cout<<"El tamaño es: "<<lista.size()<<endl;

    if(!lista.empty())
    cout<<lista.front()<<endl;
    else cout<<"Lista simple vacia."<<endl;

    
    

    return 0;
}