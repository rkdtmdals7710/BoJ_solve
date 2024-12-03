#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct meminfo{
    int age;
    int order;
    string name;
};

bool cmp(meminfo a, meminfo b){
    if(a.age != b.age)
        return a.age < b.age;

    else
        return a.order < b.order;

}

int main(){
    int n;
    cin >> n;

    vector<meminfo> vec(n);

    for(int i = 0; i<n; i++){
        cin >> vec[i].age >> vec[i].name;
        vec[i].order = i;
    }

    sort(vec.begin(), vec.end(), cmp);
    
    for(int i = 0; i<n; i++)
        cout << vec[i].age << " " <<vec[i].name << "\n";


    return 0;
}