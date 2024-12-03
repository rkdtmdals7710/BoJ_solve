#include <iostream>
#include <vector>
using namespace std;


struct computer{
    bool infect;
    vector<int> node;
};

void start_infecting(vector<computer>& coms, int tmp){
  
    coms[tmp].infect = true;
 
    for(int i=0; i<coms[tmp].node.size();i++)
        if(coms[coms[tmp].node[i]].infect==false)
            start_infecting(coms,coms[tmp].node[i]);
}

int main(){
    int n,m; 
    int count=0;
    cin >> n >> m;
    vector<computer> computers(n+1);

    for(int i=1; i<=n; i++)
        computers[i].infect = false;
  
    while(m--){
        int start, target;
        cin >> start >> target;
        computers[start].node.push_back(target);
        computers[target].node.push_back(start);

    }
       
    start_infecting(computers, 1);
 
    for(int i=2; i<=n; i++)
        if(computers[i].infect==true){
            count++;
        }
  
    cout << count << endl;

    return 0;
}