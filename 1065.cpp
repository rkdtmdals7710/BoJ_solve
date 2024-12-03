#include <iostream>
using namespace std;

bool check(int i){
    int o = i % 10;
    int t = (i / 10) % 10;
    int h = i / 100;

    if(h - t == t - o)
        return true;

    else
        return false;
}

int main(){
    string s;
    cin >> s;

    if(s.size()==1 || s.size()==2){
        cout << s;
        return 0;
    }

    else if(s=="1000"){
        cout << 144;
        return 0;
    }
    int num = stoi(s);
    int count = 99;
    for(int i=100; i<=num; i++)
        if(check(i))
            count++;

    cout << count;


    return 0;
}