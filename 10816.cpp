#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a < b;
}

int count_same_cards(const vector<int>& vec, int index){
    int left = index - 1;
    int right = index + 1;
    int count = 1;

    while(vec[index]==vec[left] && left>=0){
        count ++;
        left --;
    }
    while(vec[index]==vec[right] && right<vec.size()){
        count ++;
        right++;
    }
    return count;
}

int my_binary_search(const vector<int>& vec, int target){
    int left = 0, right = vec.size() - 1;
    int mid; 
    int count = 0;

    while(left <= right){
        mid = (left + right) / 2;

        if(vec[mid]==target){
            count = count_same_cards(vec, mid);
            return count;
        }

        else if(vec[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return count;
}   

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, tmp, count=0;
    cin >> n;
    vector<int> mycard;
    vector<int> counts;
    

    for(int i=0; i<n; i++){
        cin >> tmp;
        mycard.push_back(tmp) ;
    }

    sort(mycard.begin(), mycard.end(),cmp);

    int m;
    cin >> m;
    vector<int> target(m);
    for(int i=0; i<m; i++)
        cin >> target[i];

    for(int i=0; i<m; i++)
       counts.push_back(my_binary_search(mycard, target[i]));

    for(int i=0; i<counts.size(); i++)
        cout << counts[i] << " ";
        
    return 0;
}