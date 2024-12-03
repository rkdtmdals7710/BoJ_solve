#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n, m, b=100;
    cin >> n >> m;

    vector<vector<int>> floor(n,vector<int>(m,0));
    int max_floor=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin >> floor[i][j];
            max_floor = max(max_floor,floor[i][j]);
        }


    while(max_floor > 0){
        int block = 0;

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                while(floor[i][j]<=max_floor)
                    block++;
                
                if(block > b){
                    max_floor--;
                    break;
                }
            }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout << floor[i][j] << " ";

        cout << endl;
    }


    return 0;
}