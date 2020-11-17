#ifndef LISTA_SIMPLE
#define LISTA_SIMPLE

template <class T>
class Lista {
    private:
        class Nodo {
            public:
                T dato;
                Nodo *siguiente;
                Nodo(T dato) {
                    this->dato = dato;
                    this->siguiente = nullptr;
                }
        };
        Nodo *frente;
        Nodo *final;
        int tam;

    public:
        Lista(){
            frente = nullptr;
            final = nullptr;
            tam = 0;
        }
        void push(T d);
        void pop();
        T front();
        T back();
        bool empty();
        int size();
        void clear();
        void push_i(T d);
        void pop_i();
        void update_i(T d);
        T show_i();
        ~Lista(){
            clear();
        }
};
// implementacion
template <class T>
void Lista<T>::push(T d) {
    Nodo *n = new Nodo(d);
    if(empty()) {
        frente = n;
    } else {
        final->siguiente = n;
    }
    final = n;
    tam++;
}
template <class T>
void Lista<T>::pop() {
    Nodo *aux = frente;
    frente = frente->siguiente;
    delete aux;
    tam--;
}
template <class T>
T Lista<T>::front() {
    return frente->dato;
}
template <class T>
T Lista<T>::back() {
    return final->dato;
}
template <class T>
bool Lista<T>::empty() {
    return frente == nullptr;
}
template <class T>
int Lista<T>::size() {
    return tam;
}
template <class T>
void Lista<T>::clear() {
    Nodo *aux = nullptr;
    while(!empty()){
        aux = frente;
        frente = frente->siguiente;
        delete aux;
        tam--;
    }
}

template <class T>
void Lista<T>::push_i(T d){

    //Falta por agregar
}

template <class T>
void Lista<T>::pop_i(){

    //Falta por agregar
}


template <class T>
void Lista<T>::update_i(T d){

    //Falta por agregar
}


template <class T>
T Lista<T>::show_i(){

    //Falta por agregar
}

#endif