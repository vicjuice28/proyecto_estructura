#include "ListaDoblementeEnlazada.hpp"

using namespace std;

int main(){

    ListaDoblementeEnlazada list = ListaDoblementeEnlazada();

    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);

    list.popFirst();
    list.popFirst();

    cout << list.getSize();





    
    //cout << list.getFirstNodo() << endl;
    //cout << list.getLastNodo() << endl;
    
    return 0;
}