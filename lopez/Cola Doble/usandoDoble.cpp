#include "ListaDoblementeEnlazada.hpp"

using namespace std;

int main(){

    ListaDoblementeEnlazada<int> list;

    list.pushBack(1); // 1
    list.pushBack(2); // 1, 2
    list.pushBack(3); // 1, 2, 3
    
    

    list.pushFront(9); //       9, 1, 2, 3;
    list.pushFront(8); //    8, 9, 1, 2, 3;
    list.pushFront(7); // 7, 8, 9, 1, 2, 3;
    


    list.popLast(); // 7, 8, 9, 1, 2
    list.popLast(); // 7, 8, 9, 1
    list.popLast(); // 7, 8, 9

    

    list.popFirst(); // 8, 9
    list.popFirst(); // 9

    

    list.pushFront(0); // 0, 9
    list.pushFront(0); // 0, 0, 9
    list.pushFront(0); // 0, 0, 0, 9

    

    list.set(10, 2); // 0, 10, 0, 9 ------- reemplaza en la posición 2
    list.pop(3); // 0, 10, 9 ---- eliminar el 0 en la posicion 3 PRIMERA PARTE
    
    cout << "\n\n ---------- PROBANDO PRIMERA PARTE ------- \n";

    list.showAllFromFront();
    

    list.push(2, 2); // 0, 2, 10, 9;

    cout << "\n\n ---------- PROBANDO SEGUNDA PARTE ------- \n";

    list.showAllFromFront();
    
    cout << "\n\n ---------- OBTENIENDO DATOS ------- \n";
    
    cout << "El dato en la posicion de enfrente es: " << list.getFirstNodo() << "\n" ;
    
    cout << "El dato en la posicion de final es: " << list.getLastNodo() << "\n" ;
    
    cout << "El dato en la posicion de 2 es: " << list.get(2) << "\n" ;
    


    cout << "\n\n ---------- LIMPIANDO LISTA ------- \n";
    
    list.clear();
    list.showAllFromFront();
    cout << "El tamaño de la lista est: " << list.getSize() << endl;


        cout << "\n\n ---------- VOLVIENDO A INSERTAR DATOS ------- \n";


    list.pushBack(1); // 1
    list.pushBack(2); // 1, 2
    list.pushBack(3); // 1, 2, 3


    list.showAllFromFront();

    
    cout << "\n\n ---------- LIMPIANDO con BACKPOP o FRONTPOP ------- \n";

    list.popFirst();
    list.popFirst();
    list.popLast();

    list.showAllFromFront();
    if ( list.isEmpty() ){
        cout << " \n\n FELICIDADES la lista está vacía";
    }

  
    
    return 0;
}