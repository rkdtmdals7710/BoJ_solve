#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a < b;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size(); i++){
        vector<int> sliced;
        
        for(int j=commands[i][0] - 1; j<=commands[i][1] - 1; j++){
            sliced.push_back(array.at(j));
        }
        
        sort(sliced.begin(), sliced.end(), cmp);
        
        answer.push_back(sliced.at(commands[i][2] - 1));
        
    }
        
    return answer;
}