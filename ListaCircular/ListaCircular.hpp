#ifndef LISTA_CIRCULAR
#define LISTA_CIRCULAR

#include <iostream>
using namespace std;



template <class GENERICO>
class ListaCircular{
	private:
		int frente;
		int final;
		int tamanio;
		int capacidad;
		GENERICO *nodos;
		
		void resize();

	protected:

		//calcula la posición siguiente
		int getNextPosition(int position){
			return ((position + 1) % capacidad) ;
		}

		int getBackPosition(int position){
			int n = ((position -1 ) % capacidad);
			if ( n == -1 ){
				return 12;
			}
			return n;
		}

		


	public:
		ListaCircular(){
			capacidad = 0;
			frente = 0;
			final = capacidad - 1;
			tamanio = 0;
			nodos = new GENERICO[ capacidad ];


		}
		void pushFront(GENERICO dato);
		void pushBack(GENERICO dato);
		void push(GENERICO dato, int position);

		void popFront();
		void popBack();
		void pop(int position);
		void clear();

		void set(GENERICO dato, int position);
		GENERICO get(int position);

		int getSize();
		GENERICO getFirst();
		GENERICO getLast();
		
		int getCapacidad(){
			return capacidad;
		}


		void show(){

			if (tamanio == 0){
				cout << "Lista vacía \n";
			}
			else{
					int aux = frente;
			for ( int i = 0; i < tamanio ; i++ )
			{
				if (getNextPosition(aux) == -1){
					continue;
				}

				cout << "Posición [" << getNextPosition(aux-1) << "] = " << nodos[getNextPosition(aux-1)] << endl;

				aux++;
			}

			/*cout << "\n\nPosición frente:  " << frente << endl;
			cout << "Posición final:  " << final << endl;
			cout << "\n\n dato en la Posición frente:  " << nodos[frente] << endl;
			cout << "dato en la Posición final:  " << nodos[final] << endl;
			*/
			}

			
		}

		
		
		
		bool isEmpty();
		bool isFull();

		//void eliminar();
		//T front();
		//T back();
		//bool llena();
		//bool vacia();
		//int size();
		//void vaciar();
/*		~listacirc(){
			clear();
		}*/
	
};

template <class GENERICO>
void ListaCircular<GENERICO>::pushFront(GENERICO _dato) {

	//cout << "tamaño : " << tamanio << "  == capacidad : " << capacidad << endl;

    if( isEmpty() && !isFull() ) {
		// si es 0 entonces corresponde a un pushBack
		resize();
    }
	else if ( isFull() )
	{
		resize();
	}
	
		GENERICO *temp = new GENERICO [ capacidad ];
		temp[frente] = _dato;

		
		int h = frente;
		for ( int i = 0; i < tamanio; i++ ){

			temp[ getNextPosition(h) ] = nodos[ getNextPosition(h-1) ];
			h++;

			//cout << "Ahora : " << i << endl;	
		}

		//show();
		
		delete[] nodos;
		nodos = temp;


		tamanio++;
		final = tamanio - 1;
	

}


template <class GENERICO>
void ListaCircular<GENERICO>::pushBack(GENERICO  _dato) {
    if( isEmpty() && !isFull() ) {
       resize();
	//   cout << "ESTOY VACIA\n\n";
    }
	else if ( isFull() )
	{
		
	//   cout << "ESTOY LLENA\n\n";
		resize();
	}
	//cout << "PROCEDO A INSERTAR\n\n";
	//cout << "Voy a insertar el numero : \n\n" << _dato << endl;
	//cout << "En la posicion : \n\n" << getNextPosition(final) << endl;
	
		final = getNextPosition( final );
		nodos[ final ] = _dato;
		tamanio++;

	
}

template <class GENERICO>
void ListaCircular<GENERICO>::push(GENERICO  _dato, int _position){

	if ( isFull() ){
		resize();
	}

	int positionList = frente + _position;

	GENERICO  *temp = new GENERICO  [ capacidad ];
		temp[positionList] = _dato;

		//EL PROBLEMA ES CUANDO BORRE UN DATO Y TENGA QUE LLENAR ESOS ESPACIOS VACIOS

		for (int i = frente; i < positionList; i++){
			temp[i] = nodos[i];
		}

		for ( int i = positionList; i <= final; i++ ){
			
			temp[ getNextPosition(i) ] = nodos[ getNextPosition(i-1) ];

			//cout << "Ahora : " << i << endl;	
		}

		//show();
		
		delete[] nodos;
		nodos = temp;
		final = getNextPosition( final );
		tamanio++;



	
	//en casd de que la lista no esté llena, recorro todos los datos

	//encontrar la posicion
}


template <class GENERICO>
void ListaCircular<GENERICO>::popFront(){


	frente = getNextPosition( frente );
	
	tamanio--;
}

template <class GENERICO>
void ListaCircular<GENERICO>::popBack(){

	if ( final == 0 ){
		final = capacidad;
	}
	else
	{
		final = getBackPosition( final );
	}
	

	
	if (final == -1){
		final = 0;
	}
	
	tamanio--;
}

template <class GENERICO>
GENERICO ListaCircular<GENERICO>::get(int _position){
	int aux = frente;
			for ( int i = 0; i < tamanio ; i++ )
			{
				if (getNextPosition(aux) == -1){
					aux++;
					continue;
				}


		

				if ( _position == i ){
					return nodos[aux];
					break;
				}

				aux++;
			}

}

template <class GENERICO>
void ListaCircular<GENERICO>::set(GENERICO  _dato, int _position){
	int aux = frente;
			for ( int i = 0; i < tamanio ; i++ )
			{
				if (getNextPosition(aux) == -1){
					aux++;
					continue;
				}

				if ( _position == i ){

					nodos[aux] = _dato;
					break;
				}

				aux++;
			}

}

template <class GENERICO>
bool ListaCircular<GENERICO>::isEmpty(){
	return tamanio == 0;
}

template <class GENERICO>
bool ListaCircular<GENERICO>::isFull(){
	return tamanio == capacidad;
}


template <class GENERICO>
void ListaCircular<GENERICO>::resize(){
	
	//cout << "La capacidad actual es 0: " << capacidad << endl;
	
	int incremento = capacidad < (12 / 2) ? 
    12 : capacidad >> 1;
	/*
	int incremento;
	if ( capacidad == 0 ){
		incremento = 12;
	}else{
		if ( capacidad % 2 == 1 ){
			capacidad++;
		}
		incremento = capacidad + ( capacidad / 2 );
	}
	*/

	

	int n = capacidad;
	capacidad = capacidad + incremento;
	//cout << "La capacidad actual es: " << capacidad << endl;
	GENERICO  *temp = new GENERICO  [ capacidad ];

	for ( int i = 0; i < n; i++ ){
		temp[ i ] = nodos[ i ];
	}

	delete[] nodos;
	nodos = temp;

}

template <class GENERICO>
int ListaCircular<GENERICO>::getSize(){
	return tamanio;
}

template <class GENERICO>
void ListaCircular<GENERICO>::clear(){
	frente = 0;
	final = -1;
	tamanio = 0;
	capacidad = 0;
	delete nodos;
	nodos = new GENERICO [ capacidad ];
	
}

template <class GENERICO>
void ListaCircular<GENERICO>::pop(int _position){

	if ( _position == 0 ){
		popFront();
	}
	else if (_position == tamanio)
	{
		popBack();
	}
	else{
			int aux = frente;
			for ( int i = 0; i < tamanio ; i++ )
			{
				if (getNextPosition(aux) == -1){
					aux++;
					continue;
				}


				if ( _position == i ){
					break;
				}

				aux++;
			}
		

		int principio = tamanio - (tamanio - _position);
		GENERICO  *temp = new GENERICO  [ capacidad ];


		///llena la primera parte
		for (int i = frente; i < principio; i++){
			temp[i] = nodos[i];
		}
		
		int demas = tamanio - _position;

		for ( int i = principio; i < (demas-1); i++ ){
			
			temp[ getNextPosition(i) ] = nodos[ getNextPosition(i+1) ];

			//cout << "Ahora : " << i << endl;	
		}

		delete nodos;
		nodos = temp;
		final = getBackPosition( final );
		tamanio--;
	}

	


}

template <class GENERICO>
GENERICO ListaCircular<GENERICO>::getFirst(){
	return nodos[frente];
}

template <class GENERICO>
GENERICO ListaCircular<GENERICO>::getLast(){
	return nodos[final];
}



#endif