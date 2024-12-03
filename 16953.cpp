#include <iostream>
using namespace std;

int main(){
    int a, b;
    int count=0;
    cin >> a >> b;

    while(a <= b){
        if(b==a){
            cout << count + 1<< endl;
            return 0;
        }

        if(b%2==0){
            count++;
            b/=2;
        }

        else if(b%10==1){
            count++;
            b--;
            b/=10;
        }

        else{
            cout << -1 << endl;
            return 0;
        }

    }
    cout << -1 << endl;

    return 0;
}