#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool check3(int n){
    if(n%3 == 0)
        return true;
    
    string s = to_string(n);
    
    for(auto v : s)
        if(v=='3')
            return true;
    
    return false;
}

int solution(int n) {
    vector<int> x3num;
    x3num.push_back(0);
    x3num.push_back(1);
    
    for(int i=2; i<=n; i++){
        int k = x3num.at(i-1) + 1;
        if(check3(k)==true)
            while(1){
                k++;
                if(check3(k)==false){
                    x3num.push_back(k);
                    break;
                }
            }
            
        else
            x3num.push_back(k);
    }
    
    for(int i=1; i<=n; i++)
        cout << i << " : " << x3num.at(i) << endl;
        
      
    return x3num.at(n);
}