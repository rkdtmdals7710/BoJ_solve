#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    vector<int> divisor;
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++)
        if(n % i == 0){
            divisor.push_back(i);
            if(i!=n/i)
                divisor.push_back(n/i);
        }
   
    for(auto v : divisor)
        sum += v;
    
    return sum;
}