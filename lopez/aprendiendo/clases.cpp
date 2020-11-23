#include <iostream>
#include <conio.h>
//#include <string.h>
#include "weapon.hpp"

using namespace std;

class Person {

    //atributos
    private:
        string name;
        int age;

    public:
        //constructor
        Person(string name, int age);
        string read();
        string run();
};

//implementaciones
Person::Person(string _name, int _age){
    //el guion es para poder diferenciar a los atributos de la clase con los parametros que solicita el constructor
    name = _name;
    age = _age;
}

string Person::read(){
    return "Hi, my name is " + name + " and I'm reading";
}

string Person::run(){
    return "I can still running ";
    //
}


int main(){

    Person p1 = Person("Luis", 19);
    Weapon gun = Weapon("9mm", 100);

    cout << p1.read() << endl;
    cout << p1.run() << "Con una arma llamada " << gun.getNameOfWeapon();

    return 0;
}