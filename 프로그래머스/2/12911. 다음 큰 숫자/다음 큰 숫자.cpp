#include <string>
#include <vector>
#include <bitset>

using namespace std;

int countOne(string s){
    int cnt = 0;
    
    for(auto v : s)
        if( v == '1')
            cnt ++;
    
    return cnt;
}

int solution(int n) {
    bitset<20> binary(n);
    int cnt = countOne(binary.to_string());
    
    while(++n){
        bitset<20> tmp(n);
        if(cnt == countOne(tmp.to_string()))
            return n;
    }
    
    return -1;
}