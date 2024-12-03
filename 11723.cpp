#include <iostream>
using namespace std;

void add(int arr[], int n){
    arr[n]++;
}

void remove(int arr[], int n){
    if(arr[n]>0)
        arr[n]--;
}

void check(int arr[], int n){

    if(arr[n]>0)
        cout << "1\n";
    else
        cout << "0\n";
}

void toggle(int arr[], int n){
    if(arr[n]>0)
        arr[n] = 0;
    else
        arr[n]++;
}

void all(int arr[]){
    for(int i=1; i<=20; i++)
        arr[i] = 1;
}

void empty(int arr[]){
    for(int i=1; i<=20; i++)
        arr[i] = 0;
}

int main(){
    int arr[21] = {0,};
    string command;
    int n, tmp;
    cin >> n;
    
    while(n--){
        cin >> command;
        if(command=="all")
            all(arr);
          
        
        if(command=="empty")
            empty(arr);
           
        if(command=="add"){
            cin >> tmp;
            add(arr, tmp);
       }
        if(command=="remove"){
            cin >> tmp;
            remove(arr, tmp);
        }
        if(command=="toggle"){
            cin >> tmp;
            toggle(arr, tmp);
            
        }
        if(command=="check"){
            cin >> tmp;
            check(arr, tmp);
        }        
    }

    return 0;
}