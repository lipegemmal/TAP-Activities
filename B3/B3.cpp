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
    cin >> sticker1.y >> sticker1.x;
    cin >> sticker2.y >> sticker2.x;

    //if sticker1 is in the right
    if(sticker1.x < N/2 + 0.5){
        sticker1_r.left_right= 1;
    }
    //else is in the left
    else
        sticker1_r.left_right = 0;
    
    //same for sticker 2
    if(sticker2.x < N/2 + 0.5)
        sticker2_r.left_right = 1;
    else
        sticker2_r.left_right = 0;

    //if sticker 1 is in the down part of the chocolate 
    if(sticker1.y < N/2 + 0.5)
        sticker1_r.above_below = 1;
    //else is in the upper part of the chocolate
    else
        sticker1_r.above_below = 0;
    
    //same for sticker 2
    if(sticker2.y < N/2 + 0.5)
        sticker2_r.above_below = 1;
    else
        sticker2_r.above_below = 0;


    //Testing if the division is possible
  //  printf("S1 x:%d  y:%d\n",sticker1.x,sticker1.y);
   // printf("S2 x:%d  y:%d\n", sticker2.x, sticker2.y);

   // printf("S1 above/below:%d   left/right:%d\n",sticker1_r.above_below, sticker1_r.left_right);
    //printf("S2 above/below:%d  left/right:%d\n",sticker2_r.above_below,sticker2_r.left_right);


    if(sticker1_r.left_right != sticker2_r.left_right || sticker1_r.above_below != sticker2_r.above_below)
        cout << "S\n";
    else
        cout << "N\n";


    return 0;
}