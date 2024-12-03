#include <iostream>
using namespace std;

int mymin(int a, int b){
    if(a>=b)
        return b;
    else
        return a;
}

int main(){
    int DP[1001][3];
    int cost [1001][3];
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

    DP[1][0] = cost[1][0];
    DP[1][1] = cost[1][1];
    DP[1][2] = cost[1][2];

    for(int i = 2; i <= n; i++){
    DP[i][0] = cost[i][0] + mymin(DP[i-1][1], DP[i-1][2]);
    DP[i][1] = cost[i][1] + mymin(DP[i-1][0], DP[i-1][2]);
    DP[i][2] = cost[i][2] + mymin(DP[i-1][0], DP[i-1][1]);
    }


    int min = mymin(DP[n][0],DP[n][1]);
    min = mymin(min, DP[n][2]);

    cout << min << endl;

    return 0;
}
