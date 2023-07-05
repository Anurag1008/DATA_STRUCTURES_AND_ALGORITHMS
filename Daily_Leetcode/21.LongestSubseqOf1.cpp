//1493. Longest Subarray of 1's After Deleting One Element


//by Sliding window appraoch

//Time Complexity : O(N^2)
//Space Complexity : O(1)

/*
class Solution {
public:
    //By Sliding Window 
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int ans = 0;
        int zeros = 0;
        for(int right = 0;right < nums.size();right++){
            if(nums[right] == 0) zeros++;
            while(zeros > 1){
                if(nums[left] == 0) zeros--;
                left++;
            }
            ans = max(ans,right - left + 1 - zeros);
        }
        return (ans == nums.size()) ? ans - 1 : ans;
    }
};
*/