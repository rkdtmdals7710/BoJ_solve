#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int>p2){
    if(p1.second > p2.second)
        return true;
    else if(p1.second < p2.second)
        return false;
    else{
        if(p1.first.size() > p2.first.size())
            return true;
        else if (p1.first.size() < p2.first.size())
            return false;
        
        else
            return p1.first < p2.first;
    }
}

int main(){
    int n, m;
    unordered_map<string, int> ump;
    cin >> n >> m;

    while(n--){
        string s;
        cin >> s;

        if(s.size() < m)
            continue;

        ump[s]++;
    }

    vector<pair<string, int>> vec(ump.begin(), ump.end());

    sort(vec.begin(), vec.end(), cmp);

    for(const auto& pair : vec){
        cout << pair.first << "\n";
    }

    return 0;
}

bool cmp1(int x, int y){
    return x < y;
}

bool cmp2(int x, int y){
    if(x < y)
        return true;
}