#include <iostream>
#include <vector>
using namespace std;

struct student{
    int weight;
    int height;
};

int main(){
    int n;
    vector<student> vec(n);
    cin >> n;
    for(int i=0; i<n; i++){
        int weight, height;
        cin >> weight >> height;
        vec[i].weight = weight;
        vec[i].height = height;
    }

    


    return 0;
}