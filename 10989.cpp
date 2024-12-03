#include <iostream>
using namespace std;

int main(){
     int n;
     cin >> n;

     int tmp;
     int arr[10001] = {0,};

     while(n--){
          cin >> tmp;
          arr[tmp]++;
     }

     for(int i = 1; i<=10000; i++){
          while(arr[i]--)
               cout << i << "\n";
     }

     return 0;
}