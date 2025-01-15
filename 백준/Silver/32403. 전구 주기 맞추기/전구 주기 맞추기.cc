#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, T;
    
    cin >> N >> T;
    
    vector<int> vec;
    vector<int> ans;
    
    while(N--){
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    
    for(int i=0; i<vec.size(); i++){
        if(vec[i] >= T)
            ans.push_back(vec[i] - T);
        
        else{
            int count = 0;
            while(true){
                if(T%(vec[i]+count)==0 or T%(vec[i]-count)==0)
                    break;
                
                count++;
            }
        
            ans.push_back(count);
        }
    }
    
    int sum = 0;
    for(auto val : ans)
        sum += val;
        
    cout << sum << endl;
    
    
    return 0;
}