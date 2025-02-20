#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp1(int a, int b){return a > b;}
bool cmp2(int a, int b){return a < b;}


int solution(vector<int> A, vector<int> B){
    int sum = 0;
    
    sort(A.begin(), A.end(), cmp1);
    sort(B.begin(), B.end(), cmp2);
    
    for(int i = 0; i<A.size(); i++) 
        sum += A.at(i) * B.at(i);
    
    return sum;
}