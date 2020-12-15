//CONSEJOS DEL PROFE

#ifndef NODE_
#define NODE_
#include "../lopez/ColaDoble/ListaDoblementeEnlazada.hpp"

#include <iostream>
using namespace std;


template <class GENERIC>
class Node{
    private:
        Node *right;
        Node *left;
        GENERIC value = "";
        ListaDoblementeEnlazada <GENERIC> elements;

        Node *aux;
        

    public:
        Node(GENERIC _value){
            value = _value;
            right = nullptr;
            left = nullptr;
        }

        void setLeft(Node _node);
        void setRight(Node _Node);
        GENERIC getRightValue();
        GENERIC getLeftValue();
        GENERIC getRootValue();


        // GENERIC getDeep(){
        //     return this->getRightNode().getRootValue();
        // }

        void showPost(){
            getPostOrden();
            cout << "elemento al frente: " << elements.getFirstNodo() <<endl;
            cout << "elemento al final: " <<elements.getLastNodo() << endl;
            
            //cout << "tamanio: " <<elements.getSize() << end;
            elements.showAllFromFront();
  //          cout << "tamanio: " <<elements.getSize();
            
            
            
        }

        void getTree(){
            cout << left->left->value << endl;
            cout << left->right->value << endl;
            cout << left->value << endl;

            cout << right->right->value << endl;
            cout << right->left->value << endl;
            cout << right->value << endl;
            cout << value << endl;
            
            getPostOrden();
            elements.showAllFromFront();

            
        }

        void getPostOrden(){
            
            //RECORRIDO postORDER
            if ( aux != nullptr ){
                cout << "izquierda" << endl;
                aux = aux->aux;
                getPostOrden();
            }
            else{
                cout << "izquierda" << endl;
                elements.pushBack(aux->value);
            }
            

            if ( aux != nullptr ){
                cout << "izquierda" << endl;
                aux = aux->aux;
                getPostOrden();
            }

            else{
                cout << "izquierda" << endl;
                elements.pushBack(aux->value);
            }

            elements.pushBack(value);
            



        }


    
        



};

template <class GENERIC>
void Node<GENERIC>::setRight(Node _node){    
    
    right = &_node;
    
}

template <class GENERIC>
void Node<GENERIC>::setLeft(Node _node){    
    
    left = &_node;
    
}


template <class GENERIC>
GENERIC Node<GENERIC>::getLeftValue(){    
    return left->value;
}

template <class GENERIC>
GENERIC Node<GENERIC>::getRightValue(){    
    return right->value;
}



template <class GENERIC>
GENERIC Node<GENERIC>::getRootValue(){    
    return value;
}









#endif