#include <iostream>

using namespace std;

int main(){

    int num, num2;
    num = 10, num2 = 20;
    int *direccion1 = &num;
    int *direccion2 = direccion1;
    int *direccion3 = direccion2;
    int *direccion4 = direccion3;

    int direccionx = &num2;

    direccion4 -> direccionx = 10000;

cout << "El puntero 4 apunta hacia el puntero 1 que apunta a la variable \n numero que tiene el valor de: " << *direccion4;
        

    return 0;
}