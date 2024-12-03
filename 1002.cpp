
#include <iostream>
#include <cmath>
using namespace std;

double distance(int x1, int x2, int y1, int y2){
    int a = (x2 - x1) * (x2 - x1);
    int b = (y2 - y1) * (y2 - y1);
    double c = sqrt(a + b);
    return c;

}

int main(){
    int n;
    cin >> n;
    while(n--){
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double max, min;
    double l = distance(x1,x2,y1,y2);
    if(r1 > r2){
        max = r1;
        min = r2;
    }
    else{
        max = r2;
        min = r1;
    }

    if(max + min == l)
        cout << 1 << endl;
    else if(l > max + min)
        cout << 0 << endl;
    else if(l < max + min)
        cout << 2 << endl;
    else if (l== max - min)
        cout << 1 << endl;
    else if (max - min > l)
        cout << 0 << endl;
    else if(max > l && l > min)
        cout << 2 << endl;
    }
    return 0;
}