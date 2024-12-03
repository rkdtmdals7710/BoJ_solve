#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        unordered_set<int> u_s;
        while(N--){
            int tmp;
            cin >> tmp;

            u_s.insert(tmp);
        }

        int M;
        cin >> M;
        while(M--){
            int tmp2;
            cin >> tmp2;
            if(u_s.find(tmp2)==u_s.end())
                cout << 0 << "\n";

            else
                cout << 1 << "\n";
        }

    }
    return 0;
}