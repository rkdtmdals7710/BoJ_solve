#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int my_binary_search(int target, const vector<int>& vec, int vec_size) {
    int left = 0; 
    int right = vec_size - 1; 

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (vec[mid] == target) {
            return mid; 
        }
        else if (vec[mid] < target) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> ans(n,0);
    vector<int> original(n); // original
    for(int i=0; i<n; i++)
        cin >> original[i];

    vector<int> sorted(original); //unique_sorted 
    sort(sorted.begin(), sorted.end());
    auto last = unique(sorted.begin(), sorted.end());
    sorted.erase(last,sorted.end());
    int sorted_size = sorted.size();

    
    for(int i = 0; i<n; i++){
        ans[i] = my_binary_search(original[i], sorted, sorted_size);
    }

     for(int i = 0; i<n; i++)
        cout << ans[i] << " ";

    return 0;
}