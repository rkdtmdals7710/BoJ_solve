#include <iostream>

using namespace std;

const int MAX = 100001;
int maxheap[MAX];
int heap_size = 0;

void swap(int *a, int *b){
    int *tmp = a;
    a = b;
    b = tmp;
}

void push(int target){
    heap_size++;
    maxheap[heap_size] = target;

    int child = heap_size;
    int parent = child / 2;

    while(child > 1 && maxheap[child] > maxheap[parent]){
        swap(maxheap[child] , maxheap[parent]);
        child /= 2;
        parent /= 2;
    }
}

void pop(){
    if(heap_size<=0){
        cout << 0 << "\n";
        return; 
    }    
    cout << maxheap[1] << "\n";
    maxheap[1] = maxheap[heap_size];
    heap_size--;
    int idx = 1;
    
    while(true){
        int left = idx * 2;
        int right = idx * 2 + 1;
        int largest = idx;

        if(left <= heap_size && maxheap[left] > maxheap[largest])
            largest = left;
        if(right <= heap_size && maxheap[right] > maxheap[largest])
            largest = right;

        if(idx==largest)
            break;

        else{
            swap(maxheap[idx], maxheap[largest]);
            idx = largest;
        }
    }
   
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int  n;
    cin >> n;
    while(n--){
        int tmp;
        cin >> tmp;
        if(tmp==0)
            pop();
        else
            push(tmp);
    }




    return 0;
}