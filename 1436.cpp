#include <iostream>
#include <vector>
using namespace std;

const int MAX = 3000000;

int main(){
    int n, count=0;
    string s;
    vector<string> vec;
    cin >> n;

    for(int i=666; i<MAX; i++){
        s = to_string(i);
        for(int j=2; j<s.size(); j++)
            if(s[j-2]=='6')
                if(s[j-1]=='6')
                    if(s[j]=='6'){
                        vec.push_back(s);
                        break;
                    }
    }
    cout << vec.at(n-1);
    return 0;
}