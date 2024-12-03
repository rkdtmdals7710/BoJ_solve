#include <iostream>
#include <string>
using namespace std;

string caesar_decrypt(string &s){
    for(int i = 0; i<s.size(); i++){
        if((68<=s[i]&&s[i]<=90)||(100<=s[i]&&s[i]<=122))
            s[i]-=3;

        else if((65<=s[i]&&s[i]<=67)||(97<=s[i]&&s[i]<=99))
            s[i]+=23;
    }
    return s;
}

int main(){
    string s;
    getline(cin, s);
    
    caesar_decrypt(s);

    cout << s;

    return 0;
}