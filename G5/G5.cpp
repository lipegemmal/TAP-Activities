#include<iostream>
#include<string>

using namespace std;

int main(){

    string C;
    char compara;
    bool flag = false;

    cin >> C;

    compara = C[0];

    for(size_t i=1 ; i < C.size() ; i++ ){
        if(compara == C[i]){
            flag =true;
            break;
        }

        compara = C[i];

    }
    
    if(flag == true)
        cout << "S\n";
    
    if(flag == false)
        cout << "N\n";




    return 0;
}