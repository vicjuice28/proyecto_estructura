#include <iostream>

using namespace std;

int main(){

    int position = 12;
    int capacidad = 12;
    int r =  ((position + 1) % capacidad) -1 ;

    cout << r; 

    return 0;
}