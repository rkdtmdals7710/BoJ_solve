#include <iostream>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    unordered_map<long long int, int> u_mp;
    while(n--){
        long long int tmp;
        cin >> tmp;
        u_mp[tmp]++;
    }

    long long int maxkey = 0;
    int maxcount = 0;

    for(const auto& pair : u_mp){
        if(maxcount < pair.second){
            maxkey = pair.first;
            maxcount = pair.second;
        }

        else if(maxcount == pair.second && pair.first < maxkey){
            maxkey = pair.first;
            maxcount = pair.second;
        }
    }

    cout << maxkey << endl;


    return 0;
}