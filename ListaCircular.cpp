//#ifndef LISTACIRCULAR
//#define LISTACIRCULAR

//#define CAPACIDAD_INCREMENTO 12

template <class T>
class listacirc{
	private:
		int frente;
		int final;
		int tamano;
		int capacidad;
		T *nodos;
		
		void resize();
	protected:
		int sig(int r){
			return (r+1) % capacidad;
		}
	public:
		listacirc(){
			capacidad = 5;
			frente = 0;
			final = capacidad - 1;
			tamano = 5;
			nodos = new T[capacidad];
		}
		void insertar(T d);
		void eliminar();
		T front();
		T back();
		bool llena();
		bool vacia();
		int size();
		void vaciar();
/*		~listacirc(){
			clear();
		}*/
	
};
template <class T>
void listacirc<T>::insertar(T d) {
    if(llena()) {
       resize();
    }
    final = sig(final);
    nodos[final] = d;
    tamano++;
}

template<class T>
void listacirc<T>::eliminar(){
	if(!vacia()) {
		frente = sig(frente);
		tamano--;
	}
}
template<class T>
T listacirc<T>::front(){
	if(!vacia()) return nodos[frente];
    T *t;
   	return *t;
}
template<class T>
T listacirc<T>::back(){
	if(!vacia()) return nodos[final];
	T *t;
	return *t;
}
template <class T>
bool listacirc<T>::vacia() {
    return tam == 0;
}
template<class T>
bool listacirc<T>::llena(){
	return tamano == capacidad;
}
template<class T>
int listacirc<T>:size(){
	return tamano;
}
template <class T>
void listacirc<T>::vaciar(){
	delete[] nodos;
}
/*void listacirc<T>::resize() { //vamos a hacer como si resize no existiera y mejor dejamos el arreglo con un tamaño predeterminado :))))
    int incremento = capacidad < (CAPACIDAD_INCREMENTO / 2) ? 
    CAPACIDAD_INCREMENTO : capacidad >> 1;

    int n = capacidad;
    capacidad = capacidad + incremento;
    T *temp = new T[capacidad];
    for(int i=0; i<n; i++) {
        temp[i] = nodos[i];
    }
    delete[] nodos;
    nodos = temp;
}
*/
template<class T>
void listacirc<T>::insertarfrente(){
	frente = 
	}
}
