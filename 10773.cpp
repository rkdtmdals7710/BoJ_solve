#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n, tmp, sum=0;
    stack<int> mystack;
    cin >> n;

    while(n--){
        cin >> tmp;

        if(tmp!=0)
            mystack.push(tmp);

        else
            mystack.pop();
    }


    while(!mystack.empty()){
        sum+=mystack.top();
        mystack.pop();
    }

    cout << sum;

    return 0;
}