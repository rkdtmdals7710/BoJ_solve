#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int checkSquare(const vector<vector<char>>& vec, int i, int j, int N, int M){
    int d = 1;
    int max_d = 0;
    while(i + d < N && j + d < M){
        if(vec[i][j] == vec[i+d][j] && vec[i][j] == vec[i][j+d] ) 
            if(vec[i][j] == vec[i+d][j+d])
                max_d = max(max_d,d);
        d++;
    }
    return max_d;
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<char>> vec(N,vector<char>(M,0));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> vec[i][j];
    int maxDistance = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            maxDistance = max(checkSquare(vec, i, j, N, M), maxDistance);

    cout << (maxDistance + 1) * (maxDistance + 1);

    return 0;
}