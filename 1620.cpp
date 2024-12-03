#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct pokemon{
    string name;
    int number;

};

bool cmp(pokemon p1, pokemon p2){
    return p1.name < p2.name;
}

void myBinarySearch(const vector<pokemon>& vec, string target){
    int left = 1;
    int right = vec.size();
    int mid;
    while(left <= right){
        mid = (left + right) / 2;

        if(vec[mid].name==target){
            cout << vec[mid].number << "\n";
            return ;
        }

        else if (vec[mid].name < target)
            left = mid + 1;

        else if (vec[mid].name > target)
            right = mid - 1;
    }

}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<pokemon> vec(n+1);
    vector<string> strvec(n+1);
    string s;
    for(int i=1; i<=n; i++){
        cin >> s;
        strvec[i] = s;
        vec[i].name = s;
        vec[i].number = i;
    }

    sort(vec.begin(), vec.end(), cmp);

    while(m--){
        cin >> s;
        if(65<=s[0] && s[0]<=90)
            myBinarySearch(vec, s);
        else{
            int tmp = stoi(s);
            cout << strvec[tmp] << "\n";
        }
    }
    
    return 0;   
}