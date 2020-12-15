#include <iostream>
#include "stack"

using namespace std;

int main(){

    // //ASCII

    // char simbol = '*';
    // cout << (int)simbol;






    stack <int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    cout << numbers.top() << endl;
    numbers.pop();
    cout << numbers.top() << endl;
    numbers.pop();
    cout << numbers.top() << endl;
    
    
    


    return 0;
}