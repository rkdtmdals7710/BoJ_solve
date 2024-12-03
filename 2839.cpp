
#include <iostream>
using namespace std;

int main(){
    int N; 
    cin >> N;

    int five = N / 5;
    int three = 0;

    while(1){
        if(N == five*5 + three*3){
            cout << five + three;
            return 0;
        }
        else{
            five--;

        }

    }


    



    return 0;
}