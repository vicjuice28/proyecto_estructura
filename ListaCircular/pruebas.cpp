#include <iostream>

using namespace std;

int main(){

    /*int position =12;
    int capacidad = 12;
    int r =  ((position -1 ) % capacidad) ;
    if ( r == -1 ){
				r = 12;
			}
    cout << r; 
*/

int position = 12;
int capacidad = 12;

cout << "POSITION : " << ((position - 1) % capacidad) ;
    return 0;
}