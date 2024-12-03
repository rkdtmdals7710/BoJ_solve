#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N=0, K=0, count=0;
    int tmp;
    cin >> N >> K;
    vector<int> coins;
    while(N--){
        cin >> tmp;
        coins.push_back(tmp);
    }
    
    for(int i=coins.size()-1; i>=0; i--){
       
        tmp = K / coins.at(i);
        K-= tmp * coins.at(i);
        count += tmp;

        if(K==0)
            break;

    }
    cout << count << endl;

    return 0;
}