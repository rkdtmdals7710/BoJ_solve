#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string s1, string s2){
    return s1 < s2; 
}

int main(){
    string s;
    cin >> s;
    vector<string> vec;

    for(int i=0; i<s.size(); i++){
        vec.push_back(&s[i]);
    }

    
    sort(vec.begin(), vec.end(), cmp);

    for(int i=0; i<vec.size(); i++)
        cout << vec[i] << endl;


    return 0;
}