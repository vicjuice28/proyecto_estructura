#ifndef COLA
#define COLA

#include <stdlib.h>



class Cola{

    private:

        //esto va adentro porque si lo ponemos afuera, nos dará errores de encapsulamiento
        class Nodo{

            public:

                int dato;
                Nodo *siguiente;
                
                Nodo(int _dato){
                    dato = _dato;
                    siguiente = nullptr;
                }
        };

        Nodo *frente;
        Nodo *final;
        int size;


    public:
        Cola(){

            //al principio los punteros apuntan a NULL
            frente = nullptr;
            final = nullptr;
            size = 0;
        }

        void push(int dato);
        void pop();
        bool isEmpty();
        int getSize();
        int getLastNodo();
        int getFirstNodo();
        void clear();

};

void Cola::push(int _dato){
    Nodo *newNodo = new Nodo(_dato);

    if ( isEmpty() == true ){
        //en caso de que la cola esté vacía
        frente = newNodo;        
    }
    else{
        //en caso de que ya haya un Nodo, accederemos con el puntero final al objeto al cual apunta y con su atributo siguiente apunsizeos al nodo que está siguiente
        final->siguiente = newNodo;
    }

    final = newNodo;
    size++;
}

//comprobar si la lista está vacía
bool Cola::isEmpty(){
    return frente == nullptr ? true : false;
}


int Cola::getSize(){
    return size;
}

int Cola::getFirstNodo(){
    return frente->dato;
}

int Cola::getLastNodo(){
    return final->dato;
}

void Cola::clear(){
    Nodo *aux = nullptr;

    while ( isEmpty() == false ){

        aux = frente;
        frente = frente->siguiente;

        delete aux;
        size--;


    }
}


void Cola::pop(){
    Nodo *aux = nullptr;

    aux = frente;
    frente = frente->siguiente;

    delete aux;
    size--;


    }



#endif