#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M;
    int n, m;
    cin >> N >> M;
    vector<unsigned long long int> num(N+1,0);
    vector<unsigned long long int> sum(N+1,0);
    
    for(int i = 1; i<=N; i++)
        cin >> num[i];
    
    for(int i = 1; i<=N; i++){
        sum[i] = sum[i-1] + num[i];
    }

    while(M--){
        scanf("%d %d", &n, &m);
		printf("%d\n", sum[m] - sum[n-1]);
    }
    

    return 0;
}