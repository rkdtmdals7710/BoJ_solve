#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    unordered_set<string> us;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string tmp = "";
            for (int k = i; k <= j; k++) {
                tmp += s[k];
            }
           us.insert(tmp); 
        }
    }
    
    cout << us.size();

    return 0;
}