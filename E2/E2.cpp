#include <bits/stdc++.h>


using namespace std;

int main(){
    int A =0;
    int B =0;
    int pdA =0;
    int pdB =0;
    int u =0;
    int ua=0, ub =0;
    int i;

    cin >> A >> B >> pdA >> pdB >> u ;

    A+= pdA;
    B+= pdB;

    if( (A + u) <= B ) {
        cout << "Candidate A has lost the nomination!" << endl;
        return 0;
    }

    /*
    if(A < B){
      ua = (u/2)+ (B-A);
      ub = u - ua;
      if(ua > u){
          ua = u;
          ub = 0;
      }
    }
    else{
        if(A == B){
            ua = (u/2)+1;
            ub = u - ua;
            if(ua > u){
                ua = u;
                ub = 0;
            }
        }
        else{
            if(A > B){
                ua = (u/2) + 2 - (A-B) ;
                if(ua > 0){
                 ub = u - ua;
                }
                else{
                    ua = 0;
                    ub = u ;
                }
            }
        }
    }
    */
   // printf("A:%d \n B:%d\n",A,B);
    //printf("ua:%d, \n ub:%d\n",ua,ub);
    
    for(i=0 ; i <= u ; i++){
        if( (A + i) > (B + (u-i))  )
            break;
    }
    
    cout << "Candidate A needs at least " << i <<" of the unpledged superdelegates.\n";
            

    return 0;
}