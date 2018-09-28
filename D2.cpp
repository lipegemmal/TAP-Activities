#include <bits/stdc++.h>

using namespace std;


int perdedor(vector<int> heap){
    int pos_atual=0;

    while(pos_atual*2+2 < heap.size()){
        if(heap[pos_atual] != heap[ (pos_atual*2) +1 ])
            pos_atual= (pos_atual*2)+1;
        
        else
            pos_atual = (pos_atual*2)+2;

    }
    

    return heap[pos_atual];
}



int main(){
    vector<int> heap;
    int n;
    int entrada;

    cin >> n;

    for(int i=1 ; i<=n ; i++){
        heap.push_back(i);
    }

    for(int i=0 ; i<n-1; i++){
        cin >> entrada;
        heap.push_back(entrada);
    }

    reverse(heap.begin(), heap.end());

        
    int resposta = perdedor(heap);

    cout << "The ultimate loser is team "<< resposta<< "."<<endl;

    return 0;
}