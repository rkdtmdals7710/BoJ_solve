#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<string, int> um;
    while(n--){
        string s;
        cin >> s;
        um[s]++;
    }

    string maxtitle = "";
    int maxcount = 0;

    for(const auto& pair : um){
        if(maxcount < pair.second){
            maxtitle = pair.first;
            maxcount = pair.second;            
        }

        else if(maxcount == pair.second){
            if(maxtitle > pair.first){
                maxtitle = pair.first;
                maxcount = pair.second;
            }
        }
    }

    cout << maxtitle << endl;

    return 0;
}