#include <iostream>
#include "listasimple.hpp"


using namespace std;

int main() {
    Lista<int> lista;
    lista.push_front(1);
    lista.push_front(2);
    lista.push_front(3);

    lista.pop_front();
    lista.pop_front();
    lista.pop_front();
     
    cout << lista.size();

    return 0;
}