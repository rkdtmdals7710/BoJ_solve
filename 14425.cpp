#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2){
    return s1 < s2;
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n, m;
    int count=0;
    vector<string> vec;
    cin >> n >> m;


    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        vec.push_back(s);
    }

    sort(vec.begin(), vec.end(), cmp);

    for(int i=0; i<m; i++){
        string t;
        cin >> t;
        
        if(binary_search(vec.begin(),vec.end(), t)==true)
            count++;
    }

    cout << count;


    return 0;
}