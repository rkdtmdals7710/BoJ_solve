#include <iostream>
using namespace std;
const int MAX = 1000;
int main(){
    int arr[MAX+1];
    int arr_max[MAX+1];
    int DP[MAX+1];
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
        cin >> arr[i];
    arr_max[1] = arr[1];
    DP[1] = 1 ; 

    for(int i = 2; i<=n; i++){
        if(arr[i]>arr_max[i-1]){
            DP[i] = DP[i-1] + 1;
            arr_max[i] = arr[i];       
        }
        else{
            DP[i] = DP[i-1];
            arr_max[i] = arr_max[i-1];
        }

    }

    cout << DP[n] << endl;

    return 0;
}