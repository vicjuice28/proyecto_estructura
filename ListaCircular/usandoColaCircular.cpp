#include <iostream>
#include "ListaCircular.hpp"

using namespace std;

int main(){

    ListaCircular lista;

    lista.pushFront(0);  
    lista.pushFront(1);
    lista.pushFront(2);
    lista.pushFront(3);
    lista.pushBack(4);
    lista.pushBack(5);
    lista.pushBack(6);
    lista.pushBack(7);
    lista.pushBack(8);
    lista.pushBack(9);
    lista.pushBack(10);
    lista.pushFront(1111);  
    lista.pushBack(1111);
    
    
    
    

    
    
    
    
    
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