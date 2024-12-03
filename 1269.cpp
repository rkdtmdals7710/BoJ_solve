#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    unordered_set<int> set_a;
    unordered_set<int> set_b;
    vector<int> vec_a;
    vector<int> vec_b;

    while(a--){
        int tmp;
        cin >> tmp;
        set_a.insert(tmp);
        vec_a.push_back(tmp);
    }
    
    while(b--){
        int tmp;
        cin >> tmp;
        set_b.insert(tmp);
        vec_b.push_back(tmp);
    }

    for(int i=0; i<vec_a.size(); i++)
        set_b.erase(vec_a[i]);

    for(int i=0; i<vec_b.size(); i++)
        set_a.erase(vec_b[i]);

    cout << set_a.size() + set_b.size();
   

    return 0;
}