#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int tmp;
    int cnt = 1;
    cin >> n;
    vector<int> fruit;
    vector<int> count;
    vector<int> fruit_number;
    vector<int> vec;

    for(int i=0; i<n; i++){
        cin >> tmp;
        fruit.push_back(tmp);
    }

    for(int i=0; i<fruit.size()-1; i++){
        if(fruit[i]==fruit[i+1])
            cnt++;
        else{
            count.push_back(cnt);
            fruit_number.push_back(fruit[i]);
            cnt=1;
        }
    }

    count.push_back(cnt);
    fruit_number.push_back(fruit[fruit.size()-1]);

    int idx;

    for(int i=0; i<count.size()-1; i++){
        int sum = count[i] + count[i+1];
        for(int j=i+2; j<count.size(); j++){
            if(fruit_number[j]==fruit_number[i] || fruit_number[j]==fruit_number[i+1])
                sum+=count[j];

            else{
                vec.push_back(sum);
            }
        }

    }

    
    cout << endl << "count : ";

    for(int i=0; i<count.size(); i++)
        cout << count[i] << " ";

    cout << endl << "fruit number : ";

    for(int i=0; i<fruit_number.size(); i++)
        cout << fruit_number[i] << " ";

     cout << endl << "vec : ";

     for(int i=0; i<vec.size(); i++)
        cout << vec[i] << " ";
    

    return 0;
}