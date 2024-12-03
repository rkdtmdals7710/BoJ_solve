#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>DP(12);
    DP[1]=1;
    DP[2]=2;
    DP[3]=4;
    for(int i=4; i<=11; i++)
        DP[i]=DP[i-1]+DP[i-2]+DP[i-3];
        
    while(n--){
        int num;
        cin >> num;
        cout << DP[num]<< endl;        
    }

    return 0;
}