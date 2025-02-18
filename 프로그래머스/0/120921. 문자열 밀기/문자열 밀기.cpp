#include <string>
#include <vector>
#include <iostream>

using namespace std;

string push_string(string &s){
    char last = s[s.size()-1];
    for(int i=s.size()-1; i>0; i--){
        s[i] = s[i-1];
    }
    s[0] = last;
    return s;
}

int solution(string A, string B) {
    int count = 0;
    
    for(int i=0; i<A.size(); i++){
        if(A == B)
            return count;
        push_string(A);
        count ++;
    }
    
    return -1;
}