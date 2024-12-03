#include <iostream>
#include <vector>
using namespace std;

int main(){
    string num;
    cin >> num;
    int count = 0;
    
    for(int i=0; i<num.size(); i++)
        num[i] -= 48;


    return 0;
}
