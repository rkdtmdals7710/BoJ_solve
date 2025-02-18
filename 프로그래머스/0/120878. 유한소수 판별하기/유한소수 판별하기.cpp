#include <string>
#include <vector>
#include <cmath>
using namespace std;

int check(int n){
    while(n >= 2){
        if(n%2==0)
            n /= 2;
        else
            break;
    }
    while(n >= 5){       
        if(n%5==0)
            n /= 5;
        else
            break;
    }
    if(n==1)
        return 1;
    else 
        return 2;
}

int solution(int a, int b) {
    vector<int> cd;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0)
            cd.push_back(i);
    }
    
    int gcd = cd.back();
    
    a /= gcd;
    b /= gcd;
    
    return check(b);
}