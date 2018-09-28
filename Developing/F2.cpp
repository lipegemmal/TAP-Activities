#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    uint n_articles;
    uint n_references;
    uint contador=0;
    uint aux;
    uint artigo_pos,referencia_pos;
    int map_index;
    string ref_string;

    map<string, int> mapa;
    vector<int> lista[20];

    cin >> n_articles;

    for(size_t i=0 ; i < n_articles ; i++  ){
        
        cin >>ref_string; 
        cin >> aux;

        if( mapa.count(ref_string) == 0){
            mapa[ref_string] = contador;
            artigo_pos = contador;
            contador++;

        }
        else{
            artigo_pos = mapa.find(ref_string)->second;
        }

        for(size_t j=0 ; j < aux ; j++){
            cin >> ref_string;

            if (mapa.count(ref_string) == 0)
            {
                mapa[ref_string] = contador;
                referencia_pos = contador;
                contador++;
            }
            else{
                referencia_pos = mapa.find(ref_string)->second;
            }

            lista[artigo_pos].push_back(referencia_pos);
        }
    }

    vector<uint>



    return 0;
}
