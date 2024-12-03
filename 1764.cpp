#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    int n, m;
    cin >> n >> m;
    vector<string> str1(n);
    vector<string> str2;

    for(int i=0; i<n; i++)
        cin >> str1[i];

    sort(str1.begin(), str1.end(), less<string>());

    for(int i=0; i<m; i++){
        cin >> s;

        if(binary_search(str1.begin(), str1.end(), s))
            str2.push_back(s);
    }
    
    sort(str2.begin(), str2.end(), less<string>());

    cout << str2.size() << "\n";
    for(int i=0; i<str2.size(); i++)
        cout << str2[i] << "\n";      
  
    return 0;
}