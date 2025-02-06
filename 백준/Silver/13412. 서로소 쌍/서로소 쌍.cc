#include <iostream>
#include <numeric>
#include <cmath>
#include <vector>
using namespace std;

void getCoprime(int n){
    vector<vector<int>> vec;
    for(int i=1; i<=sqrt(n); i++){
        vector<int> tmp;
        if(n % i == 0){
            tmp.push_back(i);
            tmp.push_back(n / i);
            vec.push_back(tmp);
        }
    }
    vector<vector<int>> ans;
    for(int i=0; i<vec.size(); i++)
        if(std::gcd(vec[i][0],vec[i][1])==1)
            ans.push_back(vec[i]);

    cout << ans.size() << endl;
    return;
}


int main(){
    int N;
    cin >> N;
    while(N--){
        int n;
        cin >> n;
        getCoprime(n);
    }



    return 0;
}