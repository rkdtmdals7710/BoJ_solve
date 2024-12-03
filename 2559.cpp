#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, K;
    int sum=0;
    cin >> N >> K;

    vector<int> arr(N,0);

    for(int i = 0; i<N; i++)
        cin >> arr[i];

    for(int i = 0; i<K; i++)
        sum+=arr[i];

    int max = sum;

    for(int i = 0; i<N-K; i++){
        sum-=arr[i];
        sum+=arr[i+K];

        if(sum>max)
            max = sum;
    }

    cout << max << endl;

    return 0;
}