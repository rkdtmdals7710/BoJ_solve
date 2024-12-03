#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, tmp, s=0;
    cin >> n;
    vector<int> vec;
    vector<int> sum;

    while(n--){
        cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end(), less<int>());

    sum.push_back(0);

    for(int i=0; i<vec.size(); i++)
        sum.push_back(vec.at(i) + sum.at(i));


    for(int i=0; i<sum.size(); i++)
        s+=sum.at(i);

    cout << s << endl;
   

    return 0;
}