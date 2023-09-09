//377. Combination Sum IV


/*
class Solution {
public:
    int recc(vector<int>&nums,int target,vector<int>&dp){
        if(target == 0) return 1;
        if(target < 0)  return 0;
        if(dp[target] != -1) return dp[target];
        int ans = 0;
        for(int k=0;k<nums.size();k++){
            if(target >= nums[k] ) ans = ans + recc(nums,target-nums[k],dp);
        } 
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return recc(nums,target,dp);
    }
};
*/