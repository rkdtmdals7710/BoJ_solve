#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string s1, string s2){
    return s1 < s2;
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    vector<string> entered;
    vector<string> leaved;
    int n;
    cin >> n;
    

    while(n--){
        string s1, s2;
        cin >> s1 >> s2;
        if(s2=="enter")
            entered.push_back(s1);
        else if(s2=="leave")
            leaved.push_back(s1);
    }

    sort(entered.begin(), entered.end(), cmp);
    
    sort(leaved.begin(), leaved.end(), cmp);

    for(int i=entered.size()-1; i>=0; i--)
        if(binary_search(leaved.begin(), leaved.end(), entered[i])==false)
            cout << entered[i] << "\n";


    return 0;
}