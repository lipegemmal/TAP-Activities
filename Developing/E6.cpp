#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> elem;
    int size;
    int input_elem;
    int stack_size =0;
    int max_ring_size;

    cin >> size;
    
    for(size_t i =0 ; i < size ; i++){
        cin >> input_elem;
        elem.push_back(input_elem);
    }

    
    sort(elem.begin(), elem.end());
    reverse(elem.begin(), elem.end());

   

    while(!elem.empty()){

        max_ring_size = __INT_MAX__;
        stack_size++;
        
        /*
        cout << "Stack: "<<stack_size<<"\n";

        for (size_t i = 0; i < elem.size(); i++){
            cout << elem[i] << " ";
        }
        cout <<"\n";
        */
        
        for(size_t i = 0; i < elem.size(); i++){

           // cout << "Comparing: "<< elem[i] << " e "<< max_ring_size<< "\n";
            if(elem[i] <= max_ring_size ){

                max_ring_size = elem[i] -2;
               // cout << "Entrei \n";
                //cout << "removing " << elem[i] << " in stack " << stack_size << " max ring size " << max_ring_size << "\n";
                elem.erase(elem.begin()+i);
                i--;
            }
        }
        
    
       
    }

    cout << "The stack is " << stack_size << " rings tall.\n";

    return 0;
}