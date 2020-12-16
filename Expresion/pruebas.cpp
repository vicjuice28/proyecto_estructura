#include <iostream>
#include <sstream>
#include "stack"

using namespace std;

int main(){

    // //ASCII

    // char simbol = '*';
    // cout << (int)simbol;


    //convertir de string a float
    string n = "12";

    float x = stof(n);
    float y = x + 1.1;

    cout << "El resultado del numero convertido de string a float es: " << y << endl;

    string a = to_string(x);

    cout << "El numero convertido de float a string es: " + a;
    

    // stack <int> numbers;
    // numbers.push(1);
    // numbers.push(2);
    // numbers.push(3);

    // cout << numbers.top() << endl;
    // numbers.pop();
    // cout << numbers.top() << endl;
    // numbers.pop();
    // cout << numbers.top() << endl;
    
    
    


    return 0;
}