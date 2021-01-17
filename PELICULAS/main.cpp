#include "store.hpp"


 void menu(){
     int choice;
cout<<endl<<"\tBienvenido al sistema de peliculas de Movie Store"<<endl;

cout<<"\n\n1.Agregar peliculas\n2.Eliminar peliculas\n3.Editar información de una pelicula\n4.Mostrar todas las peliculas\n5.Ordenar peliculas por nombre\n6.Ordenar peliculas por año\n7.Mostrar peliculas por precio\n8.Cerrar programa"<<endl;
cout<<"\n¿Que accion desea realizar? : "<<endl;cin>>choice;

switch(choice){
    case 1:
    //Agregar pelicula
    break;
    case 2:
    //Eliminar pelicula
    break;
    case 3:
    //Editar info
    break;
    case 4:
    //Mostrar todas las peliculas
    break;
    case 5:
    //Ordenar por nombre
    break;
    case 6:
    //Ordenar por año
    break;
    case 7:
    //Ordenar por precio
    break;
    case 8:
    //Cerrar programa
    cout<<"\nGracias por utilizar el programa\nCerrando...."<<endl;
    break;
    default:
    system("clear");
    cout<<"\n\t\t¡¡¡DIGITE UNA OPCIÓN VALIDA!!!"<<endl;
    
    menu();



}

}




int main(){
    Store store = Store();

    store.create(4, "Batman vs Superman", "It's a really good movie", 2007, 20);
    store.create(1, "Come Along With Me", "It's a novel", 2008, 20);
    store.create(5, "Holis 2", "It's a really bad movie", 2009, 100);
    store.create(6, "Adios 1", "It's a really bad movie", 2009, 1000);
    store.create(7, "She only loves herself", "It's a really bad movie", 2009, 10000);
    store.create(8, "It's okay", "It's a really bad movie", 2009, 120);
    store.create(9, "Chest", "It's a really bad movie", 2009, 10);

    system("clear");
    menu();
    //  //*It works!
    //store.showAll();

    // //*It wokrs!
    //cout << (store.find(1).getName()) ;

    // //*It works!
    //store.remove(1);
    //store.showAll();

    // //* It works!
    //store.update(1, "B vs S", "tururu", 2000, 120);
    //store.showAll();

    // //* It works!
    //store.showSortByName("a");
    //store.showSortByName("d");

    // //*It works!
    //store.showSortByYear("a");
    //store.showSortByYear("d");
    
    // //* It works!
    //store.showSortByPrice("a");
    //store.showSortByPrice("d");

    // //* It works!
    //store.showSortByYear("a");
    //store.showSortByYear("d");

    // // It works!
    //store.showAll();

    return 0;
}