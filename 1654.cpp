#include <iostream>
#include <vector>
using namespace std;

int main(){
    int K, N, sum = 0, min=0;
    cin >> K >> N;

    vector<int> lines(K,0);
    for(int i = 0; i<K; i++){
        cin >> lines[i];
        
        sum+=lines[i];

        if(lines[i] < min)
            min = lines[i];
    }

    int tmp = sum / K;
       
    while(1){ 
        int line = 0;
        for(int i = 0; i<K; i++){
            line += lines[i] / tmp;
        }
        if(line >= N){
            cout << tmp << endl;
            break;
        }
        tmp/=2;
    }

     while(1){ 
      
        
        tmp++;
    }
    

    return 0;
}