#include <iostream>
#include "ListaCircular.hpp"

using namespace std;

int main(){

    ListaCircular lista;

    lista.pushFront(0);  
    lista.pushFront(1);
    lista.pushFront(2);
    lista.pushFront(4);
    lista.pushFront(5);
    lista.pushFront(6);
    lista.pushFront(7);
    lista.pushFront(9);
    lista.pushFront(10);
    lista.pushFront(11);
    lista.pushFront(12);
    
    
    
    lista.push(555, 8);
    
    
    
    

    
    
    
    
    
    //lista.pushBack(12);

    
    
    lista.show();
    cout << "\n El tamaño de la lista es: " << lista.getSize();
    //lista.pushFront(3);
    //lista.pushFront(4);
    

    //lista.show();
    //cout << "El primer nodo es: " <<lista.get2();
    //cout << "El primer nodo es: " <<lista.get3();
    

    return 0;
}