/*
https://leetcode.com/problems/search-in-rotated-sorted-array/description/

33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Binary search solution
        int l = 0;
        int r = nums.size()-1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(target == nums[mid]) return mid;
            if(nums[mid] >= nums[l]){
                if(target >= nums[l] && target <= nums[mid]) r =mid-1;
                else l = mid + 1;
            } 
            else{
                if( target >= nums[mid] && target <=nums[r]) l = mid+1;
                else r = mid-1;
            }
        }
        return -1;
    }
};
*/