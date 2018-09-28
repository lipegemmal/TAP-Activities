#include <bits/stdc++.h>

using namespace std;


bool compare_strings(string crib, string coded,int start_pos, int crib_size ){
    
    int i;

    for(i=0 ; i < crib_size ; i++ ){
            if(crib[i] == coded[i + start_pos ])
                return false;
    }
    return true;

}



int main(){

    string crib;
    string coded_word;
    int n_matches=0;
    int crib_size;
    int coded_word_size;

    cin >> coded_word;
    cin >> crib;

    crib_size = crib.size();
    coded_word_size = coded_word.size(); 

    for(int i=0 ; i < coded_word_size-crib_size+1 ; i++ ){
        if( compare_strings(crib, coded_word, i, crib_size)  )
            n_matches++;
    }



    cout << n_matches <<"\n";


    return 0;
}