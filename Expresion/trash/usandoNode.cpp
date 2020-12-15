#include "NODE.hpp"

using namespace std;


int main(){

    Node <string> a1(("5"));
    Node <string> a2(("3"));
    Node <string> a3(("4"));
    Node <string> a4(("2"));
    Node <string> a5(("*"));
    Node <string> a6(("*"));
    Node <string> arbol(("+"));

    
    


    a5.setLeft(a1);
    a5.setRight(a2);
    a6.setLeft(a3);
    a6.setRight(a4);
    arbol.setLeft(a5);
    arbol.setRight(a6);

    
    //arbol.getTree();    
    arbol.getTree();
}

/*
    int x = 3;
    int *right;

    right = &x;

    cout << *right;
*/