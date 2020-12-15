
#include "intent2.hpp"

using namespace std;


int main(){

    BBE mano(2);
    BBE pie(1);
    BBE cuerpo(5);

    


    cuerpo.setRight(mano);
    cuerpo.setLeft(pie);
  
  
    cuerpo.getAll();

}

/*
    int x = 3;
    int *right;

    right = &x;

    cout << *right;
*/