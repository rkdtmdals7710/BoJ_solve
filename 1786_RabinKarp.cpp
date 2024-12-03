#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

vector<int> numbers;
int mycount = 0;
int idx=0;

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

void StringCompare(string parent, string pattern, int index) {
int size = pattern.size();


    for (int i = 0; i < size; i++) 
            if (parent[i] != pattern[i])
                    return;

    
mycount++;
numbers.push_back(index+1);
//cout << index + 1 << " ";
}

void RabinKarp(string parent, string pattern) {
int parent_size = parent.size();
int pattern_size = pattern.size();
unsigned long long int pattern_hash = 0;
unsigned long long int parent_hash = 0;
string_process(parent);
string_process(pattern);
for (int i = 0; i < pattern_size; i++)
pattern_hash += pattern[i] * pow(2, pattern_size - 1 - i);


    for (int i = 0; i < pattern_size; i++)  
            parent_hash += parent[i] * pow(2, pattern_size - 1 - i);

    for (int i = 0; i <= parent_size - pattern_size; i++) { 
            if (pattern_hash == parent_hash)
                    StringCompare(&parent[i], pattern, i);

            parent_hash -= parent[i] * pow(2, pattern_size - 1);
            parent_hash *= 2;
            parent_hash += parent[i + pattern_size] * pow(2, 0);
    }
}

int main(){
string text;
string pattern;
getline(cin, text);
getline(cin, pattern);


RabinKarp(text, pattern);

cout << mycount << endl;
for(int i = 0; i<numbers.size(); i++)
        cout << numbers[i] << " ";


return 0;
}