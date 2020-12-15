
#ifndef intento3_
#define intento3_
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
    int getResult(){

        //Llama a la función recurvisa y llena la lista elements
        //Si la ListaDoblemente enlazada les causa problemas pueden optar por usar una que viene con c++, linea->6
        elements.clear();
        getPostOrder(root);
        
    }




};

void ABE::setLeftNode(ABE tree){
    root->left = tree.root;
}

void ABE::setRightNode(ABE tree){
    root->right = tree.root;
}




#endif