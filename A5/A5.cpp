#include<iostream>

using namespace std;

int main(){
    int peso;

    cin >> peso;

    if(peso > 2 && peso%2 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}