#include <bits/stdc++.h>


using namespace std;

typedef struct{
    //above=0 && below=1 , left =0 && right ==1;
   bool above_below;
   bool left_right;

}Cut_reference;

typedef struct{
    int x;
    int y;
}Grid_pos;


int main(){
    Cut_reference sticker1_r, sticker2_r;
    Grid_pos sticker1, sticker2;
    int N;

    cin >> N;
    cin >> sticker1.x >> sticker1.y;
    cin >> sticker2.x >> sticker2.y;

    
    if(sticker1.x < N/2){
        
    }




    return 0;
}