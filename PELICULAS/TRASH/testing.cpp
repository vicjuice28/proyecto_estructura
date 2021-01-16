#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> map;
    
    // It doesn't work on objects :(
    map[2] = "Fernando";

    map.insert(pair<int, string>(1, "Luis"));

    cout << map[1] << endl;
    cout << map[2];
    

    return 0;
}