#include <iostream>
using namespace std;
const int MAX = 1000000;
int min(int a, int b){
    if(a>b)
        return b;
    else
        return a;
}

int min(int a, int b, int c){
    int tmp = min(a,b);
    if(tmp > c)
        return c;
    else
        return tmp;
}

int main(){
    int* DP = new int[MAX + 1];
    int n;
    cin >> n;

    DP[1] = 0;
    DP[2] = 1;
    DP[3] = 1;

    for(int i = 4; i<=n; i++){
        if(i%2==0 && i%3==0)
            DP[i] = min(DP[i-1], DP[i/2], DP[i/3]) + 1;
        else if(i%2==0&&i%3!=0)
            DP[i] = min(DP[i-1], DP[i/2]) + 1;
        else if(i%2!=0&&i%3==0)
            DP[i] = min(DP[i-1], DP[i/3]) + 1;
        else
            DP[i] = DP[i-1] + 1;
    }

    cout << DP[n] << endl;


    return 0;
}