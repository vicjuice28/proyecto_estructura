#include "store.hpp"
#include "utils.hpp"

Store store = Store();

int choice; int ID; string nombre; string descrip; int anio; float precio;


int main(){   

cout<<endl<<"\tBienvenido al sistema de peliculas de Movie Store"<<endl;

cout<<"\n\n1.Agregar peliculas\n2.Eliminar peliculas\n3.Editar información de una pelicula\n4.Mostrar todas las peliculas\n5.Ordenar peliculas por nombre\n6.Ordenar peliculas por año\n7.Mostrar peliculas por precio\n8.Cerrar programa"<<endl;
cout<<"\n¿Que accion desea realizar? : "<<endl;cin>>choice;
switch(choice){
    case 1:
    //Agregar peliculas
    system(CLEAN);
    cout<<"\nIngrese un id para la pelicula: "<<endl; cin>>ID;
    cout<<"\nIngrese nombre de la pelicula: "<<endl; cin>>nombre;
    cout<<"\nIngrese descripcion de la pelicula: "<<endl; cin>>descrip;
    cout<<"Ingrese el año de la pelicula :"<<endl; cin>>anio;
    cout<<"\nIngrese el precio de la pelicula: "<<endl; cin>>precio;
    store.create(ID,nombre,descrip,anio,precio);
    system(CLEAN);
    
    break;

    case 2:
    //Eliminar peliculas
    system(CLEAN);
    cout<<"\nDigite el ID de la pelicula que desea eliminar: "<<endl; cin>>ID;
    store.remove(ID);
    system(CLEAN);
    break;

    case 3:
    //Editar información
    system(CLEAN);
    cout<<"\nIngrese ID a modificar: "<<endl; cin>>ID;
    cout<<"\nIngrese nuevo nombre: "<<endl; cin>>nombre;
    cout<<"\nIngrese nueva descripcion: "<<endl; cin>>descrip;
    cout<<"\nIngrese nuevo año: "<<endl; cin>>anio;
    cout<<"\nIngrese nuevo precio: "<<endl; cin>>precio;

    store.update(ID,nombre,descrip,anio, precio);
    system(CLEAN);

    break;

    case 4:
    //Mostrar todas las peliculas
    system(CLEAN);
    store.showAll();

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
    system(CLEAN);
    cout<<"\n\tGracias por utilizar nuestro programa"<<endl;
    cout<<"\nCerrando programa...."<<endl;
    exit(1);
    break;

    default:
    system(CLEAN);
    cout<<"\n\t\t¡¡¡DIGITE UNA OPCION VALIDA!!!"<<endl;







}
return main();


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    //Store store = Store();

    //store.create(4, "Batman vs Superman", "It's a really good movie", 2007, 20);
    //store.create(1, "Come Along With Me", "It's a novel", 2008, 20);
    //store.create(5, "Holis 2", "It's a really bad movie", 2009, 100);
    //store.create(6, "Adios 1", "It's a really bad movie", 2009, 1000);
    //store.create(7, "She only loves herself", "It's a really bad movie", 2009, 10000);
    //store.create(8, "It's okay", "It's a really bad movie", 2009, 120);
    //store.create(9, "Chest", "It's a really bad movie", 2009, 10);

    
   
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