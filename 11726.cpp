#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> DP(n+1);

    DP[1]=1;
    DP[2]=2;
    
    for(int i=3; i<=n; i++)
        DP[i] = (DP[i-1] % 10007 + DP[i-2] % 10007) % 10007;

    cout << DP[n] << endl;

    return 0;
}