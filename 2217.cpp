#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a < b;
}

int main(){
    int n, sum=0, max=0, tmp=0;
    cin >> n;
    vector<int> rope(n);

    for(int i=0; i<n; i++)
        cin >> rope[i];

    sort(rope.begin(), rope.end(), cmp);

    for(int i=0; i<n; i++)
       sum+=rope[i];

    for(int i=0; i<n; i++){
        tmp = rope[i] * (n-i);
        if(max < tmp)
            max = tmp;
    }   

    cout << max << endl;    

    return 0;
}