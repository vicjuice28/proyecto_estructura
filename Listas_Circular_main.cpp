#include <iostream>
#include <cstdlib>
#include "ColaCircular.cpp"

using namespace std;

void menu1(); //declaramos las funciones a usar
void insertarInicio();
void insertarFinal();
void mostrar();
void buscarElemento();
void eliminarElemento();
void eliminarElementos();
int main(void)
{
    int op;     // opcion del menu

    do
    {
        menu1();
        cin>>op;

        switch(op)
        {
            case 1:
                    insertarInicio();
                    break;

            case 2:
                    insertarFinal();
                    break;
            case 3:
                    cout<<"\n\n Lista Circular \n\n";
                    mostrar();
                    break;

            case 4:
                    buscarElemento();
                    break;

            case 5:
                    eliminarElemento();
                    break;
            case 6:
                    eliminarElementos();
                    break;

            default: cout<<"OPCION NO VALIDA!!!";
                     break;


        }

        cout<<endl<<endl;
        system("pause");  system("cls");

    }while(op!=7);

    // Cola circular basada en arreglo
    ColaCircular<int> colaCircular;
    cout<<"Cola circular"<<endl;
    for(int i=0;i<100;i++) {
        colaCircular.push(i);
    }
    for(int i=0;i<100;i++) {
        colaCircular.pop();
    }
	system("PAUSE()");
    return 0;
}
