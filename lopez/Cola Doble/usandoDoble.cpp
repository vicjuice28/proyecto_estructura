#include "ListaDoblementeEnlazada.hpp"

using namespace std;

int main(){

    ListaDoblementeEnlazada list = ListaDoblementeEnlazada();

    list.pushFront(1);
    list.pushFront(2);
    list.pushFront(3);
    list.pushFront(4);
    list.pushFront(5);
    list.pushFront(6);
    list.pushFront(7);
    list.pushFront(8);
    list.pushFront(9);
    list.set(9000, 5);



    cout << " \n SIN BORRRAR \n";
    list.showAllFromFront();
    cout << "\n";
    list.showAllFromBack();



    
    //cout << list.getFirstNodo() << endl;
    //cout << list.getLastNodo() << endl;
    
    return 0;
}