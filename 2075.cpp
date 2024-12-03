#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    int tmp;
    cin >> N;
    vector<int> v;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end(),cmp);
        v.erase(v.begin()+ N, v.end());
    }

    cout << v.back();

    return 0;
}