#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <deque>

using namespace std;

bool dequeReverse(deque<int>& mydeque, bool reverse){
    if(reverse==true)
        reverse = false;

    else    
        reverse = true;

    return reverse;
}

bool dequeDump(deque<int>& mydeque, bool reverse){
    if(mydeque.empty()){
        cout << "error\n";
        return false;

    }
    else{
        if(!reverse)
            mydeque.pop_back();
        else
            mydeque.pop_front();

        return true;
    }
}

void dequePrint(deque<int>& mydeque, bool reverse){
    if(!reverse){
        cout << "[";

        for(int i=0;i<mydeque.size()-1; i++)
            cout << mydeque[i] << ',';

        cout << mydeque[mydeque.size()-1] <<"]";
    }

    else{
        cout << "[";

        for(int i=mydeque.size()-1;i>0; i++)
            cout << mydeque[i] << ',';

        cout << mydeque[0] <<"]";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T, arr_size;
    cin >> T;
    string command, arr;
    while(T--){
        cin >> command;
        cin >> arr_size;
        cin >> arr;
        string newstr;
        deque<int> nums;
        bool reverse=false;
        if(arr!="[]"){
            newstr = arr.substr(1,arr.size()-2);
            
        
            stringstream sstream(newstr);
            string num;

            while(getline(sstream, num, ',')){
                int tmp = stoi(num);
                nums.push_back(tmp);
            }
        }

        for(int i=0; i<command.size(); i++){
            if(command[i]=='D')
                if(!dequeDump(nums, reverse))
                    return 0;

            else if(command[i]=='R')
                reverse = dequeReverse(nums, reverse);
        }

        dequePrint(nums,reverse);
    }
    return 0;
}