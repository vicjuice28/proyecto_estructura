#ifndef STORE
#define STORE

#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

class Movie
{
private:
    int id = 0;
    string name;
    string description;
    int year;
    float price;

public:
    Movie(int _id, string _name, string _description, int _year, float _price)
    {
        id = _id;
        name = _name;
        description = _description;
        year = _year;
        price = _price;
    }

    // GETTERS
    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    string getDescription()
    {
        return description;
    }

    int getYear()
    {
        return year;
    }

    float getPrice()
    {
        return price;
    }

    //Setters
    void setName(string newName)
    {
        name = newName;
    }

    void setDescription(string newDescription)
    {
        description = newDescription;
    }

    void setYear(int newYear)
    {
        year = newYear;
    }

    void setPrice(float newPrice)
    {
        price = newPrice;
    }
};

class Store
{
private:
    map<int, Movie> movies;

    void showHeader()
    {
        cout << setw(5);
        cout << "ID"
             << "|";

        cout << setw(30);
        cout << "Nombre"
             << "|";

        cout << setw(40);
        cout << "Descripcion"
             << "|";

        cout << setw(7);
        cout << "Precio"
             << "|";

        cout << setw(10);
        cout << "Anio"
             << "|" << endl
             << endl;
    }

    //type of sort could be "a" or "d"
    void showSortByPricePrivate(map<int, int> &map, string typeOfSort)
    {
        vector<pair<int, int>> vector;

        for (auto &it : map)
        {
            vector.push_back(it);
        }

        sort(vector.begin(), vector.end(), sortByValueInt);

        // Mostramos
        cout << "Ordenado por precio es: ---------------------------------------- " << endl;
        if (typeOfSort == "a")
        {
            showHeader();

            for (int i = 0; i < vector.size(); i++)
            {
                int _id = vector[i].first;
                cout << setw(5);
                cout << movies.at(_id).getId() << "|";

                cout << setw(30);
                cout << movies.at(_id).getName() << "|";

                cout << setw(40);
                cout << movies.at(_id).getDescription() << "|";

                cout << setw(7);
                cout << movies.at(_id).getPrice() << "|";

                cout << setw(10);
                cout << movies.at(_id).getYear() << "|" << endl;
            }
        }
        else
        {
            showHeader();

            for (int i = vector.size() - 1; i >= 0; i--)
            {
                int _id = vector[i].first;
                cout << setw(5);
                cout << movies.at(_id).getId() << "|";

                cout << setw(30);
                cout << movies.at(_id).getName() << "|";

                cout << setw(40);
                cout << movies.at(_id).getDescription() << "|";

                cout << setw(7);
                cout << movies.at(_id).getPrice() << "|";

                cout << setw(10);
                cout << movies.at(_id).getYear() << "|" << endl;
            }
        }
    }

    //type of sort could be "a" or "d"
    void showSortByYearPrivate(map<int, int> &map, string typeOfSort)
    {
        vector<pair<int, int>> vector;

        for (auto &it : map)
        {
            vector.push_back(it);
        }

        sort(vector.begin(), vector.end(), sortByValueInt);

        cout << "Ordenado por anio es : -------------------------------------------- " << endl;
        if (typeOfSort == "a")
        {
            showHeader();
            for (int i = 0; i < vector.size(); i++)
            {
                int _id = vector[i].first;
                cout << setw(5);
                cout << movies.at(_id).getId() << "|";

                cout << setw(30);
                cout << movies.at(_id).getName() << "|";

                cout << setw(40);
                cout << movies.at(_id).getDescription() << "|";

                cout << setw(7);
                cout << movies.at(_id).getPrice() << "|";

                cout << setw(10);
                cout << movies.at(_id).getYear() << "|" << endl;
            }
        }
        else
        {

            showHeader();
            for (int i = vector.size() - 1; i >= 0; i--)
            {
                int _id = vector[i].first;
                cout << setw(5);
                cout << movies.at(_id).getId() << "|";

                cout << setw(30);
                cout << movies.at(_id).getName() << "|";

                cout << setw(40);
                cout << movies.at(_id).getDescription() << "|";

                cout << setw(7);
                cout << movies.at(_id).getPrice() << "|";

                cout << setw(10);
                cout << movies.at(_id).getYear() << "|" << endl;
            }
        }
    }

    //type of sort could be "a" or "d"
    void sortByNamePrivate(map<int, string> &map, string typeOfSort)
    {
        vector<pair<int, string>> vector;

        for (auto &it : map)
        {
            vector.push_back(it);
        }

        sort(vector.begin(), vector.end(), sortByValueString);

        // Mostramos
        cout << "Ordenados por nombre : -------------------------------------------- " << endl;
        if (typeOfSort == "a")
        {
            showHeader();
            for (int i = 0; i < vector.size(); i++)
            {
                int _id = vector[i].first;
                cout << setw(5);
                cout << movies.at(_id).getId() << "|";

                cout << setw(30);
                cout << movies.at(_id).getName() << "|";

                cout << setw(40);
                cout << movies.at(_id).getDescription() << "|";

                cout << setw(7);
                cout << movies.at(_id).getPrice() << "|";

                cout << setw(10);
                cout << movies.at(_id).getYear() << "|" << endl;
            }
        }
        else
        {

            showHeader();
            for (int i = vector.size() - 1; i >= 0; i--)
            {

                int _id = vector[i].first;
                cout << setw(5);
                cout << movies.at(_id).getId() << "|";

                cout << setw(30);
                cout << movies.at(_id).getName() << "|";

                cout << setw(40);
                cout << movies.at(_id).getDescription() << "|";

                cout << setw(7);
                cout << movies.at(_id).getPrice() << "|";

                cout << setw(10);
                cout << movies.at(_id).getYear() << "|" << endl;
            }
        }
    }

public:
    static bool sortByValueString(const pair<int, string> &a, const pair<int, string> &b)
    {
        return (a.second < b.second);
    }

    static bool sortByValueInt(const pair<int, int> &a, const pair<int, int> &b)
    {
        return (a.second < b.second);
    }

    void create(int id, string name, string description, int year, float price)
    {
        Movie movie = Movie(id, name, description, year, price);
        movies.insert({id, movie});

        // //other ways to insert
        //movies.insert(pair<int, Movie>(movie.getId(), movie));

        // // it doent's worj on object
        // movies[ movie.getId() ] = movie;

        cout << "Registrado!!!" << endl;
    }

    void showAll()
    {

        showHeader();

        for (auto &movie : movies)
        {

            cout << setw(5);
            cout << movie.first << "|";

            cout << setw(30);
            cout << movie.second.getName() << "|";

            cout << setw(40);
            cout << movie.second.getDescription() << "|";

            cout << setw(7);
            cout << movie.second.getPrice() << "|";

            cout << setw(10);
            cout << movie.second.getYear() << "|" << endl;
        }
    }

    Movie find(int id)
    {
        for (auto &movie : movies)
        {
            if (movie.first == id)
                return movie.second;
        }
    }

    void remove(int id)
    {
        for (auto &movie : movies)
        {
            if (movie.first == id)
            {
                movies.erase(id);
                cout << "Eliminado con exito . . ." << endl;
                break;
            }
        }
    }

    void update(int id, string newName, string newDescription, int newYear, float newPrice)
    {
        for (auto &movie : movies)
        {
            if (movie.first == id)
            {
                if (newName != "")
                    movie.second.setName(newName);
                if (newDescription != "")
                    movie.second.setDescription(newDescription);
                if (newYear != 0)
                    movie.second.setYear(newYear);
                if (newPrice != 0)
                    movie.second.setPrice(newPrice);
            }
        }
    }

    //Sort By Name
    void showSortByName(string typeOfOrder)
    {
        map<int, string> mapOfNames;

        for (auto &movie : movies)
        {
            mapOfNames[movie.first] = movie.second.getName();
        }

        sortByNamePrivate(mapOfNames, typeOfOrder);
    }

    void showSortByYear(string typeOfOrder)

    {
        map<int, int> mapOfYear;

        for (auto &movie : movies)
        {
            mapOfYear[movie.first] = movie.second.getYear();
        }

        showSortByYearPrivate(mapOfYear, typeOfOrder);
    }

    void showSortByPrice(string typeOfOrder)
    {
        map<int, int> mapOfPrice;

        for (auto &movie : movies)
        {
            mapOfPrice[movie.first] = movie.second.getPrice();
        }

        showSortByPricePrivate(mapOfPrice, typeOfOrder);
    }

    bool isEmpty()
    {
        return (movies.size() == 0) ? true : false;
    }

    bool existMovie(int id)
    {
        for (auto &movie : movies)
        {
            if (movie.first == id)
                return true;
        }
        return false;
    }
};

#endif