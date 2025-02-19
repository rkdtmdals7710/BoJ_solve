#include <string>
#include <vector>
#include <iostream>
using namespace std;

void check_redzone(vector<vector<int>> &board, int x, int y){
    int size = board.size() - 1;
    
    for(int i = x-1; i<=x+1; i++)
        for(int j = y-1; j<=y+1; j++)
            if(0<=i && i<= size && 0<= j && j <= size)
                board[i][j] = 1;
        
}

int solution(vector<vector<int>> board) {
    int count = 0;
    
    vector<pair<int,int>> coord;
    
    int size = board.size();
    
    for(int i = 0; i<size; i++)
        for(int j = 0; j<size; j++)
            if(board[i][j] == 1)
                coord.push_back({i,j});
    
    for(auto v : coord)
        check_redzone(board,v.first, v.second);
    
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++)
            if(!board[i][j])
                count++;
    }
    return count;
}