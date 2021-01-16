
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void imprimir(vector<int> X) {
    for(int i=0; i<X.size()-1; i++) {
        cout<<X.at(i)<<", ";
    }
    cout<<X.at(X.size()-1)<<endl;
}

bool ordenarDescendente(int i, int j) {
    return i > j;
}


int main(){

    vector<int> v{5,3,1,7,4,2,8,6};

    sort(v.begin(), v.end());
    imprimir(v);

    // ejemplo 2 - ordenar un vector en orden descendente
    vector<int> v2{5,3,1,7,4,2,8,6};

    sort(v2.begin(), v2.end(), ordenarDescendente);
    imprimir(v2);


    return 0;
}