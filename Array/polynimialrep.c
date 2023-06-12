#include<stdio.h>
#include<stdlib.h>

void add(int *y,int *y1,int n,int m)
{
    int arr[m];
    int j=0;
    for(int i=0;i<m;i++)
    {
        if(j != n)
        {
            arr[i]=y[i]+y1[i];
            j++;
        }
        else
            arr[i] = y1[i];
    }
    
    for(int i=m-1;i>=1;i--)
    printf("%dx^%d + ",arr[i],i);
    printf("%d",arr[0]);
}

int main()
{
    //let polynomial be 3x^2+5x+2
    int y[3] = {2,5,3};
    int y1[4] = {10,8,9,6}; //6x^3+9x^2+8x+10
    add(y,y1,3,4);
    return 0;
}