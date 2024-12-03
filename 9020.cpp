#include <iostream>
#include <vector>
using namespace std;

const int MAX = 10000;

int mybinarySearch(const vector<int>& vec, int target){
    int left = 0;
    int right = vec.size();

    while(left<=right){
        int mid = (left + right)/2;

        if(target==vec[mid])
            return target;

        else if (target > vec[mid])
            left = mid + 1;

        else
            right = mid - 1;
    }


    return 0;
}

int main(){
    int n;
    int num_arr[MAX+1]={0,};
    vector<int> prime;
    cin >> n;

    
    for(int i=2; i<=MAX; i++)
        if(num_arr[i]==0){
            int tmp = 2;
            while(tmp*i<=MAX){
                num_arr[tmp*i]=1;
                tmp++;
            }
        }

    for(int i=2; i<=MAX; i++)
        if(num_arr[i]==0)
            prime.push_back(i);

    while(n--){
        int num;
        cin >> num;

        int  diff = num;
        int prime1 = 0, prime2 = 0;
        for(int i=0; i<prime.size(); i++){
            if(mybinarySearch(prime, num-prime[i])&&abs(diff>prime[i] - mybinarySearch(prime, num-prime[i]))){
                prime1 = prime[i];
                prime2 = mybinarySearch(prime, num-prime[i]);
                diff = abs(prime1 - prime2);
            }
        }

        if(prime1 < prime2)
            cout << prime1 << " " << prime2 << endl;
        else    
            cout << prime2 << " " << prime1 << endl;

    }

    return 0;
}