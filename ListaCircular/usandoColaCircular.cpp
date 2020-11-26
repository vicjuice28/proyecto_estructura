#include <iostream>
#include "ListaCircular.hpp"

using namespace std;

int main(){

    ListaCircular <int> list;


    cout << "\n\n --------------- Insercion de elementos ---------- \n\n";
    
    list.pushFront(1);
    list.pushFront(2);
    list.pushFront(3);
    list.pushBack(4);
    list.pushBack(5);
    list.pushBack(6);
    list.pushBack(7);
    list.pushBack(8);
    
    list.push(0, 2);

    list.show();

    
    
    cout << "\n\n --------------- Eliminación de elementos ---------- \n\n";
    
    list.popFront();
    list.popFront();
    
    list.popBack();
    list.popBack();

    list.pop(2);

    list.show(); 

    cout << "\n\n --------------- Obtención de datos ---------- \n\n";
    cout << " El tamanio de la lista es de:  " << list.getSize() << endl;
    cout << " El primer dato de la lista:  " << list.getFirst() << endl;
    cout << " El ultimo dato de la lista:  " << list.getLast() << endl;
    cout << " El 2do dato de la lista:  " << list.get(2) << endl;
    

    cout << "\n\n --------------- Limpieza de la lista ---------- \n\n";
    list.clear();
    list.show();
        
    cout << "\n\n --------------- Limpieza de la lista ---------- \n\n";
    list.pushFront(1);
    list.show();

    cout << "\n\n --------------- Crecimiento de la lista ---------- \n\n";
    list.pushFront(1);
    list.pushFront(2);
    list.pushFront(3);
    list.pushFront(4);
    list.pushFront(5);
    list.pushFront(6);
    list.pushFront(7);
    list.pushFront(8);
    list.pushFront(9);
    list.pushFront(10);
    list.pushFront(11);
    list.pushFront(12);
    list.show();
    cout << "Tamanio de la lista: " << list.getSize();
    
    
    

    


        


    return 0;
}