#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m, n;
    int tmp;
    int min = 32;
    cin >> m >> n;

    vector<vector<char>> vec(m,vector<char>(n,0));

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> vec[i][j];            
       

    for(int i=0; i<m-8; i++)
        for(int j=0; j<n-8; j++){


        }

    return 0;
}