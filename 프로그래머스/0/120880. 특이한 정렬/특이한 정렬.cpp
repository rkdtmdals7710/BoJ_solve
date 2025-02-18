#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int>p2){
    if(p1.second == p2.second)
        return p1.first > p2.first;
    else
        return p1.second < p2.second;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int,int>> vec;
    
    for(auto v : numlist)
       vec.push_back({v, abs(n-v)});
        
    sort(vec.begin(), vec.end(), cmp);
    
    for(auto v : vec)
        answer.push_back(v.first);
    
    return answer;
}