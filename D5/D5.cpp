#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[]){
    int N;
    double result =6;

    cin >> N;

    N = N/2;

   result =  pow (result,N);

    //printf("%lf\n",result);

    printf("%.2lf\n",(1/result)*100);



    return 0;
}
