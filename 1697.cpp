#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b){
    return a ? b : a < b;
}

int min(int a, int b, int c){
    return min(a, min(b,c));
}

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> DP(100001,0);
    for(int i=0; i<=n; i++)
        DP[i] = n-i;
    
    for(int i= n+1; i<=k; i++){
        if(i%2==0)
            DP[i] = min(DP[i+1]+1,DP[i-1]+1,DP[i/2]+1);
        else
            DP[i] = min(DP[i+1]+1,DP[i-1]+1);
    }

    cout << DP[k] << endl;

    return 0;
}


