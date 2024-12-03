#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N;
    stack<int> mystack;
    vector<char> vec;
    cin >> N;

    int* arr = new int[N+1];
    for(int i=0; i<=N; i++)
        arr[i] = 1;

    mystack.push(0);
    arr[0]=0;


    while(N--){
        int tmp;
        cin >> tmp;

        if(mystack.top()==tmp){
            mystack.pop();
            vec.push_back('-');
        }

        else if(mystack.top() < tmp){
           for(int i=mystack.top(); i<=tmp; i++)
                if(arr[i]==true){
                    mystack.push(i);
                    arr[i] = false;
                    vec.push_back('+');
                }
            mystack.pop();
            vec.push_back('-');
        }

        else if(mystack.top() > tmp){
            cout << "NO";
            return 0;
        }
    }

    for(int i=0; i<vec.size(); i++)
        cout << vec[i] << "\n";

    return 0;
}