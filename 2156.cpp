#include <iostream>
using namespace std;
const int MAX = 10000;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c){
    return max(max(a,b) , c);
}

int main(){
    int wine[MAX+1];
    int DP[MAX+1];
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
        cin  >> wine[i];

    DP[1] = wine[1];
    DP[2] = wine[1] + wine[2];
    DP[3] = max(wine[1] + wine[2], wine[1]+wine[3], wine[2] + wine[3]);


    for(int i = 4; i<=n; i++)
        DP[i] = max(DP[i-3] + wine[i] + wine[i-1], DP[i-2] + wine[i], DP[i-1]);
        

    cout << DP[n] << endl;


    return 0;
}