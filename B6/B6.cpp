#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){

    int A_score =0;
    int B_score =0;
    unsigned int n_plays;
    char play ;
    char current_player ='A';
    bool won = false;

    cin >> n_plays;

    for(size_t i =0 ; i< n_plays; i++){
        cin >> play;

       if(current_player == 'A'){
           
           if(play == 'A'){
               A_score++;
           }
           else{
               current_player = 'B';
           }

       }
       else{
           
           if(play == 'A'){
               current_player = 'A';
           }
           else{
               B_score++;
           }

       }

        if(A_score >= 15 || B_score >= 15){
            if(abs(A_score - B_score) >= 2 ){
                //cout << A_score<<" " << B_score <<"\n";
                won = true;
                break;
            }            
        }

    }

    if(won == false){
        cout << "The score is " << A_score << "-" << B_score << ".\n";
    }
    else{
        cout << "Team ";
        
        if(A_score > B_score)
            cout << "A";
        else
            cout << "B";
        cout << " has won the match with a score of " << A_score << "-" << B_score << ".\n";
    }


    return 0;
}