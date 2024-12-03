//SOLVED
#include <iostream>
using namespace std;

const int MAX = 1000000;


int main(){
    int *DP = new int[MAX+1];
    int n;
    cin >> n;
    DP[1] = 1;
    DP[2] = 2;

    for(int i = 3; i<MAX+1; i++)
        DP[i] = (DP[i-1]  + DP[i-2]) % 15746;


    cout << DP[n] << endl;
    delete[] DP;
    return 0;
}