#include <iostream>
using namespace std;

const int MAX = 300;

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){
    int score[MAX+1];
    int DP[MAX+1];
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
        cin >> score[i];

    DP[0] = 0;
    DP[1] = score[1];
    DP[2] = score[1] + score[2];
    for(int i=3; i<=n-2; i++)
        DP[i] = max(DP[i-3] + score[i] + score[i-1],DP[i-2] + score[i]);

    if(DP[n-3] + score[n] + score[n-1] > DP[n-2] + score[n] )
        cout <<  DP[n-3] + score[n] + score[n-1] << endl;

    else 
        cout <<  DP[n-2] + score[n] << endl;

    return 0;
}