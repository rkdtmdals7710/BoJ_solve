#include <iostream>
using namespace std;

int modular_multiply(int a, int c){
    return ((a%c)*(a%c))%c;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int tmp=0;
    while(b--){
        modular_multiply(a,c);


    }




    return 0;
}