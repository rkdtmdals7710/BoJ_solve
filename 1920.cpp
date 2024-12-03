#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    sort(vec.begin(),vec.end());

    int m;
    cin >> m;
    vector<int> vec2(m);

    for(int i=0; i<m; i++)
        cin >> vec2[i];

    for(int i=0; i<m; i++){
        cout << binary_search(vec.begin(), vec.end(), vec2[i]) << "\n";
    }



    return 0;
}