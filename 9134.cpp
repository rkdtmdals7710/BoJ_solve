//solved
#include <iostream>
using namespace std;

int w(int a, int b, int c){
int arr[51][51][51];
if(a < 0 || b < 0 || c < 0)
    return 1;

for(int i = 0; i<51; i++)
    for(int j = 0; j<51; j++)
        for(int k = 0; k<51; k++){
            if(i==0||j==0||k==0)
                arr[i][j][k] = 1;

            else  if(i>20||j>20||k>20)
                arr[i][j][k] = arr[20][20][20];


            else if(i < j && j < k)
                arr[i][j][k] = arr[i][j][k-1] + arr[i][j-1][k-1] - arr[i][j-1][k];

            else 
                  arr[i][j][k] = arr[i-1][j-1][k]+arr[i-1][j][k-1]+arr[i-1][j][k]-arr[i-1][j-1][k-1];

        }

    return arr[a][b][c];
}

int main(){
   int a, b, c;
   while(1){
        cin >> a >> b >> c;
        
        if (a == -1 && b == -1 && c == -1)
            break;
     
        printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
       
   }

    return 0;
}