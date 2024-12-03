#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

void string_process(string &text){
    int size = text.size();
    for(int i = 0; i<size; i++){
        if(text[i]==32)
            text[i]=53;
        else if(65<=text[i]&&text[i]<=90)
            text[i] -= 64;
        else if(97<=text[i]&&text[i]<=122)
            text[i]-= 70;
    }
}


void string_compare(string text, string pattern, int i){
    int psize = pattern.size();
    for(int j = 0; j<psize; j++)
        if(text[i+j]!=pattern[j])
            return;
    cout << i << " ";
}

void rabin_karp(string text, string pattern){
   
    int tsize = text.size();
    int psize = pattern.size();
    int thash=0;
    int phash=0;
    string_process(text);
    string_process(pattern);
    
    for(int i = 0; i<psize; i++){
        phash = (phash + pattern[i] * int(pow(2, i))) % MOD;
    }

    
    for(int i = 0; i<psize; i++){
        thash = (thash + text[i] * int(pow(2, i))) % MOD;
    }

    for(int i = 0; i<tsize - psize + 1; i++){
        if(phash == thash)
            string_compare(text,pattern,i);
        
        
        thash = (thash - text[i] + MOD) % MOD;
        thash = (thash * 2) % MOD;
        thash = (thash + text[i + psize]) % MOD;    
    }
}

int main(){
    string text;
    string pattern;
    getline(cin, text);
    getline(cin, pattern);

    rabin_karp(text, pattern);


    return 0;
}