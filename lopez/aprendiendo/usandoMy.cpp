#include "COLABYLUIS.hpp"
#include <iostream>

using namespace std;

int main(){

    Cola cola = Cola();

    cout << cola.isEmpty() << endl;
    cola.push(7);
    cola.push(3);
    cola.push(8);

    
    cout<< cola.getFirstNodo() << endl;
    cout<< cola.getLastNodo() << endl;
    cout<< cola.getSize() << endl;
    cout << cola.isEmpty() << endl << endl << endl;

    cola.pop();

    cout<< cola.getFirstNodo() << endl;
    cout<< cola.getLastNodo() << endl;
    //cout<< cola.getSize() << endl;
    //cout << cola.isEmpty() << endl << endl << endl;



    
    
    



    return 0;
}