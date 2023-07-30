//852. Peak Index in a Mountain Array

/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxele = INT_MIN;
        int maxidx;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > maxele){
                maxele = arr[i];
                maxidx = i;
            }
        }
        return maxidx;
    }
};


//Binary search
class Solution {
public:
    //using binary search
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2 ; 
        while(s < e){
            if(arr[mid] < arr[mid+1]) s = mid+1;
            else e = mid;
            mid = s + (e-s)/2 ; 
        }
        return s;
    }
};
*/