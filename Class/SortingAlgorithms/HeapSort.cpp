
//https://practice.geeksforgeeks.org/problems/heap-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//                          best       averege      worst                  space complexity
//heap sort              O(nlog(n)) O(nlog(n))  O(nlog(n))                       O(1)
//Merge sort             O(nlog(n)) O(nlog(n))  O(nlog(n))                       O(n)   
//quick sort             O(nlog(n)) O(nlog(n))  O(n^2)                           O(log(n))
//Bubble sort            O(n)       O(n^2)      O(n^2)                           O(1)
//Insertion sort         O(n)       O(n^2)      O(n^2)                           O(1)
//Selection sort         O(n^2)     O(n^2)      O(n^2)                           O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    void heapify(int arr[], int n, int i)  
    {
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;
        
        if(left < n && arr[left] > arr[largest]) largest = left;
        if(right < n && arr[right] > arr[largest]) largest = right;
        
        if(largest != i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i = n-1;i>=0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }
};
