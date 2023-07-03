//https://practice.geeksforgeeks.org/problems/merge-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
        int n1 = mid - l + 1;
        int n2 = r - mid;
        vector<int>L(n1);
        vector<int>R(n2);
        
        for(int i=0;i<n1;i++) L[i] = arr[l+i];
        for(int j=0;j<n2;j++) R[j] = arr[mid + 1 + j];
        
        int i=0;
        int j=0;
        int k=l;
        
        while(i < n1 && j < n2){
            if(L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }
            else{ 
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        
        //remaining elements of L.
        
        while(i < n1){
            arr[k] = L[i];
            k++;
            i++;
        }
        
        //remaining elements of R.
        
        while(j < n2){
            arr[k] = R[j];
            k++;
            j++;
        }
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
       if(l<r){
           int mid = l + (r - l)/2;
           mergeSort(arr,l,mid);
           mergeSort(arr,mid+1,r);
           merge(arr,l,mid,r);
       } 
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends