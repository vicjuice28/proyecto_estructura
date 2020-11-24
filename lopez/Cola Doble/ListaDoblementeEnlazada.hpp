#ifndef LISTADOBLEMENTEENLAZADA
#define LISTADOBLEMENTEENLAZADA
#include <stdlib.h>
#include <iostream>

using namespace std;

template <class GENERICO>

class ListaDoblementeEnlazada{

    private:

        class Nodo{

            public:

                GENERICO dato;
                Nodo *anterior;
                Nodo *siguiente;

                Nodo(GENERICO _dato){
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
            void push(GENERICO dato, int position);
            void pushFront(GENERICO dato);
            void pushBack(GENERICO dato);

            
            bool isEmpty();
            int getSize();

            GENERICO getFirstNodo();
            GENERICO getLastNodo();

            void popFirst();
            void popLast();
            void pop(int position);

            void clear();

            GENERICO get(int position);
            void set(GENERICO dato, int position);

            //debería ser un metodo privado
            void searchNodo(int position);

            void showAllFromFront();
            void showAllFromBack();

            

        
};

//implementaciones
template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::pushFront(GENERICO _dato){
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

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::pushBack( GENERICO dato ){
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

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::push(GENERICO dato, int position){

    if ( position <= tamanio ){ 
        Nodo *n = new Nodo( dato );
        searchNodo(position);

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

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::searchNodo(int position){
    auxUniversal = frente;

    while ( position != 1 ){
        auxUniversal = auxUniversal->siguiente;
        position--;
    }
}

template <class GENERICO>
GENERICO ListaDoblementeEnlazada<GENERICO>::get(int position){
    searchNodo(position);
    return auxUniversal->dato;
}

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::set(GENERICO dato, int position){
    searchNodo(position);
    auxUniversal->dato = dato;
}

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::pop( int position){
    if ( isEmpty() ){
        cout << "Lista vacía";
    }
    else{
        if (position == 1) return popFirst();
        if (position == tamanio) return popLast();
        if ( position <= tamanio ){ 
            
            if ( tamanio == 1 ){
                Nodo *auxx;
                
                auxx = frente;
                frente = frente->siguiente;
                delete auxx;
            }
            else{
                searchNodo(position);
                auxUniversal->anterior->siguiente = auxUniversal->siguiente;
                auxUniversal->siguiente->anterior = auxUniversal->anterior;           
            }
            tamanio--;

        }
        else{
            cout << "No puedes insertar valores más allá de la lista";
        }
    }
}

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::popFirst(){
    if ( !isEmpty()  ){
        Nodo *aux = frente;
        
        if ( tamanio == 1 ){        
                aux = frente;
                frente = frente->siguiente;
                delete aux;
        }
        else{
            frente = frente->siguiente;
            frente->anterior = nullptr;
            delete aux;
        }
        tamanio--;
    }
    else{
        cout << "Lista vacía";
    }
}

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::popLast(){
    if ( !isEmpty()  ){
        Nodo *aux = final;

        if ( tamanio == 1 ){        
                aux = frente;
                frente = frente->siguiente;
                delete aux;
        }
        else{
            final = final->anterior;
            final->siguiente = nullptr;
            delete aux;
        }
        tamanio--;

    }
    else{
        cout << "Lista vacía";
    }
}

template <class GENERICO>
GENERICO ListaDoblementeEnlazada<GENERICO>::getFirstNodo(){
    return frente->dato;
}

template <class GENERICO>
GENERICO ListaDoblementeEnlazada<GENERICO>::getLastNodo(){
    return final->dato;
}

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::showAllFromFront(){
    auxUniversal = frente;
    for ( int i = 0; i < tamanio ; i++){
        cout << auxUniversal->dato << endl;
        auxUniversal = auxUniversal->siguiente;
    }
}

template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::showAllFromBack(){
    auxUniversal = final;
    for ( int e = 0; e < tamanio ; e++){
        cout << auxUniversal->dato << endl;
        auxUniversal = auxUniversal->anterior;
    }
    
}





template <class GENERICO>
void ListaDoblementeEnlazada<GENERICO>::clear(){

    Nodo *auxx = nullptr; 

    while ( !isEmpty() ){
        auxx = frente;
        frente = frente->siguiente;
        delete auxx;

        tamanio--;
    }

    frente = nullptr;
    final = nullptr;

}







template <class GENERICO>
bool ListaDoblementeEnlazada<GENERICO>::isEmpty(){
    return frente == nullptr;
}

template <class GENERICO>
int ListaDoblementeEnlazada<GENERICO>::getSize(){
    return tamanio;
}



#endif