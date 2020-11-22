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
        int i;

    public:
        Lista(){
            frente = nullptr;
            final = nullptr;
            tam = 0;
            i = 0;
        }
        void push_front(T d);
        void pop_front();
        T front();
        T back();
        bool empty();
        int size();
        void clear();
        void push(T d, int i);
        void pop(int i);
        void set(T d, int i);
        T get(int i);
        void push_back(T d);
        void pop_back();
        ~Lista(){
            clear();
        }
};
// Implementacion+++++++++++++++++++++++++++++++++++++++++++++++++++++++
template <class T>
void Lista<T>::push_front(T d) {
    Nodo *n = new Nodo(d);
    if(empty()) {
        frente = n;
        final = n;
    } else {
        n->siguiente= frente;
        frente = n;
    }
    
    tam++;
}
template <class T>
void Lista<T>::pop_front() {
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
void Lista<T>::push(T d, int i){
    
    Nodo *n = new Nodo(d);
    int J = i;
    int k = i;
    if(empty()){
    frente = n;
    final = n;


    }
    
    else {

    Nodo *aux = frente;
    Nodo *ant = frente;
    while(tam-1!=J){
        ant = ant->siguiente;
        J++;
    }
    while(tam!=k){
        aux = aux->siguiente;
        k++;

    }
    ant->siguiente = n;
    n->siguiente = aux;
    tam++;


    }

}

template <class T>
void Lista<T>::pop(int i){
    
    Nodo *aux = frente;
    Nodo *ant = frente;
    int J = i;
    int k = i;

    while(tam-1!=J){
        ant = ant->siguiente;
        J++;
    }

    while(tam!=k){
        aux = aux->siguiente;
        k++;

    }

    ant->siguiente = aux->siguiente;
    delete aux;
    tam--;

}


template <class T>
void Lista<T>::set(T d, int i){
    int J = i;
    if(empty()){

        std::cout<<"Nada por cambiar, lista vacia";
    }

    else{
        Nodo *aux = frente;
        while(tam!=J){
            aux = aux->siguiente;
            J++;
        }
        aux->dato = d;



    }
}


template <class T>
T Lista<T>::get(int i){
    int J= i;
    if(empty()){

        return 0;
    }
    else {

    Nodo *aux = frente;
    while(tam!=J){
        aux = aux->siguiente;
        J++;
        }
    return aux->dato;


    }
}

template <class T>
void Lista<T>::push_back(T d){
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
void Lista<T>::pop_back(){
    int j = 1;
    if(empty()){

        final = frente;
    }
    else{

        Nodo *ant = frente;
        while(j < tam-1){
        ant = ant->siguiente;
        j++;
        
        }
    Nodo *aux = final;
     final= ant;
     final->siguiente = nullptr;
    delete aux;
    tam--;
    }
    

}



#endif