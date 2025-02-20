#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a < b;
}

string solution(string s) {
    string answer = "";
    string token;
    vector<int> vec;
    stringstream ss(s);
    
    while(getline(ss, token, ' ')){
        vec.push_back(stoi(token));
    }

    sort(vec.begin(), vec.end(), cmp);
    
    return to_string(vec.front()) + " " + to_string(vec.back());
}