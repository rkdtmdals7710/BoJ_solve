#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int diff=0;

    for(int i=0; i<s.size()-1; i++){
        if(s[i]!=s[i+1])
            diff++;
    }
    if(diff==0)
        cout << 0;

    else if(diff%2==1){
        diff++;
        cout << diff / 2;
    }

    else
        cout << diff / 2;



    return 0;
}