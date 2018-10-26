#include<iostream>
#include <stdio.h>
#include<bitset>
#include<vector>

using namespace std;

int main(){

    bitset<10000> test;
    bitset<10000> base;
    //Now the interruptors are all off (0)
    
    unsigned int n_interruptores;
    unsigned int n_lampadas;
    int n_iterations =0;
    vector< vector<int> > lights;
    unsigned int elem_to_flip;
    unsigned int aux;


    cin >> n_interruptores;
    cin >> n_lampadas;

    //   getting/setting base state of lamps
    cin >> aux;
    for(size_t i=0 ; i< aux; i++){
        cin >>elem_to_flip;
        test.flip(elem_to_flip);
        base.flip(elem_to_flip);
    }

    
    lights.resize(n_interruptores+1);
   
    //getting interruptors states
    for(size_t i=0 ; i< n_interruptores; i++){
        cin >> elem_to_flip;
       
        for(size_t j=0 ; j< elem_to_flip; j++){
            cin >> aux;
            lights[i].push_back(aux); 
        }
    
    }

    
    //iterating to find solution
    
    int i=0;
    int j=0;
    do{
         
        for(j=0; j< lights[i].size(); j++){
                test.flip( lights[i][j] );
        }
        n_iterations++;

        if(i == n_interruptores-1 && test == base){
            n_iterations = -1;
            break;
        }

        i= (i+1) % n_interruptores;

    }while( test.any() != 0 );

    cout << n_iterations << "\n";


    return 0;
}
