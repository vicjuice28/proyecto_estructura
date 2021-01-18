#ifndef STORE
#define STORE

#include <bits/stdc++.h>
#include <iostream>
#include <map>
//#include <conio.h>

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
        cout << "Sorted by Price is: -------------------------------------------- " << endl;
        if (typeOfSort == "a")
        {
            for (int i = 0; i < vector.size(); i++)
            {
                cout << vector[i].first << " --> " << vector[i].second << endl;
            }
        }
        else
        {
            for (int i = vector.size() - 1; i >= 0; i--)
            {
                cout << vector[i].first << " --> " << vector[i].second << endl;
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

        cout << " sorted by Year is: -------------------------------------------- " << endl;
        if (typeOfSort == "a")
        {
            for (int i = 0; i < vector.size(); i++)
            {
                cout << vector[i].first << " --> " << vector[i].second << endl;
            }
        }
        else
        {
            for (int i = vector.size() - 1; i >= 0; i--)
            {
                cout << vector[i].first << " --> " << vector[i].second << endl;
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
        cout << "Sorted by Name is: -------------------------------------------- " << endl;
        if (typeOfSort == "a")
        {
            for (int i = 0; i < vector.size(); i++)
            {
                cout << vector[i].first << " --> " << vector[i].second << endl;
            }
        }
        else
        {
            for (int i = vector.size() - 1; i >= 0; i--)
            {
                cout << vector[i].first << " --> " << vector[i].second << endl;
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

        cout << "registered!!!" << endl;
    }

    void showAll()
    {
        for (auto &movie : movies)
        {
            cout << movie.first << "  " << movie.second.getName() << "  " << movie.second.getDescription() << " " << movie.second.getYear() << endl;
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
            if ( movie.first == id ){
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

    void showSortByPrice(string typeOfOrder){
        map<int, int> mapOfPrice;

        for (auto &movie : movies)
        {
            mapOfPrice[movie.first] = movie.second.getPrice();
        }

        showSortByPricePrivate(mapOfPrice, typeOfOrder);
    }

    bool isEmpty(){
        return ( movies.size() == 0 ) ? true : false;
    }

    bool existMovie( int id){
        for (auto &movie : movies)
        {
            if ( movie.first == id ) return true;
        }
        return false;
    }


};





#endif