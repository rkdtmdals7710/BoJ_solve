#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n,k, tmp;
    cin >>  n >> k;
    vector<int> vec;
    while(n--){
        cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end(), cmp);

    cout << vec.at(k-1);


    return 0;
}