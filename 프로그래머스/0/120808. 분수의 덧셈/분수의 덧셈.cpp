#include <string>
#include <vector>

using namespace std;


int getGCD(int a, int b){
    if(b==0)
        return a;
    else
        return getGCD(b,a%b);
}


vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int lcm = denom1 * denom2 / getGCD(denom1 , denom2);
    
    int numer = lcm * numer1 / denom1 + lcm * numer2 / denom2;
    int denom = lcm;
    
    int gcd = getGCD(numer, denom);
    
    answer.push_back(numer/gcd);
    answer.push_back(denom/gcd);
    
    return answer;
}

