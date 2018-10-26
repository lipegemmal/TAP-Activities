#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int N;
    double A=0,B=0;
    int aux;
    cin >> N;


    for(size_t i =0; i < N ; i++){
        cin >> aux;
        
        A+= log(aux);
    }
    for(size_t i=0; i< N; i++){
        cin >> aux;
        
        B+= log(aux);
    }

    if( A> B)
        cout << "A\n" ;
    
    else
        cout << "B\n";
    



    return 0;
}