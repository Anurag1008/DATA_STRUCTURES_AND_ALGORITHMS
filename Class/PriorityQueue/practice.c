#include<stdio.h>
int size = 0;
void swap(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(int arr[],int size,int i){
    if(size == 0) printf("\n contain a single element \n");
    else{
        int largest = i;
        int l = 2*i+1;
        int r = 2*i+2;
        //main purpose it is not greater than the largest.
        if(l < size && arr[l] > arr[largest]) largest = l;
        if(r < size && arr[r] > arr[largest]) largest = r;
        if(largest != i){
            swap(&arr[i],&arr[largest]);
            heapify(arr,size,largest);
        }
    }
}

void insert(int arr[],int data){
    if(size == 0){
        arr[0] = data;
        size++;
    }
    else{
        arr[size] = data;
        size++;
        for(int i=size/2-1;i>=0;i--){
            heapify(arr,size,i);
        }
    }
}

void delete(int arr[],int data){
    if(size == 0) printf("priorityQueue is empty");
    else{
        for(int i=0;i<size;i++){
            if(arr[i] == data){
                swap(&arr[i],&arr[size-1]);
                size--;
                for(int i=size/2-1;i>=0;i--){
                    heapify(arr,size,i);
                }
            }
        }
    }
}

void print(int arr[]){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[100];
    insert(arr,5);
    insert(arr,7);
    insert(arr,19);
    insert(arr,11);
    insert(arr,12);
    delete(arr,19);
    delete(arr,11);
    print(arr);
    return 0;
}