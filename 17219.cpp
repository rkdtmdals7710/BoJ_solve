#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct pw{
    string domain;
    string password;

};

bool cmp(pw p1, pw p2){
    return p1.domain < p2.domain;
}

void binary_search_pw(const vector<pw>& vec, string target){
    int left = 0;
    int right = vec.size() - 1;
    int mid;
    while(left <= right){
        mid = (left + right) / 2;

        if(vec[mid].domain == target){
            cout << vec[mid].password << "\n";
            return;
        }

        else if(vec[mid].domain < target)
            left = mid + 1;

        else 
            right = mid - 1;
    }
    return;
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pw> vec(n);

    for(int i=0; i<n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        vec[i].domain = s1;
        vec[i].password = s2;
    }

    sort(vec.begin(), vec.end(), cmp);

   for(int i=0; i<m; i++){
        string s;
        cin >> s;
        binary_search_pw(vec, s);
   }


    return 0;
}