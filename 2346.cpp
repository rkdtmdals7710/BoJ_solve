#include <iostream>
#include <deque>
using namespace std;

struct balloon{
    int num;
    int paper;

};

int main(){
    int n;
    cin >> n;

    deque<balloon> mydeque(n+1);

    for(int i=0; i<n; i++){
        cin >> mydeque[i].paper;
        mydeque[i].num = i;
        mydeque[i].num++;
    }
    int tmp;
    while(!mydeque.empty()){
        
        if(tmp > 0)
            while(tmp--){
                mydeque.push_back(mydeque.front());
                mydeque.pop_front();
            }

    }

    return 0;
}
