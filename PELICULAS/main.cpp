#include "store.hpp"
#include "utils.hpp"

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
        cout << "\nIngrese un id para la pelicula: " << endl;
        cin >> ID;
        cout << "\nIngrese nombre de la pelicula: " << endl;
        cin >> nombre;
        cout << "\nIngrese descripcion de la pelicula: " << endl;
        cin >> descrip;
        cout << "Ingrese el año de la pelicula :" << endl;
        cin >> anio;
        cout << "\nIngrese el precio de la pelicula: " << endl;
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
        cout << "\nIngrese ID a modificar: " << endl;
        cin >> ID;
        cout << "\nIngrese nuevo nombre: " << endl;
        cin >> nombre;
        cout << "\nIngrese nueva descripcion: " << endl;
        cin >> descrip;
        cout << "\nIngrese nuevo año: " << endl;
        cin >> anio;
        cout << "\nIngrese nuevo precio: " << endl;
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
        cout << "\nCerrando programa....\n" << endl;
        exit(1);
        break;

    default:
        system(CLEAN);
        cout << "\n\t\t¡¡¡DIGITE UNA OPCION VALIDA!!!" << endl;
    }
    return main();

   

    // // It works!
    //store.showAll();

    // // EXIST
    // if ( store.isEmpty() ){
    //     cout << "ESTA VACIA" << endl;
    // }
    // else{
    //     cout << "NO ESTA VACIA" << endl;
    // }

    //comprobar si existe una peli en base a su id
    // if ( store.existMovie(10) ){
    //     cout << "EXISTE LA PELICULA" << endl;
    // }else{
    //     cout << "NO EXISTE" << endl;
    // }

    return 0;
}