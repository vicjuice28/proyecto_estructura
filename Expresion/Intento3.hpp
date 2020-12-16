
#ifndef intento3_
#define intento3_
#include <sstream>

#include "stack"
#include "../lopez/ColaDoble/ListaDoblementeEnlazada.hpp"
//En caso de que no les sirva la de arriba 
//#include "list"

#include <iostream>
using namespace std;


class ABE{

    private:
        class Node{
            public:
                string value;
                Node *right;
                Node *left;

                Node(string _value){
                    this->value = _value;
                    this->right = nullptr;
                    this->left = nullptr;
                }
        };  

        Node *root = nullptr;

        //Una lista para poder guardar los elementos y manejarlos 
        ListaDoblementeEnlazada <string> elements; 
    public:


    ABE(string _value){
        Node *newNode = new Node(_value);
        root = newNode;
    }

    void setLeftNode(ABE tree);
    void setRightNode(ABE tree);

    //Función recursiva que añade elementos a la lista.
    void getPostOrder(Node *aux){
        if ( aux == nullptr ) return;

        getPostOrder(aux->left);
        getPostOrder(aux->right);

        elements.pushBack(aux->value);
        
    }    


    //Aquí hagan su intento c:
    string getResult(){

        //Llama a la función recurvisa y llena la lista elements
        //Si la ListaDoblemente enlazada les causa problemas pueden optar por usar una que viene con c++, linea->6
        elements.clear();
        getPostOrder(root);

        //creacion de auxiliares
        stack <string> cola1;
        stack <string> cola2;

        string result = resolve(cola1, cola2);
        return result;
        //elements.showAllFromFront();
        
    }

     string resolve(stack<string> pila1, stack<string> pila2){
         // asterico 42
         // suma 43
         // dividir 47
         // resta 45
        string symbol = "";


         while ( !elements.isEmpty() ){

            string element = elements.getFirstNodo();
            pila1.push(element);
            

             if ( pila2.size() == 2 ){
                 //hack
                pila2.push( element );
                pila1.pop();
                
                symbol = pila2.top();
                pila2.pop();
                

                float num1 = stof(pila2.top());
                pila2.pop();
                
                float num2 = stof(pila2.top());
                pila2.pop();
                        

                    float result;
                     if ( symbol == "*" ){
                            result = ( num1 * num2 );
                        }
                        else if (symbol == "+"){
                            result = ( num1 + num2 );
                        }
                        else if (symbol == "-")
                        {
                            result = (num1 - num2);
                        }
                        else if (symbol == "/")
                        {
                           result = (num1 / num2);
                        }
                    pila2.push( to_string( result ) );

             }
             else{

                 if ( pila1.size() == 3){
                        
                        symbol = pila1.top();
                        pila1.pop();
                        

                        float num1 = stof(pila1.top());
                        pila1.pop();
                        
                        float num2 = stof(pila1.top());
                        pila1.pop();
        
                        float result;

                        if ( symbol == "*" ){
                            result = ( num1 * num2 );
                        }
                        else if (symbol == "+"){
                            result = ( num1 + num2 );
                        }
                        else if (symbol == "-")
                        {
                            result = (num1 - num2);
                        }
                        else if (symbol == "/")
                        {
                            result = (num1 / num2);
                        }
                            
                        pila2.push( to_string( result ) );

                    }           
             }
      

            elements.popFirst();

         }
         return pila2.top();
     }




};

void ABE::setLeftNode(ABE tree){
    root->left = tree.root;
}

void ABE::setRightNode(ABE tree){
    root->right = tree.root;
}




#endif