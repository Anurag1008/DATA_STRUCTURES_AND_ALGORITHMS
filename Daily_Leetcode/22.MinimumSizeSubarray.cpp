//209. Minimum Size Subarray Sum

//Sliding window and Binary Search
//Time Complexity : O(N*log(N))
//Space Complexity : O(1)

/*
class Solution {
public:
    bool window(int size,vector<int>&nums,int target){
        int i=0;
        int j=0;
        int sum = 0;
        int mx = INT_MIN;
        int n = nums.size();
        while(j<n){
            sum+=nums[j];
            if(j-i+1 == size){
                mx = max(sum,mx);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(mx>=target) return true;
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 1;
        int right = nums.size();
        int mn = 0;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(window(mid,nums,target)){
                right = mid - 1;
                mn = mid;
            }
            else left = mid + 1;
        }
        return mn;
    }
};
*/


//Sliding Window approach
//Time Complexity : O(N)
//Space Complexity : O(1)

/*
class Solution {
public:
    //Sliding Window appraoch
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = INT_MAX;
        int sum = 0;
        int left = 0;
        for(int right = 0;right<nums.size();right++){
            sum+=nums[right];
            while(sum >= target){
                sum-=nums[left];
                minlen = min(minlen,right - left + 1);
                left++;
            }
        }
        if(minlen == INT_MAX) return 0;
        return minlen;
    }
};
*/