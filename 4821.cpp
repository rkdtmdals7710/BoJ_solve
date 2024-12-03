#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n, m;
    int tmp;
    cin >> n >> m;

    vector<vector<int>> sum(n+1,vector<int>(n+1,0));

    for(int i=1; i<=n; i++){
        cin >> tmp;
        for(int j=1; j<=i; j++){
            sum[i][j] += tmp;

        }
    }




    return 0;
}