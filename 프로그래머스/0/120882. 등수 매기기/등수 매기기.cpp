#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

bool cmp(int a, int b){return a > b;}

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> vec;
    map<int,int> mymap;
    
    for(auto v : score)
        vec.push_back(v[0]+v[1]);
    
    sort(vec.begin(), vec.end(), cmp);
    
    for(int i=0; i<vec.size(); i++){
        if(mymap.find(vec[i])==mymap.end()){
            mymap.insert({vec[i], i + 1});
        }
    }
    
    for(auto v : score)
        answer.push_back(mymap.at(v[0] + v[1]));
    
    return answer;
}