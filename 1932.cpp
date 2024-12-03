#include <iostream>
using namespace std;
int main(){
    int DP[501][501];
    int cost[501][501];
    int m = 0;
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=i; j++)    
            cin >> cost[i][j];

    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=i; j++){
            if(j==1)
                DP[i][j] = DP[i-1][j] + cost[i][j];

            else if(j==i)
                DP[i][j] = DP[i-1][j-1] + cost[i][j];

            else
                DP[i][j] = max(DP[i-1][j], DP[i-1][j-1]) + cost[i][j];
    }

    for(int i = 1; i<=n; i++){
        if(m < DP[n][i])
            m=DP[n][i];
    }
    cout << m << endl;
    return 0;
}