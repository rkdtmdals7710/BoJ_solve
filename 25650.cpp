#include <iostream>
#include <vector>

using namespace std;

void check_vector(vector<vector<int>>& vec, int start, int end){
    if(vec[start][end]==0){
        for(int i=start; i<=4; i++)
            cout << i << " ";
        cout << endl;

        vec[start][end]=1;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n+1,vector<int>(n+1,0));

    for(int i=1; i+m<=n; i++){
        check_vector(vec, i, i+m);
    }
    
    return 0;
}