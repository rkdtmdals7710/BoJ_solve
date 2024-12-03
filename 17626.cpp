#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool check_square(int n){
    int root = static_cast<int>(sqrt(n));
    if(n==root*root)
        return true;

    else
        return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> square;
    for(int i=0; i<=n; i++) 
        if(check_square(i)==true)
            square.push_back(i);

    if(binary_search(square.begin(), square.end(), n)==true){
        cout << 1 << endl;
        return 0;
    }

    for(int i=0; i<square.size(); i++) 
        if(binary_search(square.begin(), square.end(), n-square[i])==true){
            cout << 2 << endl;
            return 0;
        }
        
    for(int i=0; i<square.size(); i++)
        for(int j=0; j<square.size(); j++){
            if(binary_search(square.begin(), square.end(), n-square[i] - square[j])){
                cout << 3 << endl;
                return 0;
            }

        }

    
    cout << 4 << endl;
        

    
    return 0;
}