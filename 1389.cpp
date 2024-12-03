#include <iostream>
#include <vector>

using namespace std;

struct person{
    vector<int> bacon;
 };

int main(){
    int n, m;
    cin >> n >> m;

    vector<person> people(n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            people[i].bacon.push_back(0);



    return 0;
}