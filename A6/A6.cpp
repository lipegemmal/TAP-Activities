#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> free_seats_per_row;
    int n_rows;
    int n_seats;
    int n_requests;
    int request_size;
    int n_rejected =0;
    bool flag;

    cin >> n_rows >> n_seats >> n_requests;

    for(size_t i=0 ; i < n_rows; i++){
        free_seats_per_row.push_back(n_seats);
    }

    // allocating seats
    for(size_t i=0 ; i< n_requests; i++){
        cin >> request_size;

        flag = false;

        for(size_t j=0 ; j < n_rows ; j++) {
            if( free_seats_per_row[j] >= request_size ){
                free_seats_per_row[j] -= request_size;
                flag = true;
                break;
            }
        }

        if(flag == false)
            n_rejected++;
    
    }

    if(n_rejected == 0)
        cout << "All groups got tickets.\n";
    
    else
        cout << n_rejected << " of the "<< n_requests << " groups did not get tickets.\n";
    





    return 0;
}