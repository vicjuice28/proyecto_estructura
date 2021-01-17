#include "store.hpp"


menu(){

cout<<endl<<"\tBienvenido al sistema de peliculas por Movie Store"<<endl;

}






int main()
{
    Store store = Store();

    store.create(4, "Batman vs Superman", "It's a really good movie", 2007, 20);
    store.create(1, "Come Along With Me", "It's a novel", 2008, 20);
    store.create(5, "Holis 2", "It's a really bad movie", 2009, 100);
    store.create(6, "Adios 1", "It's a really bad movie", 2009, 1000);
    store.create(7, "She only loves herself", "It's a really bad movie", 2009, 10000);
    store.create(8, "It's okay", "It's a really bad movie", 2009, 120);
    store.create(9, "Chest", "It's a really bad movie", 2009, 10);

    //  //*It works!
    //store.showAll();

    // //*It wokrs!
    cout << (store.find(1).getName()) ;

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