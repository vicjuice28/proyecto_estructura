
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
                char value;
                Node *right;
                Node *left;

                Node(char _value){
                    this->value = _value;
                    this->right = nullptr;
                    this->left = nullptr;
                }
        };  

        Node *root = nullptr;

        //Una lista para poder guardar los elementos y manejarlos 
        ListaDoblementeEnlazada <char> elements; 
    public:


    ABE(char _value){
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
    int getResult(){

        //Llama a la función recurvisa y llena la lista elements
        //Si la ListaDoblemente enlazada les causa problemas pueden optar por usar una que viene con c++, linea->6
        elements.clear();
        getPostOrder(root);

        //creacion de auxiliares
        stack <int> cola1;
        stack <int> cola2;

        int result = resolve(cola1, cola2);
        return result;

        //Mostrar lista:
        //elements.showAllFromFront();
        
    }

    int resolve(stack<int> _cola1, stack<int> _cola2){
        // asterico 42
        // suma 43
        // dividir 47
        // resta 45
        int ascii = 0;

        cout << "--------- ANTES DE ENTRAR AL BUCLE" << endl;
        elements.showAllFromFront();
        cout << "--------- ANTES DE ENTRAR AL BUCLE" << endl;
        

        while ( !elements.isEmpty() ){

            char element = elements.getFirstNodo();

            if ( element == '*' || element == '/' || element == '+' || element == '-' ){
                ascii = (int)elements.getFirstNodo();

                
            }
            else{
                ascii = (int)elements.getFirstNodo() - 48;

            }


            
            _cola1.push( ascii );

            cout << "ASCII " << ascii << endl ;

            if ( _cola2.size() == 2 ){
                _cola2.push( ascii );
                _cola1.pop();
                ascii  = _cola2.top();
                    _cola2.pop();

                    int num1 = _cola2.top();
                    _cola2.pop();
                    
                    int num2 = _cola2.top();
                    _cola2.pop();

                    cout << "La operación que se va a realiza es: " << num1 << "  " <<  ascii << "  " << num2 << endl;
                    
                    switch (ascii)
                    {
                        case 42/* Multiplicación */:
                            _cola2.push( num1 * num2 );

                            break;

                        case 43/* Suma */:
                            _cola2.push( num1 + num2 );

                            break;

                        case 45/* constant-expression */:
                            _cola2.push( num1 - num2 );
                            break;

                        case 47/* constant-expression */:
                            _cola2.push( num1 / num2 );
                            break;

                            
                        
                        default:
                            break;
                    
                    }


            }
            else{

                if ( _cola1.size() == 3 ){

                    ascii  = _cola1.top();
                        _cola1.pop();

                        int num1 = _cola1.top();
                        _cola1.pop();
                        
                        int num2 = _cola1.top();
                        _cola1.pop();
                        
                        cout << "La operación que se va a realiza es: " << num1 << "  " <<  ascii << "  " << num2 << endl;
                        



                        switch (ascii)
                        {
                        case 42/* Multiplicación */:
                            _cola2.push( num1 * num2 );

                            break;

                        case 43/* Suma */:
                            _cola2.push( num1 + num2 );

                            break;

                        case 45/* constant-expression */:
                            _cola2.push( num1 - num2 );
                            break;

                        case 47/* constant-expression */:
                            _cola2.push( num1 / num2 );
                            break;

                            
                        
                        default:
                            break;
                        }
                }
                        
            }
      

            elements.popFirst();

        }
        return _cola2.top();
    }




};

void ABE::setLeftNode(ABE tree){
    root->left = tree.root;
}

void ABE::setRightNode(ABE tree){
    root->right = tree.root;
}




#endif