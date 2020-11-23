#include <iostream>

//obtener el valor absoluto de un número

using namespace std;

//prototipo de función
template <class GENERIC>
void showABS(GENERIC num);

int main(){

    int num = 1;
    float num2 = -2.4;

    showABS(num);
    showABS(num2);

    return 0;
}

template <class GENERIC>
void showABS(GENERIC num){
    if ( num < 0 ){
        num = num * -1;
    }

    cout<< "El valor abosoluto del numero es: " << num << endl;
}