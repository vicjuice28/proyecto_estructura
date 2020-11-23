#include "weapon.hpp"
#include <iostream>

using namespace std;

int main(){

    Weapon arma1 = Weapon("9mm", 200);

    Weapon *apuntador = &arma1;

    //la "->" se utiliza para cuando nuestro puntero apunta a un objeto y queremos acceder a sus atributos o metodos.
    //Hacemos que el puntero que apunta a un objeto apunte a uno de sus atributos
    cout << "el arma se llama " << arma1.getNameOfWeapon() << " y tiene " << apuntador->getNumOfBullets() << " balas";






    return 0;
}