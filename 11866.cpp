#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(){
    int n, k;
    deque<int> mydeque;
    vector<int> answer;
    cin >> n >> k;

    for(int i=1; i<=n; i++)
        mydeque.push_back(i);

    while(!mydeque.empty()){
        int i = k-1;

        while(i--){
            int tmp = mydeque.front();
            mydeque.push_back(tmp);
            mydeque.pop_front();
        }
        
        answer.push_back(mydeque.front());
        mydeque.pop_front();
    }

    cout << "<";
    for(int i=0; i<answer.size()-1; i++)
        cout << answer[i] << ", ";
    
    cout << answer[answer.size()-1] << ">";

    return 0;
}