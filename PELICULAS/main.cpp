#include "store.hpp"
#include "utils.hpp"

//
#include <limits>
#include <ios>

Store store = Store();

int choice;
int ID;
string nombre;
string descrip;
int anio;
float precio;
int orden;

int main()
{

    // Agregar Peliculas por defecto

    cout << endl
         << "\tBienvenido al sistema de peliculas de Movie Store" << endl;

    cout << "\n\n1.Agregar peliculas\n2.Eliminar peliculas\n3.Editar información de una pelicula\n4.Mostrar todas las peliculas\n5.Ordenar peliculas por nombre\n6.Ordenar peliculas por año\n7.Mostrar peliculas por precio\n8.Cerrar programa" << endl;
    cout << "\n¿Que accion desea realizar? : " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        //Agregar peliculas
        system(CLEAN);
        cout << "\nIngrese un id para la pelicula: ";
        cin >> ID;
        //fIX PROBLEM BETWEEN CIN AND GETLINE
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nIngrese nombre de la pelicula: ";
        getline(cin, nombre);
        cout << "\nIngrese descripcion de la pelicula: ";
        getline(cin, descrip);
        cout << "\nIngrese el año de la pelicula :";
        cin >> anio;
        cout << "\nIngrese el precio de la pelicula: ";
        cin >> precio;
        store.create(ID, nombre, descrip, anio, precio);
        system(CLEAN);

        break;

    case 2:
        //Eliminar peliculas
        system(CLEAN);
        cout << "\nDigite el ID de la pelicula que desea eliminar: " << endl;
        cin >> ID;
        store.remove(ID);
        system(CLEAN);
        break;

    case 3:
        //Editar información
        system(CLEAN);
        cout << "\nIngrese ID a modificar: ";
        cin >> ID;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nIngrese nuevo nombre: ";
        getline(cin, nombre);
        cout << "\nIngrese nueva descripcion: ";
        getline(cin, descrip);
        cout << "\nIngrese nuevo año: ";
        cin >> anio;
        cout << "\nIngrese nuevo precio: ";
        cin >> precio;

        store.update(ID, nombre, descrip, anio, precio);
        system(CLEAN);

        break;

    case 4:
        //Mostrar todas las peliculas
        system(CLEAN);
        store.showAll();

        break;

    case 5:
        //Ordenar por nombre
        system(CLEAN);
        cout << "\tEscriba 1 para ordenar de forma Ascendente o 2 para ordenar de forma Descendente: " << endl;
        cin >> orden;
        if (orden == 1)
        {

            store.showSortByName("a");
            break;
        }
        if (orden == 2)
        {
            store.showSortByName("d");
            break;
        }
        else
        {
            cout << "\n\t¡¡¡Digite correctamente la opcion que desea!!!" << endl;
        }
        break;

    case 6:
        //Ordenar por año
        system(CLEAN);
        cout << "\tEscriba 1 para ordenar de forma Ascendente o 2 para ordenar de forma Descendente: " << endl;
        cin >> orden;
        if (orden == 1)
        {

            store.showSortByYear("a");
            break;
        }
        if (orden == 2)
        {
            store.showSortByYear("d");
            break;
        }
        else
        {
            cout << "\n\t¡¡¡Digite correctamente la opcion que desea!!!" << endl;
        }
        break;

    case 7:
        //Ordenar por precio
        system(CLEAN);
        cout << "\tEscriba 1 para ordenar de forma Ascendente o 2 para ordenar de forma Descendente: " << endl;
        cin >> orden;
        if (orden == 1)
        {

            store.showSortByPrice("a");
            break;
        }
        if (orden == 2)
        {
            store.showSortByPrice("d");
            break;
        }
        else
        {
            cout << "\n\t¡¡¡Digite correctamente la opcion que desea!!!" << endl;
        }
        break;

    case 8:
        //Cerrar programa
        system(CLEAN);
        cout << "\n\tGracias por utilizar nuestro programa" << endl;
        cout << "\nCerrando programa....\n"
             << endl;
        exit(1);
        break;

    case 100:
        store.create(1, "Víctor y la casa de papel", "Bored", 1999, 2);
        store.create(2, "La llegada", "10 de 10", 2019, 1200);
        store.create(3, "El despertar de Fernando", "+18", 2001, 3000);
        store.create(4, "La letra N", "buuu", 2012, 1000);
        store.create(5, "La pelicula", "meh", 2015, 1200);
        system(CLEAN);

        break;

    default:
        system(CLEAN);
        cout << "\n\t\t¡¡¡DIGITE UNA OPCION VALIDA!!!" << endl;
    }

    return main();

    return 0;
}