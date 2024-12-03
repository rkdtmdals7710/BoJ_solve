#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    vector<int> vec1(n);
    vector<int> vec2(m);

    for(int i=0; i<n; i++)
        cin >> vec1[i];

    for(int i=0; i<m; i++)
        cin >> vec2[i];
    
    for(int i=0; i<m; i++)
        vec1.push_back(vec2.at(i));

    sort(vec1.begin(), vec1.end());

    for(int i=0; i<vec1.size(); i++)
        cout << vec1.at(i) << " ";

    return 0;
}