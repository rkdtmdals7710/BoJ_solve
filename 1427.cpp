#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(char c1, char c2){
    return c1 > c2;
}

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end(), cmp);

    cout << s;
    return 0;
}