#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class minHeap{
    int *arr;
    int size;
    int capacity;
    void swap(int i,int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    void heapify(int i){
        int l = 2*i+1;
        int r = 2*i+2;
        int smallest = i;
        if(l<size && arr[l]<arr[i])
            smallest = l;
        if(r<size && arr[r]<arr[smallest])
            smallest = r;
        if(smallest!=i){
            swap(i,smallest);
            heapify(smallest);
        }
    }
    public:
    minHeap(int cap){
        capacity = cap;
        size = 0;
        arr = new int[cap];
    }
    void insert(int x){
        if(size==capacity)
            return;
        arr[size] = x;
        size++;
        int i = size-1;
        while(i>0 && arr[i]<arr[(i-1)/2]){
            swap(i,(i-1)/2);
            i = (i-1)/2;
        }
    }
    int extractMin(){
        if(size==0)
            return -1;
        int min = arr[0];
        swap(0,size-1);
        size--;
        heapify(0);
        return min;
    }
    void print(){
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main()
{
    minHeap h(10);
    h.insert(5);
    h.insert(3);
    h.insert(4);
    h.insert(1);
    h.insert(2);
    h.print();
    cout<<h.extractMin()<<endl;
    h.print();
    return 0;

}