#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j;
    int elem[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string lixo,esq,dir,result;
    int esq_num,dir_num,result_num;
    int dif_num;

    scanf("%d",&dif_num);
    //scanf("%s + %s = %s\n",esq,dir,result);
    
    cin >> esq >> lixo >> dir >> lixo >> result;
    bool permututation;

    do{
        esq_num=0,dir_num=0,result_num=0;
        for(i=0 ; i < esq.size(); i++){
            esq_num *=10;        
            esq_num += elem[esq[i] - 'A'];
        }
        
        for(i=0 ; i< dir.size(); i++){
            dir_num *=10;
            dir_num += elem[dir[i] - 'A'];
        }

        for(i=0 ; i< result.size(); i++){
            result_num *=10;
            result_num += elem[result[i] - 'A'];
        }

        if(esq_num+dir_num == result_num)
            break;

        permututation = next_permutation(elem, elem + 10);
    }while( permututation );

    if(!permututation){
        cout << "No solution possible."<<endl;
        return 0;
    }


    for(i=0 ; i< esq.size(); i++){
        //esq[i] = (char) elem[esq[i] - 'A'];
        cout << elem[esq[i] - 'A'];
    }
        cout <<" + ";
    for(i=0 ; i< dir.size(); i++){
      //  dir[i] = (char) elem[dir[i] - 'A'];
      cout << elem[dir[i] - 'A'];
    }
        cout<<" = ";
    for(i=0 ; i< result.size(); i++ ){
        //result[i] = (char) elem[result[i] - 'A'];
        cout << elem[result[i] - 'A'];
    }
    cout<<endl;

   // cout << esq << '+' << dir << '=' << result << endl;

    return 0;
}