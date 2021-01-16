// C++ program for the above approach 
  
#include <bits/stdc++.h> 
using namespace std; 
  
// Comparator function to sort pairs 
// according to second value 
bool cmp(pair<string, int>& a, 
         pair<string, int>& b) 
{ 
    return a.second > b.second; 
} 
  
// Function to sort the map according 
// to value in a (key-value) pairs 
void sortx(map<string, int>& map) 
{ 
  
    // Declare vector of pairs 
    vector<pair<string, int> > vector; 
  
    // Copy key-value pair from Map 
    // to vector of pairs

    //vaciamos datos al vector, se copia la clave y el valor;
    for (auto& it : map) { 
        vector.push_back(it); 
    } 
  
    // usamos el metodo sort, y pasamos el principio, el final y el comparador
    sort(vector.begin(), vector.end(), cmp); 
  
    // Mostramos
    for (auto& it : map) { 
  
        cout << it.first << ' '
             << it.second << endl; 
    } 
} 


  
// Driver Code 
int main() 
{ 
  
    // Declare Map 
    map<string, int> map; 
  
    // Given Map 
    map = { { "Angelica", 3 }, 
          { "Luis", 2 }, 
          { "Alfredo", 6 }, 
          { "Fernando", 4 }, 
          { "Carlos", 3 }, 
          
          }; 
  
    // Function Call 
    sortx(map); 
    return 0; 
} 




























// C++ program for the above approach 
  
// #include <bits/stdc++.h> 
// using namespace std; 
  
// // Comparator function to sort pairs 
// // according to second value 
// bool cmp(pair<int, string>& a, 
//          pair<int, string>& b) 
// { 
//     return a.second > b.second; 
// } 
  
// // Function to sort the map according 
// // to value in a (key-value) pairs 
// void sortx(map<int, string>& map) 
// { 
  
//     // Declare vector of pairs 
//     vector<pair<int, string> > vector; 
  
//     // Copy key-value pair from Map 
//     // to vector of pairs

//     //vaciamos datos al vector, se copia la clave y el valor;
//     for (auto& it : map) { 
//         vector.push_back(it); 
//     } 
  
//     // usamos el metodo sort, y pasamos el principio, el final y el comparador
//     sort(vector.begin(), vector.end(), cmp); 
  
//     // Mostramos
//     for (auto& it : map) { 
  
//         cout << it.first << ' '
//              << it.second << endl; 
//     } 
// } 




