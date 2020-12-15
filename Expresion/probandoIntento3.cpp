#include "Intento3.hpp"




int main(){

    ABE a1("5");
    ABE a2("3");
    ABE a3("4");
    ABE a4("2");
    ABE a5("*");
    ABE a6("*");
    ABE arbol("+");
    
    a5.setLeftNode(a1);
    a5.setRightNode(a2);
    a6.setLeftNode(a3);
    a6.setRightNode(a4);
    arbol.setLeftNode(a5);
    arbol.setRightNode(a6);
    
  
    arbol.getPost();



    return 0;
}