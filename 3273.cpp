#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, x, count=0;
    cin >> n;
    vector<int> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    cin >> x;

    for(int i=0; i<n; i++)
        if(binary_search(vec.begin(), vec.end(),x-vec[i]))
            count++;

    count/=2;
    if(x%2==0&&binary_search(vec.begin(), vec.end(),x/2))
        count--;
    cout << count;
    return 0;
}