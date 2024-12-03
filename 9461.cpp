#include <iostream>
using namespace std;
const int MAX = 101;
int main(){
    long long int *DP = new long long int[MAX];
    int n;
    cin >> n;

    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 1;
    DP[3] = 1;
    DP[4] = 2;
    DP[5] = 2;
    DP[6] = 3;
    DP[7] = 4;
    DP[8] = 5;
    DP[9] = 7;
    DP[10] = 9;
    for(int i = 11; i<MAX; i++)
        DP[i] = DP[i-1] + DP[i-5];
    

    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        cout << DP[num] << endl;
    }

    delete[] DP;
    return 0;
}