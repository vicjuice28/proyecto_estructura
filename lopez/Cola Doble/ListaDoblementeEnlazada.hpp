#ifndef LISTADOBLEMENTEENLAZADA
#define LISTADOBLEMENTEENLAZADA
#include <stdlib.h>
#include <iostream>

using namespace std;

class ListaDoblementeEnlazada{

    private:

        class Nodo{

            public:

                int dato;
                Nodo *anterior;
                Nodo *siguiente;

                Nodo(int _dato){
                    dato = _dato;
                    anterior = nullptr;
                    siguiente = nullptr;
                }
        };
            
        Nodo *frente;
        Nodo *final;
        Nodo *auxUniversal;
        int tamanio;

    public:
            ListaDoblementeEnlazada(){
                frente = nullptr;
                final = nullptr;
                auxUniversal = nullptr;
                tamanio = 0;
            } 

        
            //
            void push(int dato, int position);
            void pushFront(int dato);
            void pushBack(int dato);

            
            bool isEmpty();
            int getSize();

            int getFirstNodo();
            int getLastNodo();

            void popFirst();
            void popLast();
            void pop(int position);

            int get(int position);
            void set(int dato, int position);

            //debería ser un metodo privado
            int searchNodo(int position);

            void showAllFromFront();
            void showAllFromBack();

            

        
};

//implementaciones

void ListaDoblementeEnlazada::pushFront(int _dato){
    Nodo *nuevoNodo = new Nodo(_dato);

    if ( isEmpty() ){
        frente = nuevoNodo;
        final = nuevoNodo;
    }
    else{
        nuevoNodo->siguiente = frente;
        frente->anterior = nuevoNodo;

    }

    frente = nuevoNodo;
    tamanio++;
}

void ListaDoblementeEnlazada::pushBack( int dato ){
    Nodo *nuevoNodo = new Nodo( dato );

    if ( isEmpty() ){
        frente = nuevoNodo;
        final = nuevoNodo;
    }
    else{
        nuevoNodo->anterior = final;
        final->siguiente = nuevoNodo;

    }

    final = nuevoNodo;
    tamanio++;
}


void ListaDoblementeEnlazada::push(int dato, int position){

    if ( position <= tamanio ){ 
        Nodo *n = new Nodo( dato );
        searchNodo(position);

        cout << "La posicion "<< position << " Está el valor :" << auxUniversal->dato <<endl;

        auxUniversal->anterior->siguiente = n;
        n->anterior = auxUniversal->anterior;
        n->siguiente = auxUniversal;
        auxUniversal->anterior = n;

        tamanio++;

    }
    else{
        cout << "No puedes insertar valores más allá de la lista";
    }

}


int ListaDoblementeEnlazada::searchNodo(int position){
    auxUniversal = frente;

    while ( position != 1 ){
        cout<<"Vuelta " << position <<endl;
        auxUniversal = auxUniversal->siguiente;
        position--;
    }
}

int ListaDoblementeEnlazada::get(int position){
    searchNodo(position);
    return auxUniversal->dato;
}

void ListaDoblementeEnlazada::set(int dato, int position){
    searchNodo(position);

    auxUniversal->dato = dato;
}


void ListaDoblementeEnlazada::pop( int position){
    if (position == 1) return popFirst();
    if (position == tamanio) return popLast();
     
    if ( position <= tamanio ){ 
        searchNodo(position);

        cout << "La posicion "<< position << " Está el valor :" << auxUniversal->dato <<endl;

        auxUniversal->anterior->siguiente = auxUniversal->siguiente;
        auxUniversal->siguiente->anterior = auxUniversal->anterior;

        tamanio--;

    }
    else{
        cout << "No puedes insertar valores más allá de la lista";
    }
}


void ListaDoblementeEnlazada::popFirst(){
    if ( !isEmpty()  ){
        Nodo *aux = frente;

        frente = frente->siguiente;
        frente->anterior = nullptr;
        delete aux;
        tamanio--;
    }
}

void ListaDoblementeEnlazada::popLast(){
    if ( !isEmpty()  ){
        Nodo *aux = final;

        final = final->anterior;
        final->siguiente = nullptr;
        delete aux;
        tamanio--;
    }
}


int ListaDoblementeEnlazada::getFirstNodo(){
    return frente->dato;
}

int ListaDoblementeEnlazada::getLastNodo(){
    return final->dato;
}


void ListaDoblementeEnlazada::showAllFromFront(){
    auxUniversal = frente;
    for ( int i = 0; i < tamanio ; i++){
        cout << auxUniversal->dato << endl;
        auxUniversal = auxUniversal->siguiente;
    }
}

void ListaDoblementeEnlazada::showAllFromBack(){
    auxUniversal = final;
    for ( int e = 0; e < tamanio ; e++){
        cout << auxUniversal->dato << endl;
        auxUniversal = auxUniversal->anterior;
    }
    
}















bool ListaDoblementeEnlazada::isEmpty(){
    return frente == nullptr;
}

int ListaDoblementeEnlazada::getSize(){
    return tamanio;
}



#endif