#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct coord{
    int x;
    int y;
};

bool mycmp(coord c1, coord c2){
    if(c1.y != c2.y)
        return c1.y < c2.y;
    else
        return c1.x < c2.x;
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<coord> arr(n);
    for(int i = 0; i<n; i++)
        cin >> arr[i].x >> arr[i].y;

    sort(arr.begin(), arr.end(), mycmp);

    for(int i = 0; i<n; i++)
        cout << arr[i].x << " " << arr[i].y << "\n";

    return 0;
}