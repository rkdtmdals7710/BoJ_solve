#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int mysize = 26;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string s;
    int q, n, m;
    char c;
    cin >> s;
    cin >> q;
    int stringsize = s.size();
    vector<vector<int>> alphabet_count(mysize,vector<int>(stringsize,0));

    for(int i = 0; i<mysize; i++){
        for(int j = 0; j<stringsize; j++)
            alphabet_count[i][j] == 0;
    }

    alphabet_count[s[0]-97][0]++;

    for(int i = 0; i<mysize; i++)
        for(int j = 1; j<stringsize; j++){
            if(s[j]==i+97){
                alphabet_count[i][j] = alphabet_count[i][j-1];
                alphabet_count[i][j]++;
            }
            else    
                alphabet_count[i][j] = alphabet_count[i][j-1];
        }
    
    while(q--){
        cin >> c >> n >> m;
        c -= 97;
        
        if(n==0)
            cout << alphabet_count[c][m] << "\n";
        else
            cout << alphabet_count[c][m] - alphabet_count[c][n-1] << "\n";
    }

    return 0;
}