#include <iostream>
using namespace std;
int myqueue[2000000];
int front = 0;
int back = 0;

bool empty(){
    if(front==back)
        return 1;

    else
        return 0;
}


void push(int n){
    myqueue[back] = n;
    back++;
}

void pop(){
    if(empty()){
        cout << -1 << "\n";
        return ;
    }
    cout << myqueue[front] << "\n";
    front++;
}

void size(){
    cout << back - front << "\n";
}

void printFront(){
    if(empty())
        cout << -1 << "\n";
    else
        cout << myqueue[front] << "\n";
}

void printBack(){
    if(empty())
        cout << -1 << "\n";
    else
        cout << myqueue[back - 1] << "\n";
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    
    while(n--){
        string command;
        cin >> command;
        if(command=="push"){
            int tmp;
            cin >> tmp;
            push(tmp);
        }
        else{
            if(command=="pop")
                pop();
            else if(command=="empty")
                cout << empty() << "\n";
            else if(command=="size")
                size();
            
            else if(command=="front")
                printFront();

            else if(command=="back")
                printBack();
        }
    }

    return 0;
}