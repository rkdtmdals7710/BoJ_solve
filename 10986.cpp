#include <iostream>
#include <vector>
using namespace std;

int modular_minus(int a, int b, int n){ // (a-b) mod n
    int tmp1 = a % n;
    int tmp2 = b % n;
    return (tmp1 - tmp2) % n;
}

int main(){
    int N, M;
    int count = 0;
    cin >> N >> M;

    vector<int> arr(N,0);
    vector<int> sum(N,0);

    for(int i = 0; i<N; i++)
        cin >> arr[i];
   
    for(int i = 1; i<N; i++)
        sum[i] = sum[i-1] + arr[i];

    for(int i = 0; i<N; i++ )
        for(int j = 0; j<N; j++){


            
        }
    



    return 0;
}