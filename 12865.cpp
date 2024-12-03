#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int N, K;
    int v,w;
    cin >> N >> K;
    
    vector<int> value(N+1,0);
    vector<int> weight(N+1,0);
    vector<vector<int>> DP(N+1,vector<int>(K+1,0));

    for(int i = 1; i<=N; i++){
        cin >> w >> v;
        weight[i] = w;
        value[i] = v;
    }

    for(int i = 1; i<=N; i++)
        DP[0][i] = 0;
        
    for(int i = 1; i<=N; i++)
        for(int j = 1; j<=K; j++){
            if(j-weight[i]>=0)
                DP[i][j] = max(DP[i-1][j], DP[i-1][j-weight[i]] + value[i]);

            else
                DP[i][j] = DP[i-1][j];
        }
    
    cout << DP[N][K] << endl;


    return 0;
}