#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

bool cmp2(pair<int, int> p1, pair<int,int>p2){
    return p1.second > p2.second;
}

int solution(vector<int> array) {
    sort(array.begin(), array.end(), cmp);
    
    vector<pair<int, int>> vec;
    vec.push_back({array[0],1});
    
    for(int i = 1; i<array.size(); i++){
        if(array[i]!=array[i-1])
            vec.push_back({array[i],1});
        else
            vec[vec.size() - 1].second ++;
    }
    
    sort(vec.begin(), vec.end(), cmp2);
    
    if(vec[0].second == vec[1].second)
        return -1;
    else
        return vec[0].first;
    
    
}