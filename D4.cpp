#include<iostream>

using namespace std;


int main(){
    unsigned int n_wins=0;
    unsigned int n;
    int entrada;

    cin >> n;

    for(size_t i =0 ; i < n ; i++ ){

        cin >> entrada;
        if(entrada != 1)
            n_wins++;

    }

    cout << n_wins <<"\n";


    return 0;
}