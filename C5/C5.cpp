#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n_neg =0;
    int n_elem;
    int k;
    int aux;
    int soma=0;

    cin >> n_elem >> k;

    for(size_t i=0 ; i< n_elem; i++){
        cin >> aux;
        if(aux < 0 )
            n_neg++;
        v.push_back(aux);
    }

    sort(v.begin(), v.end());

    if(k <= n_neg){
        for(size_t i =0 ; i < k ; i++)
            v[i] *= -1;
       
    }

    else{
        for(size_t i=0 ; i< n_neg ; i++)
            v[i] *= -1;
        k-= n_neg;

        //if k is even, all numbers stay positive
        if( k % 2 ==0)
            k=0;
        //if k is odd, k-1 is even and we lose 1 positive
        else{
            sort(v.begin(), v.end());
            v[0] *= -1;
        }
    }

    for(size_t i=0 ; i< n_elem ; i++)
        soma+= v[i];


    cout << soma << endl;

    return 0;
}