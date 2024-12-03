#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;
    deque<int> mydeque;
    cin >> n;

    while(n--){
        int command;
        cin >> command;

        switch(command){
            case 1 :
                int tmp;
                cin >> tmp;
                mydeque.push_front(tmp);
                break;
            case 2 :
                int temp;
                cin >> temp;
                mydeque.push_back(temp);
                break;
            case 3 :
                if(!mydeque.empty()){
                    cout << mydeque.front() << "\n";
                    mydeque.pop_front();
                }
                else   
                    cout << -1 << "\n";
                break;
            case 4 :
                if(!mydeque.empty()){
                    cout << mydeque.back() << "\n";
                    mydeque.pop_back();
                }
                else   
                    cout << -1 << "\n";
                break;
            case 5 :
                cout << mydeque.size() << "\n";
                break;
            case 6 :
                cout << mydeque.empty() << "\n";
                break;
            case 7 :
                if(!mydeque.empty()){
                    cout << mydeque.front() << "\n";
                }
                else   
                    cout << -1 << "\n";
                break;
            case 8 :
                if(!mydeque.empty()){
                    cout << mydeque.back() << "\n";
                }
                else   
                    cout << -1 << "\n";
                break;
            default:
                break;        
        }

    }


    return 0;
}