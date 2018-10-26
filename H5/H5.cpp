#include<iostream>

using namespace std;

int main(){

    double A,B;
    int n_melancias;
    int melancias_usadas=0;
    int n_somar=1;
    int n_somas=0;
    int  melancias_n_camada=1;

    cin >> A >> B;

    n_melancias = B/A;

    do{
        n_somas++;
        melancias_usadas +=melancias_n_camada;
        n_somar++;
        melancias_n_camada +=n_somar;

    }while(melancias_usadas < n_melancias);


    melancias_n_camada -=n_somar;

    if(melancias_usadas > n_melancias){
        melancias_usadas -= melancias_n_camada;
        
        //only to count the total number of iterations
        n_somas--;
    }

    /*
    cout << "n melancias" <<n_melancias << "\n";
    cout << "melancias usadas "<<melancias_usadas <<"\n";
    cout << "melancias n camada " <<melancias_n_camada << "\n";
    cout << "n somar "<< n_somar << "\n";
    */
    
    cout << n_somas<<"\n";



    return 0;
}