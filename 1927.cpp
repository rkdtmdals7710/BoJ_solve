#include <iostream>

using namespace std;

const int MAX = 100001;
int minheap[MAX];
int heap_size = 0;

void swap(int &a, int &b);
void push(int target);
void pop();

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;
    cin >> n;

    while(n--){
        int tmp;
        cin >> tmp;
        if(tmp)
            push(tmp);
        else
            pop();
    }


    return 0;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void push(int target){
    heap_size++;
    minheap[heap_size] = target;

    int child = heap_size;
    int parent = child / 2;

    while(child > 1 && minheap[child] < minheap[parent]){
        swap(minheap[child], minheap[parent]);
        child /= 2;
        parent /= 2;
    }

}

void pop(){
    if(heap_size <= 0){
        cout << 0 << "\n";
        return;
    }
    cout << minheap[1] << "\n";

    minheap[1] = minheap[heap_size];
    heap_size--;
  

    int idx = 1;

    while(true){
        int left = idx * 2;
        int right = idx * 2 + 1;
        int smallest = idx;

        if(left <= heap_size && minheap[left] < minheap[smallest])
            smallest = left;

        if(right <= heap_size && minheap[right] < minheap[smallest])
            smallest = right;

        if(smallest == idx)
            break;

        else{
            swap(minheap[idx], minheap[smallest]);
            idx = smallest;
        }
    }

}