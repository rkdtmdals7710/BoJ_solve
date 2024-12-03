#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int cnt=0;

struct mystruct{
    public :
        bool visited = false;
        char value;
};

void person_count(vector<vector<mystruct>>& vec, int x, int y){
    vec[x][y].visited = true;
    if(vec[x][y].value=='P'){
        cnt++;
    }

    if(((0<=x+1 && x+1<n)&&(0<=y && y<m)))
        if(vec[x+1][y].value!='X'&&vec[x+1][y].visited == false)
            person_count(vec, x+1, y);

    if(((0<=x && x<n)&&(0<=y+1 && y+1<m)))
        if(vec[x][y+1].value!='X'&&vec[x][y+1].visited == false)
            person_count(vec, x, y+1);

    if(((0<=x-1 && x-1<n)&&(0<=y && y<m)))
        if(vec[x-1][y].value!='X'&&vec[x-1][y].visited == false)
            person_count(vec, x-1, y);

    if(((0<=x && x<n)&&(0<=y-1 && y-1<m)))
        if(vec[x][y-1].value!='X'&&vec[x][y-1].visited == false)
            person_count(vec, x, y-1);
}

int main(){
    int x, y;
    cin >> n >> m;

    vector<vector<mystruct>> vec(n,vector<mystruct>(m));

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin >> vec[i][j].value;
            if(vec[i][j].value=='I'){
                x=i;
                y=j;
            }
        }

    person_count(vec, x, y);

    if(cnt==0)
        cout << "TT";
    else    
        cout << cnt;

    return 0;
}