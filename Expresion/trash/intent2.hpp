//CONSEJOS DEL PROFE

#ifndef intento_
#define intento_
#include "../lopez/ColaDoble/ListaDoblementeEnlazada.hpp"

#include <iostream>
using namespace std;

class BBE
{
private:
    class Node
    {
        public:
            Node *left;
            Node *right;  
            int value;
            
            Node(){
                this->left = nullptr;
                this->right = nullptr;
            }
            
    };
    Node root;

    ListaDoblementeEnlazada <int> elements;


    public:
    BBE(int _value){
        root.value = _value;
    }

    void setLeft(BBE tree){
        root.left = &(tree.root);
        cout << "Izquierda: " << root.left->value << endl;
    }

    void setRight(BBE tree){
        root.right = &(tree.root);
        cout << "Derecha: " << root.right->value << endl;
    }

    int getValue(){
        return root.value;
    }

    void getAll(){
    
    //postOrder(&root);
    //elements.showAllFromFront();

    //cout << " Elemento 1: " << root.left->left->left->value << endl;
    //cout << " Elemento 2: " << root.left->right->value << endl;
    cout << "Elemento 3: " << root.left->value << endl;
    
    //cout << " Elemento 4: " <<  root.right->right->value << endl;
    //cout << " Elemento 5: " << root.right->left->value << endl;
    cout << "Elemento 6: " << root.right->value << endl;

    cout << "Elemento 7: " << root.value << endl;

    // cout << "tamanio: " << elements.getSize();
        

    
    }

    void postOrder(Node *aux){

        if ( aux == nullptr ){
            cout << "estoy vacio "<< endl;
        }else{
            cout << "Soy el primero y tengo: " << aux->value << endl;
        }

        if ( aux == nullptr ) return;
        postOrder( aux->left );
        postOrder( aux->right );
        

        cout << "value:" << aux->value << endl;

        

    }


    


};

#endif