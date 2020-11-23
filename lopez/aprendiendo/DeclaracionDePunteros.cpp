#include <iostream>

using namespace std;

int main(){

    int num, *direccion_num;

    num = 10;
    direccion_num = &num;
    

    cout << "el puntero apunta a la variable que tiene el valor de: " << *direccion_num << endl ;

    cout << "La dirección de memoria de ese número es: " << direccion_num ;


    

    return 0;
}