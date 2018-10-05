#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double n_hotdogs;
    double n_participants;

    cin >> n_hotdogs;
    cin >> n_participants;

    cout << fixed<<setprecision(2) <<n_hotdogs/n_participants << endl;
   // printf("%.2lf\n", n_hotdogs / n_participants);

        return 0;
}