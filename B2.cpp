#include <bits/stdc++.h>

using namespace std;

enum maos {nothing, straight, flush, three_of_a_kind, straight_flush};

maos test_hand(pair<int, char> a[3]);
int test_strength(pair<int, char> a[3], pair<int, char> b[3]);
bool is_straight_flush(pair<int, char> a[3]);
bool is_three_of_a_kind( pair<int, char> a[3]);
bool is_flush( pair<int, char> a[3]);
bool is_straight( pair<int, char> a[3]);

int main(){
    pair<int,char> p1[3];
    pair<int,char> p2[3];
    int cata_int;
    char cata_char;
    int maop1, maop2;
    int best=0;

    //montando jogadores

    for(int i=0 ; i< 3; i++){
        scanf("%d%c",&cata_int,&cata_char);

        p1[i] = make_pair(cata_int,cata_char);

     //   cout << p1[i].first << p1[i].second <<endl;
    }  

    for(int i =0 ; i< 3 ; i++){
        scanf("%d%c", &cata_int, &cata_char);

        p2[i] = make_pair(cata_int, cata_char);

        //cout << p2[i].first << p2[i].second << endl;
    } 

    // qual jogada cada um tem?
    maop1 = test_hand(p1);
    maop2 = test_hand(p2);

    //quem é o melhor?
    if(maop1 > maop2 )
        best = 1;
    else{
        if( maop1 < maop2)
          best = 2;
        else
            best = test_strength(p1,p2); 
    }

    //mostrando resultados

    if(best == 1)
        cout << "Player 1 wins."<<endl;

    if(best == 2)
        cout << "Player 2 wins." << endl;
    
    if(best == 0)
        cout << "There is a tie." << endl;

    return 0;
}


maos test_hand(pair<int, char> a[3]){
    if (is_straight_flush(a))
        return straight_flush;

    if (is_three_of_a_kind(a))
        return three_of_a_kind;

    if (is_flush(a))
        return maos::flush;

    if (is_straight(a))
        return straight;

    return nothing;
}

bool is_straight_flush(pair<int, char> a[3]){

    if( is_straight(a) && is_flush(a) )
        return true;    

    return false;
}

bool is_three_of_a_kind(pair<int, char> a[3]){
    

    if (a[0].first == a[1].first && a[0].first == a[2].first && a[1].first == a[2].first)
        return true;

    return false;
}

bool is_flush(pair<int, char> a[3]){
    if (a[0].second == a[1].second && a[0].second == a[2].second && a[1].second == a[2].second)
        return true;
    
    return false;
}

bool is_straight(pair<int, char> a[3]){
    int vetor[3] = {a[0].first, a[1].first, a[2].first};
    int troca,i,j;

    for(i =0 ; i< 3 ; i++){
        for(j =i+1 ; j< 3 ; j++)
            if(vetor[i] > vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
    }

   // cout << "straight vector: " << vetor[0] << " " << vetor[1] << " " << vetor[2];

    if(vetor[0]+1 == vetor[1] && vetor[1]+1 == vetor[2])
            return true;
    
    return false;
}

int test_strength(pair<int, char> a[3], pair<int, char> b[3]){
    int power1 = a[0].first + a[1].first + a[2].first;
    int power2 = b[0].first + b[1].first + b[2].first;

    if(power1 > power2)
        return 1;
    if(power2 > power1)
        return 2;
    
    return 0;

}