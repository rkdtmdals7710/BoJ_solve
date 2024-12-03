#include <iostream>
#include <vector>
using namespace std;

int tree_length(const vector<long long int>& vec, int height){
    int sum=0;

    for(int i=0; i<vec.size(); i++)
        if(vec[i] > height)
            sum+=vec[i]-height;


    return sum;
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    long long int N, M;
    long long int tmp;
    long long int max=0, min=0, mid=0;
    vector<long long> tree;
    cin >> N >> M;

    while(N--){
        cin >> tmp;
        tree.push_back(tmp);
        if(max < tmp)
            max = tmp;
    }

    
    
    while(min < max){
    mid = (max + mid) / 2;
    
    if(tree_length(tree,mid)==M){
        cout << mid << endl;
        return 0;
    }
    
    else if(tree_length(tree,mid)>M)
        min = mid + 1;

    else
        max = mid - 1;
    }

    return 0;
}