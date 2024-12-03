#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int my_binary_search(vector<int>& vec, int target){
    int left = 0;
    int right = vec.size() - 1;
    int mid;

    while(left<right){
        mid = (left + right) / 2;
        if(vec[mid]==target)
            return mid;
        else if(vec[mid] < target)
            left = mid + 1;
        else 
            right = mid - 1;
    }

    return -1;
}

int main(){
    int n;
    int tmp;
    vector<int> mycards;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        if(my_binary_search(mycards, tmp)==-1)
            mycards.push_back(tmp);
        else
            mycards[my_binary_search(mycards, tmp)]++;
    }

    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> tmp;
        if(my_binary_search(mycards, tmp)==-1)
            cout << 0 << " ";

        else
            cout << mycards[my_binary_search(mycards,tmp)]<< " ";
    }

    return 0;
}