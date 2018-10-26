#include<iostream>

using namespace std;

int main(){
    int N;
    int soma_imp=0;
    int aux;

    cin >> N;

    for(size_t i=0 ; i< N ; i++){
        cin >> aux;
        soma_imp +=aux;
    }

    if(soma_imp%2 == 0)
        cout << "N\n";
    else
        cout << "S\n";




    return 0;
}