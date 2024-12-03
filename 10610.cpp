#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(char a, char b){
    return a > b;
}

int main(){
    string s;
    int sum=0, cnt=0;
    cin >> s;

    for(int i = 0; i<s.size(); i++)
        if(s[i]=='0')
            cnt++;

    if(cnt==0){
        cout << -1 ;
        return 0;
    }

    for(int i = 0; i<s.size(); i++)
        sum+=s[i]-48;

    if(sum%3!=0){
        cout << -1 << endl;
        return 0;
    }
   
    sort(s.begin(), s.end(), cmp);
  
    for(int i=0; i<s.size(); i++)
        cout << s[i];

    return 0;
}