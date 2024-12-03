#include <iostream>
using namespace std;

void DFS(int** graph, int node, int N, int* count){
    count++;
    
    if(graph[node][0]==true)
        return;

    graph[node][0] = true;

    for(int i = 1; i<=N; i++){
        if(graph[node][i]==true)
            DFS(graph, i, N , count);            
    }
    return;
}

int main(){
    int M, N, R;
    int u, v;
    cin >> N >> M >> R;

    int**graph = new int*[N+1];
    for(int i = 0; i<=N; i++)
        graph[i] = new int[N+1];

    while(M--){
        cin >> u >> v;
        graph[u][v] = 1;
    }

    
    return 0;
}