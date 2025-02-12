#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(char c1, char c2){
    return c1 < c2;
}

bool find(string s, string t){
    char target = t[0];
    vector<char> sorted;
    for(auto val : s)
        sorted.push_back(val);
    
    sort(sorted.begin(), sorted.end(), cmp);
    
    int begin = 0;
    int end = sorted.size()-1;
    
    while(begin <= end){
        int middle = (begin+end)/2;
        if(sorted.at(middle) == target)
            return true;
        else if(sorted.at(middle) < target)
            begin = middle + 1;
        else
            end = middle - 1;
    }
    return false;
}

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    
    for(auto val_dic : dic){
        int cnt = 0;
        for(auto val_spell : spell){
            if(find(val_dic, val_spell))
                cnt++;    
        }
        if(cnt==spell.size())
            return 1;
    }
    
    return 2;
}