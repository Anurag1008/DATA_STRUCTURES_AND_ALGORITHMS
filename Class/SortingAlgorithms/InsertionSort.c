#include<stdio.h>
#include<stdlib.h>

void insertionSort(int *arr,int n)
{
    for(int i =1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void selectionSort(int arr[], int n)
{
    int minIndex;
    for (int i = 0; i < n-1; i++)
    {
        minIndex = i;
        for (int j = i+1; j < n; j++)
        {
          if (arr[j] < arr[minIndex])
              minIndex = j;
        }
        if (minIndex!=i)
            swap(&arr[minIndex], &arr[i]);
    }
}

void bubbleSort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            swap(&arr[i],&arr[j]);
        }
    }
}

int main()
{
    int arr[10] = {3,2,5,6,3,2,0,1000,-1000,10};

    //insertionSort(arr,10);

    //selectionSort(arr,6);

    bubbleSort(arr,6);

    for(int i = 0;i < 10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
