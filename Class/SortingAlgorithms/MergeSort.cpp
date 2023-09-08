/*
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        vector<int>leftarr(m-l+1);
        vector<int>rightarr(r-m);
        for(int i=0;i<leftarr.size();i++) leftarr[i] = arr[l+i];
        for(int i=0;i<rightarr.size();i++) rightarr[i] = arr[m+i+1];
        
        int i = 0;
        int j = 0;
        int index = l;
        while(i < leftarr.size() && j < rightarr.size()){
            if(leftarr[i] <= rightarr[j]){
                arr[index] = leftarr[i];
                i++;
            }
            else if(leftarr[i] >= rightarr[j]){
                arr[index] = rightarr[j];
                j++;
            }
            index++;
        }
        
        while(i < leftarr.size()){
            arr[index] = leftarr[i];
            index++;
            i++;
        }
        
        while(j < rightarr.size()){
            arr[index] = rightarr[j];
            index++;
            j++;
        }
        
        leftarr.clear();
        rightarr.clear();
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l >=r ) return;
        int mid = (l + r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};
*/