#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    int size1, size2;
    cin >> size1 >> size2;
    string s1, s2;
    cin >> s1 >> s2;

    unordered_map<char, int> um ={
        {'A', 3}, {'B', 2}, {'C', 1}, {'D', 2}, {'E', 4}, {'F', 3},
        {'G', 1}, {'H', 3}, {'I', 1}, {'J', 1}, {'K', 3}, {'L', 1},
        {'M', 3}, {'N', 2}, {'O', 1}, {'P', 2}, {'Q', 2}, {'R', 2},
        {'S', 1}, {'T', 2}, {'U', 1}, {'V', 1}, {'W', 1}, {'X', 2},
        {'Y', 2}, {'Z', 1}
    };

    vector<char> vec;
    vector<int> ans;


    if(s1.size() <= s2.size()){
        for(int i=0; i<s1.size(); i++){
            vec.push_back(s1[i]);
            vec.push_back(s2[i]);
        }

        for(int i=s1.size(); i<s2.size(); i++)
            vec.push_back(s2[i]);
    }
    
    else{
         for(int i=0; i<s2.size(); i++){
            vec.push_back(s1[i]);
            vec.push_back(s2[i]);
        }

        for(int i=s2.size(); i<s1.size(); i++)
            vec.push_back(s1[i]);
    }

    for(int i=0; i<vec.size(); i++)
        ans.push_back(um.at(vec[i]));
    
    while(ans.size() > 2){
        for(int i=0; i<ans.size()-1; i++)
            ans[i] = (ans[i] + ans[i+1]) % 10;
        ans.pop_back();
    }

    
    if(ans[0]!=0)
        cout << ans[0];

    cout << ans[1];
    cout << '%' << endl;

    return 0;
}