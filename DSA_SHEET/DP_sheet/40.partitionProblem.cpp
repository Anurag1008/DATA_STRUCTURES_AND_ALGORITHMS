/*

https://leetcode.com/problems/partition-equal-subset-sum/description/

416. Partition Equal Subset Sum

0/1 Knapsack Problem

//Recursion
class Solution {
public:
    bool partition(int i,vector<int>& nums,int sum){
        if(i >= nums.size() || sum < 0) return false;
        if(sum == 0) return true;
        bool include = partition(i+1,nums,sum-nums[i]);
        bool exclude = partition(i+1,nums,sum);
        return include || exclude;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto it : nums) sum+=it;
        if(sum%2 != 0) return false;
        sum = sum/2;
        return partition(0,nums,sum);
    }
};

//Memorization

lass Solution {
public:
    bool partition(int i,vector<int>& nums,int sum,vector<vector<int>>&dp){
        if(i >= nums.size() || sum < 0) return false;
        if(sum == 0) return true;
        if(dp[i][sum] != -1) return dp[i][sum];
        bool include = partition(i+1,nums,sum-nums[i],dp);
        bool exclude = partition(i+1,nums,sum,dp);
        return dp[i][sum] = include || exclude;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto it : nums) sum+=it;
        if(sum%2 != 0) return false;
        sum = sum/2;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return partition(0,nums,sum,dp);
    }
};

*/