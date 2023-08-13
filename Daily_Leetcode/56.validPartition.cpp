
//2369. Check if There is a Valid Partition For The Array


/*

class Solution {
public:
    bool isValid(int i,vector<int>& nums,vector<int>& dp){
        int n = nums.size();
        if(i == n) return true;
        if(dp[i] != -1) return dp[i];
        if(i+1 < n && nums[i] == nums[i+1]) if(isValid(i+2,nums,dp)) return dp[i] = true;
        if(i+2 < n && nums[i] == nums[i+1] && nums[i] == nums[i+2]) 
            if(isValid(i+3,nums,dp)) return dp[i] = true;
        if(i+2 < n && nums[i]+1 == nums[i+1] && nums[i]+2 == nums[i+2]) if(isValid(i+3,nums,dp)) return dp[i] =  true;
        return dp[i] = false;
    }
    bool validPartition(vector<int>& nums) {
        int  n = nums.size();
        vector<int>dp(n+1,-1);
        return isValid(0,nums,dp);
    }
};

*/