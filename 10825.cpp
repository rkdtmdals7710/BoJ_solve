#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    int kor;
    int eng;
    int math;
};

bool cmp(student s1, student s2){
    if(s1.kor!=s2.kor)
        return s1.kor > s2.kor;
    else if(s1.eng!=s2.eng)
        return s1.eng < s2.eng;
    else if(s1.math!=s2.math)
        return s1.math > s2.math;
    else
        return s1.name < s2.name;
}

int main(){
    int n;
    cin >> n;

    vector<student> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i].name >> vec[i].kor >> vec[i].eng >> vec[i].math;

    sort(vec.begin(), vec.end(), cmp);
    
    for(int i=0; i<n; i++)
        cout << vec[i].name << "\n";

    return 0;
}