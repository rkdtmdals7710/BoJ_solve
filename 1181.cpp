#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool string_compare(string& s1, string& s2){
    if(s1.size() != s2.size())
        return s1.size() < s2.size();

    else
        return s1 < s2;
}

int main(){
    int n;
    cin >> n;

    vector<string> str_arr(n);

    for(int i = 0; i<n; i++)
        cin >> str_arr[i];

    sort(str_arr.begin(), str_arr.end(), string_compare);

    cout << str_arr[0] << endl;
    
     for(int i = 1; i<n; i++)
        if(str_arr[i]!=str_arr[i-1])
            cout << str_arr[i] << endl;

    return 0;
}
