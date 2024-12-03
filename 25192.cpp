#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    int count=0;
    unordered_map<string, int> u_mp;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        if(s!="ENTER")
            u_mp[s] = 1;

        else{
            for(const auto& pair : u_mp){
                count += pair.second;
            }
            u_mp.clear();
        } 
    }

    for(const auto& pair : u_mp){
        count += pair.second;
    }   

    cout  << count << endl;

    return 0;
}