#include <iostream>
#include <deque>
using namespace std; 

int main(){
    int n;
    deque<int> mydeque;
    cin >> n;
    for(int i=1; i<=n; i++)
        mydeque.push_back(i);

    while(mydeque.size() > 1){
        mydeque.pop_front();
        int tmp = mydeque.front();
        mydeque.pop_front();
        mydeque.push_back(tmp);
    }

    cout << mydeque.front();



    return 0;
}