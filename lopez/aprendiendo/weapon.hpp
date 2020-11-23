#ifndef WEAPON
#define WEAPON
#include <string>


class Weapon{

    private:
        std::string name;
        int numOfBullets;

    public:
        Weapon(std::string name, int numOfBullets);
        std::string getNameOfWeapon();
        int getNumOfBullets();


};

Weapon::Weapon(std::string _name, int _numOfBullets){
    name = _name;
    numOfBullets = _numOfBullets;
}

std::string Weapon::getNameOfWeapon(){
    return name;
}

int Weapon::getNumOfBullets(){
    return numOfBullets;
}


#endif