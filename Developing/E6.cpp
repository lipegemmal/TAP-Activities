#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<unsigned int> elem;
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

    for(size_t i=0 ; i< elem.size(); i++){
        cout << elem[i] <<" ";
    }
    cout << "\n";

    while(!elem.empty()){

        max_ring_size = __INT_MAX__;
        stack_size++;

        for(size_t i=0 ; i< elem.size() ; i++){
            if(elem[i] <= max_ring_size ){
                
                cout << "removing " << elem[i] << " in stack " << stack_size <<"\n";

                max_ring_size = elem[i] -2;
                elem.erase(elem.begin()+i);
            }
        }
       
    }

    cout << "The stack is " << stack_size << " rings tall\n";

    return 0;
}