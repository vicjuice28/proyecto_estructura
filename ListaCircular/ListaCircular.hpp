#ifndef LISTA_CIRCULAR
#define LISTA_CIRCULAR

#include <iostream>
using namespace std;


class ListaCircular{
	private:
		int frente;
		int final;
		int tamanio;
		int capacidad;
		int *nodos;
		
		void resize();

	protected:

		//calcula la posición siguiente
		int getNextPosition(int position){
			return (position + 1) % capacidad;
		}


	public:
		ListaCircular(){
			capacidad = 0;
			frente = 0;
			final = capacidad - 1;
			tamanio = 0;
			nodos = new int[ capacidad ];


		}
		void pushFront(int dato);
		void pushBack(int dato);
		void push(int dato, int position);
		

		int getSize();


		void show(){
			for ( int i = 0; i < tamanio; i++ ){
				cout << "Posición [" << i << "] = " << nodos[i] << endl;
			}

			cout << "\n\nPosición 0:  " << nodos[0] << endl;
			cout << "Posición final:  " << nodos[final] << endl;
			
		}

		void showah(){
			int h=0;
			for ( int i = frente; i < tamanio; i++ ){
			
			

				if ( i > capacidad ){
					h = i - capacidad;
					cout << "SOY MAYOR QUE LA LISTA AHHHHHHHHH";
				}else{
					h = i;
				}

				cout << "Posición [" << h << "] = " << nodos[h] << endl;
			}

			cout << "\n\nPosición 0:  " << nodos[frente] << endl;
			cout << "Posición final:  " << nodos[final] << endl;
			
			

			//cout << "Ahora : " << i << endl;	
		
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


void ListaCircular::pushFront(int _dato) {

	//cout << "tamaño : " << tamanio << "  == capacidad : " << capacidad << endl;

    if( isEmpty() && !isFull() ) {
		// si es 0 entonces corresponde a un pushBack
		resize();
    }
	else if ( isFull() )
	{
		resize();
	}
	
		int *temp = new int [ capacidad ];
		temp[0] = _dato;

		

		for ( int i = 0; i < tamanio; i++ ){

		
			temp[ i + 1 ] = nodos[ i ];

			//cout << "Ahora : " << i << endl;	
		}

		//show();
		
		delete[] nodos;
		nodos = temp;


		tamanio++;
		final = tamanio - 1;
	

}

void ListaCircular::pushBack(int _dato) {
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


void ListaCircular::push(int _dato, int _position){

	if ( isFull() ){
		resize();
	}

	int positionList = frente + _position;
	cout << "La posición en la que se va insertar es: " << positionList << endl;

	int *temp = new int [ capacidad ];
		temp[positionList] = _dato;

		//EL PROBLEMA ES CUANDO BORRE UN DATO Y TENGA QUE LLENAR ESOS ESPACIOS VACIOS

		for (int i = frente; i < positionList; i++){
			temp[i] = nodos[i];
		}

		int h;
		for ( int i = positionList; i < tamanio; i++ ){
			
			

			if ( i > capacidad ){
				h = i - capacidad;
				cout << "SOY MAYOR QUE LA LISTA AHHHHHHHHH";
			}else{
				h = i;
			}

			cout << "Ahora tempo [" << h+1 << "] --- y --- nodos [ " << h << "] ---"<<endl;
			temp[ h + 1 ] = nodos[ h ];

			//cout << "Ahora : " << i << endl;	
		}

		//show();
		
		delete[] nodos;
		nodos = temp;


		tamanio++;
		final = getNextPosition( h );



	
	//en casd de que la lista no esté llena, recorro todos los datos

	//encontrar la posicion
}




bool ListaCircular::isEmpty(){
	return tamanio == 0;
}
bool ListaCircular::isFull(){
	return tamanio == capacidad;
}


void ListaCircular::resize(){
	
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
	int *temp = new int [ capacidad ];

	for ( int i = 0; i < n; i++ ){
		temp[ i ] = nodos[ i ];
	}

	delete[] nodos;
	nodos = temp;

}

int ListaCircular::getSize(){
	return tamanio;
}


#endif