#include<iostream>
#include<string>

using namespace std;

bool isvowel(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return true;
    return false;
}


int main(){

    string ab = "ab";
    string word;

    cin >> word;
    //getline(cin,word);


    for(size_t i=0 ; i< word.size(); i++){
        if( isvowel( word[i] )){
            word.insert(i,ab);
            i+=2;
        }
    }

    cout << word <<"\n";


    return 0;
}