#include <iostream>
using namespace std;

void DFS(int** field, int w, int h, int M, int N){
    if(w<0 || w>=M || h<0 || h>=N)
        return ;

    if(field[w][h]==0)
        return ;
    
    field[w][h] = 0;

    DFS(field,w-1,h,M,N);
    DFS(field,w+1,h,M,N);
    DFS(field,w,h-1,M,N);
    DFS(field,w,h+1,M,N);

}

int main(){
    int T;
    cin >> T;
    while(T--){
        int M, N, K;
        int w, h;
        int count = 0;
        cin >> M >> N >> K;

        int**field = new int*[M];

        for(int i = 0; i<M; i++)
            field[i] = new int[N];


        for(int i = 0; i<M; i++)
            for(int j = 0; j<N; j++)
                field[i][j] = 0;

        while(K--){
            cin >> w >> h;
            field[w][h] = 1;
        }

        for(int i = 0; i < M; i++)
            for(int j = 0; j < N; j++)
                if(field[i][j]==1){
                    DFS(field,i,j,M,N);
                    count++;
                }


        cout << count << endl;
        delete[] field;
    }

    return 0;
}